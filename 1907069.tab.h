
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
     WHILE = 269,
     PRINT = 270,
     ARRAY = 271,
     TYPE_INT = 272,
     TYPE_FLOAT = 273,
     TYPE_CHAR = 274,
     IF = 275,
     ELSE = 276,
     ELSEIF = 277,
     LOOP = 278,
     SWITCH = 279,
     DEF = 280,
     STORE = 281,
     BLOCKSTART = 282,
     TO = 283,
     BLOCKEND = 284,
     LEFTPARANTHESIS = 285,
     RIGHTPARANTHESIS = 286,
     AND = 287,
     OR = 288,
     GREATERTHAN = 289,
     LESSTHAN = 290,
     GREATEREQUAL = 291,
     LESSEQUAL = 292,
     EQUALEQUAL = 293,
     COMMA = 294,
     SEMICOLON = 295,
     GCD = 296,
     LCM = 297,
     SORT = 298,
     ASC = 299,
     DES = 300,
     MAX = 301,
     MIN = 302,
     SIN = 303,
     COS = 304,
     TAN = 305,
     STRING = 306,
     SHOW = 307,
     LENGTH = 308,
     NOTEQUAL = 309,
     NEWLINE = 310
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 66 "1907069.y"

      char     *str;
      int      integerValue;
      float    floatValue;



/* Line 1676 of yacc.c  */
#line 115 "1907069.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


