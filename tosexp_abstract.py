#! /usr/bin/env python

import sys, re, string

if len(sys.argv) < 2 or \
   not re.match(r'in=.*$', sys.argv[1]):

	print """Usage:
	python tosexp_abstract in=[file].smv
	"""
	sys.exit("[Log] Missing input, exiting.")

# ------------------------------------------------------------------------
	
def parse_smv_line(line):

	global transitions, states, temptran
	
	# line is empty
	# line is a comment
	# line says 'MODULE main'
	if re.match(r'^\s*$', line) or \
	   re.match(r'^\s*--', line) or \
	   re.match(r'^\s*MODULE\s+main\s*$', line):
		return

	# line has a comment at end
	#pattern = re.compile(r'(?P<lead>.*)(?P<comment>--.*)')
	#l = pattern.match(line)  
	#if l is not None:
	#	parse_smv_line(l.group('lead'))
	#	return

	# line says 'VAR PC: 0..NUMBER;'
	#pattern = re.compile(r'\s*VAR\s+PC\s*:\s*0\.\.(?P<bound>\d+)\s*;.*')
	#l = pattern.match(line)  
	#if l is not None:
	#	global state_max; 
	#	state_max = l.group('bound')
	#	# print state_max
	#	return

	# line says ' PC=198: 199;'
	pattern = re.compile(r'\s*PC\s*=\s*(?P<state1>\d+)\s*:\s*(?P<state2>\d+).*')
	l = pattern.match(line)  
	if l is not None:
		if l.group('state1') not in transitions:
			transitions[l.group('state1')] = []
		transitions[l.group('state1')].append((l.group('state2'),'1'))
		return
	
	# line says ' PC=1687: case \n guard1687: 1689; \n 1: 1688; \n esac;'
	pattern = re.compile(r'\s*PC\s*=\s*(?P<state1>\d+)\s*:\s*case.*\n'
	                     r'\s*(?P<guard2>\w+)\s*:\s*(?P<state2>\d+).*\n'
	                     r'\s*(?P<guard3>\w+)\s*:\s*(?P<state3>\d+).*')
	l = pattern.match(line)
	if l is not None:
		if l.group('state1') not in transitions:
			transitions[l.group('state1')] = []
		transitions[l.group('state1')].append((l.group('state2'), l.group('guard2')))
		transitions[l.group('state1')].append((l.group('state3'), l.group('guard3')))
		# print transitions[l.group('state1')]
		return

	# line says ' TRANS (PC=5831 & runs) -> next(b0__P5OUT_eq_0)=b0__P5OUT_eq_0 or 1 or 1'
	# or 'TRANS (PC=5087 & runs) -> 1' 
	# fill in initial states
	pattern = re.compile(r'\s*TRANS\s*\(\s*PC=\s*(?P<state>\d+).*->\s*(?P<change>[=()\w]+)\s*')
	l = pattern.match(line)  
	if l is not None:
		# no change
		if re.match('next\('+predicate+'\)='+predicate, l.group('change')) or\
		   re.match('1', l.group('change')):
			if l.group('state') in transitions:
				
				temptran[l.group('state')] = '='
				
				for tpl in transitions[l.group('state')]:
					# a forward loop
					if states[tpl[0]] == '':
						states[tpl[0]] = states[l.group('state')]
					# or backward loops
					elif states[tpl[0]] == '0':
						if states[l.group('state')] == '1' or \
						   states[l.group('state')] == '*':
							states[tpl[0]] = '*'
					elif states[tpl[0]] == '1':
						if states[l.group('state')] == '0' or \
						   states[l.group('state')] == '*':
							states[tpl[0]] = '*'
					
		# change to 0
		if re.match('next\('+predicate+'\)=0', l.group('change')):
			if l.group('state') in transitions:
				
				temptran[l.group('state')] = '0'				
				
				for tpl in transitions[l.group('state')]:
					# a forward loop
					if states[tpl[0]] == '':
						states[tpl[0]] = '0'
					# or backward loop
					elif states[tpl[0]] == '1':
						states[tpl[0]] = '*'
					
		# change to 1
		if re.match('next\('+predicate+'\)=1', l.group('change')):
			if l.group('state') in transitions:

				temptran[l.group('state')] = '1'
				
				for tpl in transitions[l.group('state')]:
					# a forward loop
					if states[tpl[0]] == '':
						states[tpl[0]] = '1'
					# or backward loop
					elif states[tpl[0]] == '0':
						states[tpl[0]] = '*'

	# all other cases
	# print line

