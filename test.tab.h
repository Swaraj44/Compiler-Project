
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     VARIABLE = 260,
     EQUAL = 261,
     CHAR = 262,
     MATHEMATECAL_OPERATOR = 263,
     PLUS = 264,
     MINUS = 265,
     MUL = 266,
     DIV = 267,
     INCREMENT_DECREMENT = 268,
     PRINT = 269,
     ARRAY = 270,
     TYPE_INT = 271,
     TYPE_FLOAT = 272,
     TYPE_CHAR = 273,
     IF = 274,
     ELSE = 275,
     ELSEIF = 276,
     LOOP = 277,
     SWITCH = 278,
     DEF = 279,
     STORE = 280,
     BLOCKSTART = 281,
     TO = 282,
     BLOCKEND = 283,
     LEFTPARANTHESIS = 284,
     RIGHTPARANTHESIS = 285,
     AND = 286,
     OR = 287,
     GREATERTHAN = 288,
     LESSTHAN = 289,
     GREATEREQUAL = 290,
     LESSEQUAL = 291,
     EQUALEQUAL = 292,
     COMMA = 293,
     SEMICOLON = 294,
     GCD = 295,
     LCM = 296,
     SORT = 297,
     ASC = 298,
     DES = 299,
     MAX = 300,
     MIN = 301,
     SIN = 302,
     COS = 303,
     TAN = 304,
     STRING = 305,
     SHOW = 306,
     LENGTH = 307,
     NOTEQUAL = 308,
     NEWLINE = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 66 "test.y"

      char     *str;
      int      integerValue;
      float    floatValue;



/* Line 1676 of yacc.c  */
#line 114 "test.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


