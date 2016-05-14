# TOS-intel
Tool for extracting succinct logic models from large nesC (network embedded C for the Berkeley TinyOS operating system) firmware.

Takes as input a TinyOS application and information about the sensor platform, and:

- Generates _Input_ and _Output_ explanations for the code, i.e., (i) that set of external
events the application takes as inputs, and (ii) which system interfaces are
used to output signals, respectively.
- Generates compact _What-if_ and _How-to_ explanations, i.e., state machines
showing an abstracted model of program logic: the model shows (i) what
happens in the logic if certain _Input_ values are imposed, and (ii) how to
reach certain _Output_ values without dictating the _Inputs_.

For parsing the platform C source you need (included here):
- __PLY-3.4__ (Python implementation of lex/yacc)
- __pycparser-2.03__ (a PLY-based parser for C which, in this version, supports
   C99 and no gcc extensions)

For generating execution paths for the model you need:
- [__CBMC/CPROVER__](http://www.cprover.org/), a model checker for ANSI C 

Publication: 

_Intelligible TinyOS Sensor Systems: Explanations for Embedded Software_. 
__D. Bucur.__
Int. Interdisc. Conf. on Modeling and Using Context. 
Springer Lecture Notes in Computer Science (LNCS), Volume 6967, pages 54-66, 2011. [pdf](http://doina.net/pubs/Context11-Bucur.pdf) or 
[SpringerLink](http://link.springer.com/chapter/10.1007/978-3-642-24279-3_6)
