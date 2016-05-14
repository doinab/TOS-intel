#! /usr/bin/env python

import sys, re, string
from tosexp_preprocess import *
from pycparser import c_parser, c_ast, parse_file

if len(sys.argv) < 2:
	print """Usage:
	python tosexp in=[file].c (to preprocess file.c into a parsable pp.c)
	python tosexp pp=[file].c (to parse a preprocessed file.c)
	"""
	sys.exit("[Log] Missing input, exiting.")

if re.match(r'in=.*$', sys.argv[1]):
	filein_name  = sys.argv[1][3:]
	filepp_name  = "pp.c"
	filein = open(filein_name,    'r')
	filepp = open(filepp_name,   'w+')

	# ------------------------------------------------------------------------
	# Preprocess input file into filepp 

	filepp.write('#include "lib/msp430_hw.h"\n')
	line = filein.readline()
	while line != '':
		line = comment_ellipsis_macros(line)
		line = comment_empty_struct_declarators(line)
		line = remove_line_directives(line)
		line = simplify_attr(line)
		line = turn_msp430_asm_line_into_c(line)
		filepp.write(line)
		line = filein.readline()
	filein.close()
	filepp.close()

	print "[Log] Preprocessed input file."

	# ------------------------------------------------------------------------
	# Test parsing preprocessed filepp 

	ast = parse_file(filepp_name, use_cpp=True)
	if not isinstance(ast, c_ast.FileAST):
		sys.exit("[Log] Incorrect AST, exiting.")
	ast.show(attrnames=True, showcoord=True)

	print "[Log] Parsed preprocessed file into AST."

elif re.match(r'pp=.*$', sys.argv[1]):
	print "[Log] Not yet implemented."
else:
	sys.exit("[Log] Input not understood, exiting.")
