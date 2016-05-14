#! /usr/bin/env python

import sys, re, string, random

"""
Preprocessing solves the following problems:

- [v] two ellipsis macros: dbg(mode, format, ...)
- [v, mostly from TOC2CProver] unknown: __attribute ((packed)) __attribute((wakeup)) __attribute((interrupt(12))) 
- [v, above] unknown: __attribute((packed)) as structure type (very often)
- [v] unknown: __extension__
- [v, from TOS2CProver] illegal empty struct: struct __nesc_attr_atmostonce {};
- [v, the former removed, the latter commented out] function attributes __attribute((wakeup)) __attribute((interrupt(12))) 
- [v, from TOS2CProver] compounds: c = { .f = x };
- [v, from TOS2CProver] assembly: __asm volatile ("eint"); 
- [v, from TOS2CProver; variable is later parsed as P1OUT@"0x0021"] assembly in: volatile unsigned char P1OUT __asm ("0x0021"); 
- [v, from TOS2CProver; left as such by preprocessor, to be parsed] DMA: * (volatile uint16_t * )386U &= ~0x0010;
- declarator w/o ID in struct: unsigned int  : 0; (always in this precise form)

Pycparser 2.03 gets stuck when 1.03+TOS2CProver doesn't, so the latter won. In
an initial phase, I locate non-standard C language by commenting out code
incrementally. Then, since it is hard to locate errors in app.c, I must comment
nesc line macros first in a preprocessing phase---In doing so, comments inside
comments may appear.
"""

"""
The only unsolved issues:

- typedef union dallasid48_serial_t {
  uint8_t ...
  struct  {
    uint8_t ...
  }; <-- nonstandard; needs variable name; now inserted a "temp"
     <-- BaseStation, Oscilloscope, LowPowerSensingBase/Sampler: 1
"""

# ------------------------------------------------------------------------------
# comment those macro lines which use elipsis ...; the macros are never used

def comment_ellipsis_macros(line):
  if re.match(r'#.*(.*\.\.\..*).*\n$', line):
    return '/* ' + line[0:-1] + ' */\n'
  return line


# ------------------------------------------------------------------------------
# in struct declarators with no id (unsigned int  : 0;), insert random
# variable name as id

def comment_empty_struct_declarators(line):
  pattern = re.compile(r'(?P<lead>\s*unsigned\s+int\s*)'
                       r'\:\s*'
                       r'(?P<bitcount>\d+)'
                       r'\s*;\s*\n')
  l = pattern.match(line)  
  # print l
  if l is not None:
    return l.group('lead') + \
           ''.join(random.choice(string.ascii_lowercase) for x in range(5)) + \
           ' : ' + \
           l.group('bitcount') + \
           ' ;\n'

  return line

# ------------------------------------------------------------------------------
# transform '$'s into '_' indiscriminately

def turn_dll_into__(line):
  return line.replace('$', '_')

# ------------------------------------------------------------------------------
# comment # line N and # N "file" directives 

def remove_line_directives(line):
  if re.match(r'#\s*\d+\s+\".*\n$', line) or \
     re.match(r'#\s*line\s+\d+\s*\n$', line):
    return '/* ' + line[0:-1] + ' */\n'
  return line

# ------------------------------------------------------------------------------
# remove __attribute((packed)) 
# remove __extension__
# remove __attribute((wakeup)) 
# remove __attribute((noinline)) 
# remove __attribute((naked)) 
# comment __attribute((interrupt(N))) into /* __attribute_interrupt_N */

def simplify_attr(line):
  l1 = line.replace(r'__attribute__((packed))', '')
  l1 = l1.replace(r'__attribute((packed))', '')
  l1 = l1.replace(r'__extension__ ', '')

  l2 = l1.replace(r'__attribute((wakeup)) ', '')
  l2 = l2.replace(r'__attribute((noinline)) ', '')
  l2 = l2.replace(r'__attribute((naked)) ', '')
  l2 = l2.replace(r'__attribute((unused)) ', '')

  l3 = re.sub(r'__attribute\(\(interrupt\((\d+)\)\)\)',
              r'/*__attribute_interrupt_\1*/',
              l2)

  return l3

