# TOS-intel
Tool for extracting succinct logic models from large nesC (network embedded C for the Berkeley TinyOS operating system) firmware.

Takes as input a TinyOS application and information about the sensor platform, and:

- Generates Input and Output explanations for the code, i.e., (i) that set of external
events the application takes as inputs, and (ii) which system interfaces are
used to output signals, respectively.
- Generates compact What-if and How-to explanations, i.e., state machines
showing an abstracted model of program logic: the model shows (i) what
happens in the logic if certain Input values are imposed, and (ii) how to
reach certain Output values without dictating the Inputs.

For parsing the platform C source you need (included here):
- PLY-3.4 (Python implementation of lex/yacc)
- pycparser-2.03 (a PLY-based parser for C which, in this version, supports
   C99 and no gcc extensions)

For generating execution paths for the model you need:
- (CBMC/CPROVER)[http://www.cprover.org/], a model checker for ANSI C 

Publication: 

Intelligible TinyOS Sensor Systems: Explanations for Embedded Software. 
Doina Bucur.
Int. Interdisc. Conf. on Modeling and Using Context. 
Springer Lecture Notes in Computer Science (LNCS), Volume 6967, pages 54-66, 2011.

[pdf](http://doina.net/pubs/Context11-Bucur.pdf)
or 
[SpringerLink](http://link.springer.com/chapter/10.1007/978-3-642-24279-3_6)