def add_states(s1, s2):
	# s1 != s2
	return '*'

def compute_reachability():
	
	global transitions, states
	change = False

	for this in range(state_max+1):
		if str(this) in transitions and str(this) in temptran:
			for next in transitions[str(this)]:
				# no change _expected_
				if temptran[str(this)] == '=' and \
				   states[str(this)] != states[next[0]]:
					change = True
					print 'change'
					# fold forwards
					states[next[0]] = add_states(states[str(this)], states[next[0]])

	return change


# ------------------------------------------------------------------------
# if re.match(r'in=.*$', sys.argv[1]):
filein_name  = sys.argv[1][3:]
filein = open(filein_name, 'r')
# fileout_name  = "abstract.txt"
# filepp = open(filepp_name,   'w+')

predicate = 'b0'
# states are numbered from 0 to state_max, just like PC
state_max = 5843
# a state is a simple string: 0, 1, or *
# all states are stored in a dictionary, states = {533: '*'}
states = {}
for i in range(state_max+1):
	states[str(i)] = '' # <- if states remain empty, they are unreachable
states['0'] = '*'
#print states

# a transition (state-to-state-with-guard): a 2-tuple (s2,g=1)
# all transitions are listed by s1, in a dictionary, {s1: [(s2, g), (s3, g)]}
transitions = {}
# a dictionary, {s1: type}, where type = 0|1|=
temptran = {}

# Read input file 
line = filein.readline()
while line != '':
	# cases are 4-liners
	if re.match(r'.*case.*', line) and not re.match(r'.*ASSIGN.*', line):
		line1 = filein.readline()
		line2 = filein.readline()
		line3 = filein.readline()
		# print line + line1 + line2 + line3
		parse_smv_line(line + line1 + line2 + line3)
	else:
		parse_smv_line(line)
	line = filein.readline()

filein.close()

while True:
	res = compute_reachability()
	if not res:
		break

#print transitions

print 'states: ' + str(states)
print '\n'

#for i in range(state_max+1):
#	if str(i) in states:
#		print str(i) + ': ' + states[str(i)]

# the compacted states
tstates = {}
tstates['0'] = states ['0']

tstate_mapping = {} # dictionary, string to list
tstate_mapping['0'] = ['0']

tstate_max = 0
ttransitions = {} #  {t1: ((t2, g1), (t2, g2)), amassing all concrete next states

# find the abstract states and the state mapping:
# for all concrete states
for i in range(state_max+1):
	found = False
	
	# read the predicate value at that state
	val =  states[str(i)]
	# if != exists an abstract state of that value in tstate, add a tstate
	for j in range (tstate_max+1):
		if tstates[str(j)] == val:
			found = True
			# print 'found'
			tstate_mapping[str(j)].append(str(i))
			break
	if not found:
		tstate_max += 1
		tstates[str(tstate_max)] = val
		tstate_mapping[str(tstate_max)] = [str(i)]
	# print tstate_max

print 'tstates: '+ str(tstates)
print '\n'

print 'tstate mapping:\n'
for i in range(tstate_max+1):
	print str(i) + ': ' + str(tstate_mapping[str(i)]) + '\n'

# find the abstract transitions:
# for all concrete transitions
for i in range(state_max+1):
	if str(i) in transitions:
		for j in transitions[str(i)]:
			
			# find t1 and t2 in any list from tstate_mapping
			t1 = -1
			for k in range(tstate_max+1):
				if str(i) in tstate_mapping[str(k)]:
					t1 = k
					break
			t2 = -1
			for k in range(tstate_max+1):
				if j[0] in tstate_mapping[str(k)]:
					t2 = k
					break
			print 'concrete transition ' + str(i)+'->'+j[0]+'('+j[1]+') is abstract ' + str(t1)+'->'+str(t2)+'('+j[1]+')'

			# add to ttransitions
			# whether or not t1 == t2:
			if str(t1) not in ttransitions:
				ttransitions[str(t1)] = []
			# do remove the duplicate transitions
			if (str(t2), j[1]) not in ttransitions[str(t1)]:
				ttransitions[str(t1)].append((str(t2), j[1]))
			# signal inter-state abstract transitions:
			if t1 != t2:
				print '   inter-state abstract transition: ' + str(i)+'->'+j[0]+'('+j[1]+') is abstract ' + str(t1)+'->'+str(t2)+'('+j[1]+')'

print 'ttransitions:\n'
for i in range(tstate_max+1):
	print str(i) + ': ' + str(ttransitions[str(i)]) + '\n'