# ------------------------------------------------------------------------------
def turn_msp430_asm_line_into_c(line):
  # split by ';'
  instr_list = re.split(r';', line)

  final_instr_list = [];

  for instr in instr_list:
    # if this is an __asm instruction, call its handling function
    if re.match(r'\s*__asm\s+', instr):
      final_instr_list.append(turn_msp430_asm_instr_into_c(instr))
    else:
      final_instr_list.append(instr)

  # return inlined final list
  return ';'.join(final_instr_list)

# ------------------------------------------------------------------------------
# turn into C asm instructions of the type
# __asm volatile ("eint");}
# __asm ("mov.w r2,%0" : "=r"(t->regs.status));
# __asm volatile ("" :  :  : "memory");
# __asm ("mov.w r4,%0" : "=m"(TinyThreadSchedulerP_yielding_thread->regs.r4)); ... on a long line

def turn_msp430_asm_instr_into_c(instr):
  pattern = re.compile(r'\s*__asm\s+'              
            r'(?P<qualifier>\w*)\s*'                   # at most one word-qualifier 
            r'\(\s*'                                   # (
            r'(?P<asm_instr>.*)\s*'                    # followed by an asm instr
            r'\)\s*')                                  # )

  asm_instr = pattern.match(instr)

  if asm_instr is None:
    # unrecognized assembly instruction
    print '[Log] Unknown asm instruction: ' + instr
    return instr

  # translate instruction
  # nop
  if re.match(r'^\"nop\"$', asm_instr.group('asm_instr')):
    return ''

  # eint
  if re.match(r'^\"eint\"$', asm_instr.group('asm_instr')):
    return '_R2 |= 0x0008'

  # dint
  if re.match(r'^\"dint\"$', asm_instr.group('asm_instr')):
    return '_R2 &= 0xfff7'

  # "" :  :  : "memory" ; memory clobbering, against gcc optimizations
  if re.match(r'^\"\"\s*:\s*:\s*:\s*\"memory\"\s*$', asm_instr.group('asm_instr')):
    return ''

  # "bis  %0, r2" :  : "m"(temp) ; "bis src, dst" := "src or dst -> dst"
  pattern = re.compile(r'^\"bis(\.w)?\s+'
            r'%0,\s*'
            r'r(?P<reg_no>\d+)\"\s*:\s*:\s*'
            r'\"[mr]\"\('
            r'(?P<c_code>.*)'
            r'\)\s*$')
  mov_instr = pattern.match(asm_instr.group('asm_instr'))  
  if mov_instr is not None:
    return '_R' + mov_instr.group('reg_no') + ' |= ' + mov_instr.group('c_code')

  # "mov(.w)? rN,%0" : "=m"(C code) ; any memory operand allowed
  # "mov(.w)? rN,%0" : "=r"(C code) ; a general register allowed
  # __asm ("mov.w r2,%0" : "=r"(t->regs.status));
  pattern = re.compile(r'^\"mov(\.w)?\s+'
            r'r(?P<reg_no>\d+),\s*'
            r'%0\"\s*:\s*'
            r'\"=[mr]\"\('
            r'(?P<c_code>.*)'
            r'\)\s*$')
  mov_instr = pattern.match(asm_instr.group('asm_instr'))  
  if mov_instr is not None:
    return mov_instr.group('c_code') + ' = _R' + mov_instr.group('reg_no') 

  # "mov(.w)? %0, rN" :  : "=m"(C code) 
  # "mov(.w)? %0, rN" :  : "=r"(C code) 
  pattern = re.compile(r'^\"mov(\.w)?\s+'
            r'%0,\s*'
            r'r(?P<reg_no>\d+)\"\s*:\s*:\s*'
            r'\"[mr]\"\('
            r'(?P<c_code>.*)'
            r'\)\s*$')
  mov_instr = pattern.match(asm_instr.group('asm_instr'))  
  if mov_instr is not None:
    return '_R' + mov_instr.group('reg_no') + ' = ' + mov_instr.group('c_code')

  # untreated assembly instruction
  else:
    print '[Log] Untreated asm instruction: ' + asm_instr.group('asm_instr')

  return instr

 