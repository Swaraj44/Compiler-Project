
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "1907069.y"

   #include <stdio.h>
   #include<stdlib.h>
   #include<math.h>
   #include<string.h>
   int yylex(void);

   typedef struct Variable_Class
   {
       char *Var_Name;
       char *Var_Type;
       int   Var_Value;
       float F_Var_Value;
       char  C_Var_Value;
   }variableWithValues;


   variableWithValues Variable_Storage[1000];
   int Current_Variable = 0;
   int Current_Variable_for_array = 100;
   int switch_matched = 0;
   void AddIntValue  (variableWithValues *pointer,char *name , int value );
   void Add_Int_Variable (char *name , int value );

void AddIntValueAgain (char *name , int value);
   void AddFloatValue(variableWithValues *pointer,char *name , float value );
   void Add_float_Variable (char *name , float value );

void AddNewFloatValue (char *name , float value );



   void AddFloatValue_Checkwhetherfirstvariabledeclared ( char *name, char *firstVariable , char *operator , float second_value );
   void AddFloatValue_Checkwhethersecondvariabledeclared ( char *name, float first_value , char *operator , char *secondVariable );
   void AddCharValue(variableWithValues *pointer,char *name ,  char *value );
   void MakeAnArrayOfIntegers( char *name , int size);
   void StoreIntegersInAnArray( char *name,int index,int value);
   void StoreFloatInAnArray( char *name,int index,float value);
   void StoreCharInAnArray( char *name,int index,char *value);
   void StoreArrayByLoop ( char *name);
   void Variables_in_Variable_Storage();
   void Display_Function(char *name);
   void Array_Display(char *name);
   void Array_Display_loop(char *name,int loopIndex);
   void inc_dec_function(char *name , char * operator , int unit);
   void inc_dec_function_variableUnit(char *name , char * operator , char *unit);
   void GCD_Calculator(char *name, int val1 , int val2);
   void LCM_Calculator(char *name, int val1 , int val2);
   void Sort_Asc(char *name);
   void Sort_Des(char *name);
   void Find_Max(char *var ,char *name);
   void Find_Min(char *var ,char *name);
   void Sine(char *name , float var);
   void Cos(char *name , float var);
   void Tan(char *name , float var);
   void StoreAnArrrayValueToVariable(char *var,char *arr , int index);
   void FindLengthofArray(char *var , char *arr);
   


/* Line 189 of yacc.c  */
#line 134 "1907069.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 66 "1907069.y"

      char     *str;
      int      integerValue;
      float    floatValue;



/* Line 214 of yacc.c  */
#line 233 "1907069.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 245 "1907069.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    12,    15,    18,    21,
      24,    27,    30,    34,    39,    43,    48,    53,    58,    62,
      66,    72,    78,    84,    90,    95,    97,    99,   103,   107,
     111,   115,   119,   123,   125,   127,   129,   131,   133,   137,
     141,   145,   149,   153,   157,   163,   173,   188,   194,   198,
     202,   204,   208,   212,   216,   220,   224,   228,   239,   250,
     261,   274,   279,   282,   283,   286,   292,   295,   299,   303,
     308,   313,   318,   323,   328,   335
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,    -1,    -1,    58,    59,    -1,    58,
      63,    -1,    58,    64,    -1,    58,    60,    -1,    58,    68,
      -1,    58,    69,    -1,    58,    65,    -1,    58,    74,    -1,
      58,    15,    51,    -1,    58,    15,    51,    55,    -1,    58,
      15,     5,    -1,    58,    15,    16,     5,    -1,    17,     5,
       6,    60,    -1,    18,     5,     6,    62,    -1,     5,     6,
      51,    -1,    16,     5,     3,    -1,    16,     5,     3,     6,
       3,    -1,    16,     5,     3,     6,     4,    -1,    16,     5,
       3,     6,     7,    -1,     5,     6,    16,     5,     3,    -1,
       5,     6,    53,     5,    -1,     3,    -1,     5,    -1,     5,
       6,    62,    -1,     5,     6,    60,    -1,    60,     9,    60,
      -1,    60,    10,    60,    -1,    60,    11,    60,    -1,    60,
      12,    60,    -1,    64,    -1,    60,    -1,    58,    -1,     4,
      -1,     5,    -1,    62,     9,    62,    -1,    62,    10,    62,
      -1,    62,    11,    62,    -1,    62,    12,    62,    -1,     5,
      13,     5,    -1,     5,    13,     3,    -1,    20,    66,    27,
      61,    29,    -1,    20,    66,    27,    61,    29,    21,    27,
      61,    29,    -1,    20,    66,    27,    61,    29,    22,    66,
      27,    61,    29,    21,    27,    61,    29,    -1,    14,    66,
      27,    61,    29,    -1,    67,    32,    67,    -1,    67,    33,
      67,    -1,    67,    -1,    60,    34,    60,    -1,    60,    35,
      60,    -1,    60,    36,    60,    -1,    60,    37,    60,    -1,
      60,    38,    60,    -1,    60,    54,    60,    -1,    23,     3,
      39,     3,    39,     9,     3,    27,    58,    29,    -1,    23,
       3,    39,     3,    39,    10,     3,    27,    58,    29,    -1,
      23,     3,    39,     3,    39,    11,     3,    27,    15,    29,
      -1,    23,     5,    39,     5,    39,     9,     3,    27,    16,
       5,    15,    29,    -1,    24,    27,    70,    29,    -1,    71,
      73,    -1,    -1,    71,    72,    -1,    60,    31,    60,    40,
      60,    -1,    25,    60,    -1,    43,    44,     5,    -1,    43,
      45,     5,    -1,     5,     6,    46,     5,    -1,     5,     6,
      47,     5,    -1,     5,     6,    48,     4,    -1,     5,     6,
      49,     4,    -1,     5,     6,    50,     4,    -1,     5,     6,
      41,    60,    39,    60,    -1,     5,     6,    42,    60,    39,
      60,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   133,   134,   149,   150,   151,
     152,   153,   154,   158,   159,   160,   164,   165,   182,   183,
     184,   185,   188,   189,   192,   193,   194,   202,   208,   209,
     210,   220,   221,   222,   223,   224,   225,   250,   257,   264,
     273,   351,   354,   357,   358,   361,   364,   376,   377,   378,
     379,   380,   381,   382,   383,   384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "VARIABLE", "EQUAL",
  "CHAR", "MATHEMATECAL_OPERATOR", "PLUS", "MINUS", "MUL", "DIV",
  "INCREMENT_DECREMENT", "WHILE", "PRINT", "ARRAY", "TYPE_INT",
  "TYPE_FLOAT", "TYPE_CHAR", "IF", "ELSE", "ELSEIF", "LOOP", "SWITCH",
  "DEF", "STORE", "BLOCKSTART", "TO", "BLOCKEND", "LEFTPARANTHESIS",
  "RIGHTPARANTHESIS", "AND", "OR", "GREATERTHAN", "LESSTHAN",
  "GREATEREQUAL", "LESSEQUAL", "EQUALEQUAL", "COMMA", "SEMICOLON", "GCD",
  "LCM", "SORT", "ASC", "DES", "MAX", "MIN", "SIN", "COS", "TAN", "STRING",
  "SHOW", "LENGTH", "NOTEQUAL", "NEWLINE", "$accept", "begin",
  "Statements", "variable_declaration", "expression",
  "expression_Statements", "float_expression", "inc_dec", "if_else",
  "While_loop", "Condition_Checking", "Conditions", "looping", "Switch",
  "CASE", "PARTICULAR_CASE", "CASE_NUMBER", "DEFAULT_CASE", "functions", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    64,    64,    65,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    69,    70,    71,    71,    72,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     4,     3,     4,     4,     4,     3,     3,
       5,     5,     5,     5,     4,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     5,     9,    14,     5,     3,     3,
       1,     3,     3,     3,     3,     3,     3,    10,    10,    10,
      12,     4,     2,     0,     2,     5,     2,     3,     3,     4,
       4,     4,     4,     4,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     7,     5,     6,    10,
       8,     9,    11,     0,     0,    26,     0,     0,    50,    14,
       0,    12,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,     0,     0,    36,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,    28,    27,    43,
      42,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,    15,    13,    19,     0,     0,     3,     0,     0,     0,
       0,    67,    68,    29,    30,    31,    32,     0,     0,     0,
      69,    70,    71,    72,    73,    24,     0,     0,     0,     0,
      51,    52,    53,    54,    55,    56,    35,    34,     0,    33,
      48,    49,     0,    16,    37,    17,     0,     0,     0,    61,
       0,     0,    64,    62,    23,     0,     0,    38,    39,    40,
      41,    47,    20,    21,    22,    44,     0,     0,    66,     0,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     3,     3,     3,
       0,     0,    65,    45,     0,     0,     0,     0,     0,     0,
      57,    58,    59,     0,     0,     0,     3,    60,     0,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,   106,    15,    26,   108,    58,    17,   109,    19,
      27,    28,    20,    21,    79,    80,   122,   123,    22
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int16 yypact[] =
{
     -70,    14,   164,   -70,   -70,    39,    70,    -1,    15,    38,
      53,    70,    76,    40,     4,   -70,   104,   -70,   -70,   -70,
     -70,   -70,   -70,    52,   114,    81,    74,    55,    21,   -70,
     120,    77,   131,   130,   143,   123,   117,   119,   -70,   149,
     165,    70,    70,    70,    70,   -70,    81,   167,    70,    70,
     168,   170,   172,   173,   179,   -70,   181,   104,   184,   -70,
     -70,    66,    70,    70,    70,    70,    70,    70,    24,    70,
      70,   -70,   -70,   191,    70,    72,    24,   182,   193,   171,
       5,   -70,   -70,   110,   110,   -70,   -70,   196,   129,   180,
     -70,   -70,   -70,   -70,   -70,   -70,    72,    72,    72,    72,
     104,   104,   104,   104,   104,   104,   164,   104,   174,   -70,
     -70,   -70,     2,   104,   -70,   184,   175,   162,   163,   -70,
      70,     7,   -70,   -70,   -70,    70,    70,   115,   115,   -70,
     -70,   -70,   -70,   -70,   -70,   108,    86,   197,   104,    70,
     104,   104,   178,    70,   205,   206,   207,   208,    80,    24,
     185,   186,   187,   188,   189,    70,   192,    24,   -70,   -70,
     202,   204,   104,   -70,   194,     8,   128,   195,   213,   201,
     -70,   -70,   -70,   210,   199,   198,    24,   -70,   200,   -70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,     1,   -70,    -2,   -69,   -63,   -70,     0,   -70,
      -8,    92,   -70,   -70,   -70,   -70,   -70,   -70,   -70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      16,     2,    18,    35,    29,   132,   133,   116,     4,   134,
      25,     4,   115,     5,     3,    30,    41,    42,    43,    44,
      32,    57,     6,     7,     8,     9,    10,     4,    11,    25,
     120,    12,    13,   127,   128,   129,   130,   170,   139,    83,
      84,    85,    86,    33,    11,    23,    88,    89,    39,    40,
      31,    14,    24,    69,    70,     4,    45,    46,    34,    57,
     100,   101,   102,   103,   104,   105,   107,    38,    47,     4,
      45,    46,   113,     4,   107,    25,    45,   114,   121,    36,
     156,    37,    68,    41,    42,    43,    44,    61,   164,    41,
      42,    43,    44,    48,    49,   144,   145,   146,    50,    51,
      52,    53,    54,    55,    16,    56,    18,   178,    62,    63,
      64,    65,    66,    41,    42,    43,    44,    59,   138,    60,
     155,    43,    44,   140,   141,    71,    98,    99,    67,   142,
     143,     4,    72,     5,    73,   150,    74,   148,    41,    42,
      43,    44,     6,     7,     8,     9,    10,   107,    11,    75,
      76,    12,    13,   162,    81,   107,    77,   171,    78,   165,
     166,   110,   111,    16,    16,    18,    18,     4,   125,     5,
      82,    14,    87,    90,   107,    91,    92,    93,     6,     7,
       8,     9,    10,    94,    11,   117,    95,    12,    13,    41,
      42,    43,    44,    96,    97,    98,    99,   112,   118,   124,
     119,   136,   137,   131,   135,   149,   147,    14,   151,   152,
     153,   154,   157,   158,   159,   160,   161,   167,   173,   126,
     168,   163,   174,   169,   172,   175,   176,   177,     0,   179
};

static const yytype_int16 yycheck[] =
{
       2,     0,     2,    11,     5,     3,     4,    76,     3,     7,
       5,     3,    75,     5,     0,    16,     9,    10,    11,    12,
       5,    23,    14,    15,    16,    17,    18,     3,    20,     5,
      25,    23,    24,    96,    97,    98,    99,    29,    31,    41,
      42,    43,    44,     5,    20,     6,    48,    49,    44,    45,
      51,    43,    13,    32,    33,     3,     4,     5,     5,    61,
      62,    63,    64,    65,    66,    67,    68,    27,    16,     3,
       4,     5,    74,     3,    76,     5,     4,     5,    80,     3,
     149,     5,    27,     9,    10,    11,    12,     6,   157,     9,
      10,    11,    12,    41,    42,     9,    10,    11,    46,    47,
      48,    49,    50,    51,   106,    53,   106,   176,    34,    35,
      36,    37,    38,     9,    10,    11,    12,     3,   120,     5,
      40,    11,    12,   125,   126,     5,    11,    12,    54,    21,
      22,     3,    55,     5,     3,   143,     6,   139,     9,    10,
      11,    12,    14,    15,    16,    17,    18,   149,    20,     6,
      27,    23,    24,   155,     5,   157,    39,    29,    39,   158,
     159,    69,    70,   165,   166,   165,   166,     3,    39,     5,
       5,    43,     5,     5,   176,     5,     4,     4,    14,    15,
      16,    17,    18,     4,    20,     3,     5,    23,    24,     9,
      10,    11,    12,     9,    10,    11,    12,     6,     5,     3,
      29,    39,    39,    29,    29,    27,     9,    43,     3,     3,
       3,     3,    27,    27,    27,    27,    27,    15,     5,    39,
      16,    29,    21,    29,    29,    15,    27,    29,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,     0,     3,     5,    14,    15,    16,    17,
      18,    20,    23,    24,    43,    59,    60,    63,    64,    65,
      68,    69,    74,     6,    13,     5,    60,    66,    67,     5,
      16,    51,     5,     5,     5,    66,     3,     5,    27,    44,
      45,     9,    10,    11,    12,     4,     5,    16,    41,    42,
      46,    47,    48,    49,    50,    51,    53,    60,    62,     3,
       5,     6,    34,    35,    36,    37,    38,    54,    27,    32,
      33,     5,    55,     3,     6,     6,    27,    39,    39,    70,
      71,     5,     5,    60,    60,    60,    60,     5,    60,    60,
       5,     5,     4,     4,     4,     5,     9,    10,    11,    12,
      60,    60,    60,    60,    60,    60,    58,    60,    61,    64,
      67,    67,     6,    60,     5,    62,    61,     3,     5,    29,
      25,    60,    72,    73,     3,    39,    39,    62,    62,    62,
      62,    29,     3,     4,     7,    29,    39,    39,    60,    31,
      60,    60,    21,    22,     9,    10,    11,     9,    60,    27,
      66,     3,     3,     3,     3,    40,    61,    27,    27,    27,
      27,    27,    60,    29,    61,    58,    58,    15,    16,    29,
      29,    29,    29,     5,    21,    15,    27,    29,    61,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:

/* Line 1455 of yacc.c  */
#line 104 "1907069.y"
    {printf("%d\n",(yyvsp[(2) - (2)].integerValue));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 109 "1907069.y"
    {char *val = (yyvsp[(3) - (3)].str) ;for(int i =1 ; i<strlen((yyvsp[(3) - (3)].str))-1;i++) {printf("%c",val[i]);} ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 110 "1907069.y"
    {char *val = (yyvsp[(3) - (4)].str) ;for(int i =1 ; i<strlen((yyvsp[(3) - (4)].str))-1;i++) {printf("%c",val[i]);} printf("\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 111 "1907069.y"
    { Display_Function( (yyvsp[(3) - (3)].str)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 112 "1907069.y"
    { Array_Display( (yyvsp[(4) - (4)].str)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 116 "1907069.y"
    { Add_Int_Variable( (yyvsp[(2) - (4)].str) , (yyvsp[(4) - (4)].integerValue)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 117 "1907069.y"
    { Add_float_Variable ((yyvsp[(2) - (4)].str),(yyvsp[(4) - (4)].floatValue)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 118 "1907069.y"
    { AddCharValue ( &Variable_Storage[Current_Variable_for_array] , (yyvsp[(1) - (3)].str) , (yyvsp[(3) - (3)].str) );;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 119 "1907069.y"
    { MakeAnArrayOfIntegers( (yyvsp[(2) - (3)].str) , (yyvsp[(3) - (3)].integerValue));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 120 "1907069.y"
    { StoreIntegersInAnArray( (yyvsp[(2) - (5)].str) , (yyvsp[(3) - (5)].integerValue) , (yyvsp[(5) - (5)].integerValue) );;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 121 "1907069.y"
    { StoreFloatInAnArray( (yyvsp[(2) - (5)].str) , (yyvsp[(3) - (5)].integerValue) , (yyvsp[(5) - (5)].floatValue) );;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 122 "1907069.y"
    { StoreCharInAnArray( (yyvsp[(2) - (5)].str) , (yyvsp[(3) - (5)].integerValue) , (yyvsp[(5) - (5)].str) );;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 123 "1907069.y"
    { StoreAnArrrayValueToVariable((yyvsp[(1) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].integerValue));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 124 "1907069.y"
    { FindLengthofArray((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 133 "1907069.y"
    { (yyval.integerValue) = (yyvsp[(1) - (1)].integerValue) ; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 134 "1907069.y"
    {  int found = 0;
                         for (int i = 0 ; i < Current_Variable ; i ++)
                         { 
                             if ( ( !( strcmp (Variable_Storage[i].Var_Name,(yyvsp[(1) - (1)].str)) )  ) )
                             {
                                 if ( ( !( strcmp (Variable_Storage[i].Var_Type,"int") )  ) )
                                 {
                                    (yyval.integerValue) = Variable_Storage[i].Var_Value; found = 1;  break;
                                 }
                                  
                             }
                         }
                         if (found == 0) printf ("ERROR: VARIABLE NOT FOUND OR TYPE DOES NOT MATCH\n");
                      ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 149 "1907069.y"
    { AddNewFloatValue((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].floatValue)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 150 "1907069.y"
    { AddIntValueAgain( (yyvsp[(1) - (3)].str) , (yyvsp[(3) - (3)].integerValue)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 151 "1907069.y"
    { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) + (yyvsp[(3) - (3)].integerValue);  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 152 "1907069.y"
    { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) - (yyvsp[(3) - (3)].integerValue);  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 153 "1907069.y"
    { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) * (yyvsp[(3) - (3)].integerValue);  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 154 "1907069.y"
    { if ((yyvsp[(3) - (3)].integerValue) != 0) { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) / (yyvsp[(3) - (3)].integerValue);  } else printf ("ERROR: DIVISION BY ZERO\n"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 164 "1907069.y"
    { (yyval.floatValue) = (yyvsp[(1) - (1)].floatValue) ; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 165 "1907069.y"
    {  int found = 0;
                         for (int i = 0 ; i < Current_Variable ; i ++)
                         { 
                             if ( ( !( strcmp (Variable_Storage[i].Var_Name,(yyvsp[(1) - (1)].str)) )  ) )
                             {
                                 if ( ( !( strcmp (Variable_Storage[i].Var_Type,"float") )  ) )
                                 {
                                    (yyval.floatValue) = Variable_Storage[i].F_Var_Value; found = 1;  break;
                                 }
                                 else("%s\n",Variable_Storage[i].Var_Type);
                                  
                             }
                             else("%s\n",(yyvsp[(1) - (1)].str));
                         }
                         if (found == 0) printf ("ERROR: VARIABLE NOT FOUND OR TYPE DOES NOT MATCH\n");
                      ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 182 "1907069.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) + (yyvsp[(3) - (3)].floatValue);  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 183 "1907069.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) - (yyvsp[(3) - (3)].floatValue);  ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 184 "1907069.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) * (yyvsp[(3) - (3)].floatValue);  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 185 "1907069.y"
    { if ((yyvsp[(3) - (3)].floatValue) != 0) { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) / (yyvsp[(3) - (3)].floatValue);  } else printf ("ERROR: DIVISION BY ZERO\n"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 188 "1907069.y"
    { inc_dec_function_variableUnit((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 189 "1907069.y"
    { inc_dec_function((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integerValue)) ; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 192 "1907069.y"
    { printf("Valid If Block\n"); if((yyvsp[(2) - (5)].integerValue)) printf("IF");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 193 "1907069.y"
    {  printf("Valid If Block\n"); if((yyvsp[(2) - (9)].integerValue)) printf("---if---"); else printf("---else---");  ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 195 "1907069.y"
    {
                                                         printf("Valid If Block\n");
                                                    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 202 "1907069.y"
    { printf("Valid While_loop Block\n"); if((yyvsp[(2) - (5)].integerValue)) printf("While Loop");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 208 "1907069.y"
    { if ((yyvsp[(1) - (3)].integerValue) && (yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1 ; else (yyval.integerValue) = 0; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 209 "1907069.y"
    { if ((yyvsp[(1) - (3)].integerValue) || (yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1 ; else (yyval.integerValue) = 0; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 210 "1907069.y"
    { (yyval.integerValue) = (yyvsp[(1) - (1)].integerValue); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 220 "1907069.y"
    { if((yyvsp[(1) - (3)].integerValue)>(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 221 "1907069.y"
    { if((yyvsp[(1) - (3)].integerValue)<(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 222 "1907069.y"
    { if((yyvsp[(1) - (3)].integerValue)>=(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 223 "1907069.y"
    { if((yyvsp[(1) - (3)].integerValue)<=(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 224 "1907069.y"
    { if((yyvsp[(1) - (3)].integerValue)==(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 225 "1907069.y"
    { if((yyvsp[(1) - (3)].integerValue)!=(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 250 "1907069.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (10)].integerValue);i<=(yyvsp[(4) - (10)].integerValue);i=i+(yyvsp[(7) - (10)].integerValue))
                                                                   {
                                                                         printf("FOR Loop Running :%d\n",i);
                                                                        
                                                                   }  
                                                                               ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 257 "1907069.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (10)].integerValue);i<=(yyvsp[(4) - (10)].integerValue);i=i-(yyvsp[(7) - (10)].integerValue))
                                                                   {
                                                                          printf("FOR Loop Running :%d\n",i);
                                                                        
                                                                   }  
                                                                               ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 264 "1907069.y"
    {  
          
                                                                   for (int i=(yyvsp[(2) - (10)].integerValue);i<=(yyvsp[(4) - (10)].integerValue);i=i*(yyvsp[(7) - (10)].integerValue))
                                                                   {
                                                                         printf("%d\n",i);
                                                                         
                                                                   }  
                                                                               ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 273 "1907069.y"
    { 
                int var1 = 0,var2 = 0 , value1 , value2; 
                for (int i = 0 ; i < Current_Variable ; i ++)
                {
                    if ( ( !( strcmp (Variable_Storage[i].Var_Name,(yyvsp[(2) - (12)].str)) )  ) )
                    {
                         var1 = 1 ; value1 =  Variable_Storage[i].Var_Value ; break ;
                    }
                }
                for (int i = 0 ; i < Current_Variable ; i ++)
                {
                    if ( ( !( strcmp (Variable_Storage[i].Var_Name,(yyvsp[(4) - (12)].str)) )  ) )
                    {
                         var2 = 1 ; value2 =  Variable_Storage[i].Var_Value ; break ;
                    }
                } 
                 if (var1 && var2) {                               for (int i=value1;i<=value2;i=i+(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Array_Display_loop((yyvsp[(10) - (12)].str),i);
                                                                        
                                                                   }
                                                                   }
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 361 "1907069.y"
    { if(switch_matched == 0) { if((yyvsp[(1) - (5)].integerValue) == (yyvsp[(5) - (5)].integerValue)) { printf("switch_matched  \n");printf("Expected Value = %d\n",(yyvsp[(3) - (5)].integerValue)); switch_matched = 1;} } ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 364 "1907069.y"
    { if(switch_matched == 0) printf("Expected Value = %d\n",(yyvsp[(2) - (2)].integerValue)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 376 "1907069.y"
    { Sort_Asc((yyvsp[(3) - (3)].str));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 377 "1907069.y"
    { Sort_Des((yyvsp[(3) - (3)].str));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 378 "1907069.y"
    { Find_Max((yyvsp[(1) - (4)].str) , (yyvsp[(4) - (4)].str));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 379 "1907069.y"
    { Find_Min((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 380 "1907069.y"
    { Sine((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].floatValue));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 381 "1907069.y"
    { Cos((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].floatValue));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 382 "1907069.y"
    { Tan((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].floatValue));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 383 "1907069.y"
    { GCD_Calculator((yyvsp[(1) - (6)].str),(yyvsp[(4) - (6)].integerValue),(yyvsp[(6) - (6)].integerValue));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 384 "1907069.y"
    { LCM_Calculator((yyvsp[(1) - (6)].str),(yyvsp[(4) - (6)].integerValue),(yyvsp[(6) - (6)].integerValue));;}
    break;



/* Line 1455 of yacc.c  */
#line 2080 "1907069.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 385 "1907069.y"














void FindLengthofArray(char *var , char *arr)
{
    int length;
    int arrayFound = 0;
    int varFound = 0;
    for (int i = 100 ; i < Current_Variable_for_array ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,arr) )  ) )
        {
            if ( ( !( strcmp (Variable_Storage[i].Var_Type,"char") )  ) )length = Variable_Storage[i].Var_Value - 2;
            else  length = Variable_Storage[i].Var_Value ;
            arrayFound = 1;
            break;
        }
    }
    if (arrayFound==1)
    {
        for (int i = 0 ; i < Current_Variable ; i ++)
        {
            if ( ( !( strcmp (Variable_Storage[i].Var_Name,var) )  ) )
            {
                 varFound = 1;
                 Variable_Storage[i].Var_Value = length;
                 break;
            }
        }
        if(varFound == 0)
        {
            Variable_Storage[Current_Variable].Var_Name = var;
            Variable_Storage[Current_Variable].Var_Type = "int";
            Variable_Storage[Current_Variable].Var_Value = length;
            Variable_Storage[Current_Variable].F_Var_Value = 0.0;
            Variable_Storage[Current_Variable].C_Var_Value = '\0' ;
            Current_Variable ++ ;
        }
    }    

}

void StoreAnArrrayValueToVariable(char *var,char *arr , int index)
{
    int arrayFound = 0;
    int sizeMatched = 0;
    int varFound = 0 ;
    int arrayIndex , arrayValue , arraySize; 
    for (int i = 100 ; i < Current_Variable_for_array ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,arr) )  ) )
        {
            arrayFound = 1;
            arraySize = i + 1 + Variable_Storage[i].Var_Value ; 
            arrayIndex = (i+1)+index;
            if(arrayIndex <= arraySize)
            {
                sizeMatched = 1 ;
                arrayValue = Variable_Storage[arrayIndex].Var_Value ;
                for (int j = 0 ; j < Current_Variable ; j ++)
                {
                    if ( ( !( strcmp (Variable_Storage[j].Var_Name,var) )  ) )
                    {
                         varFound = 1;
                         Variable_Storage[j].Var_Value = arrayValue ;
                         break;
                    }
                }
            }
            break;
        }
    }
    if(varFound == 0 && arrayFound == 1 && sizeMatched == 1)
    {
        Variable_Storage[Current_Variable].Var_Name = var;
        Variable_Storage[Current_Variable].Var_Value = arrayValue;
        Variable_Storage[Current_Variable].Var_Type = "int" ;
        Variable_Storage[Current_Variable].F_Var_Value = 0.0 ; 
        Variable_Storage[Current_Variable].C_Var_Value = '\0' ; 
        Current_Variable ++ ;
    } 
    else if (sizeMatched == 0) printf("ERROR: THE GIVEN INDEX IS OUT OF ARRAY BOUND\n");
    else if  (arrayFound == 0)  printf("ERROR: ARRAY NOT DECLARED\n");  
}






















void Sine(char *name , float var)
{
     float ss = sin( var * (3.14159265359 / 180));
     AddNewFloatValue(name , ss );
     
}

void Cos(char *name , float var)
{

      float ss = cos( var * (3.14159265359 / 180));
     AddNewFloatValue(name , ss );
}



void Tan(char *name , float var)
{
      float ss = tan( var * (3.14159265359 / 180));
     AddNewFloatValue(name , ss ); 
}

void Find_Max(char *var ,char *name)
{
    int declared = 0;
    int var_declared = 0;
    int max = 0;
    int size,index;
    for (int i = 100 ; i < Current_Variable_for_array ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
             size = Variable_Storage[i].Var_Value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        for(int i =index ; i< index+size ;i++)
        {
            if (Variable_Storage[i].Var_Value > max) max = Variable_Storage[i].Var_Value;
        }
        for (int i = 0 ; i < Current_Variable ; i ++)
        {
           if ( ( !( strcmp (Variable_Storage[i].Var_Name,var) )  ) )
           {
               Variable_Storage[i].Var_Value = max ; 
               var_declared = 1 ;
               break ;
           }
       }
       if(var_declared == 0)
        {
               Variable_Storage[Current_Variable].Var_Name = var ;
               Variable_Storage[Current_Variable].Var_Value = max;
               Variable_Storage[Current_Variable].Var_Type = "int" ;
               Variable_Storage[Current_Variable].F_Var_Value = 0.0;
               Variable_Storage[Current_Variable].C_Var_Value = '\0';
               Current_Variable++ ;
        }

    }
    else printf ("ERROR:THE ARRAY TO FIND MAX IS NOT DECLARED YET\n");
}





void Find_Min(char *var ,char *name)
{
    int declared = 0;
    int var_declared = 0;
    int max = 10000;
    int size;
    int index;
    for (int i = 100 ; i < Current_Variable_for_array ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
             size = Variable_Storage[i].Var_Value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        for(int i =index ; i< index+size ;i++)
        {
            if (Variable_Storage[i].Var_Value < max) max = Variable_Storage[i].Var_Value;
        }
        for (int i = 0 ; i < Current_Variable ; i ++)
        {
           if ( ( !( strcmp (Variable_Storage[i].Var_Name,var) )  ) )
           {
               Variable_Storage[i].Var_Value = max ; 
               var_declared = 1 ;
               break ;
           }
       }
       if(var_declared == 0)
        {
               Variable_Storage[Current_Variable].Var_Name = var ;
               Variable_Storage[Current_Variable].Var_Value = max;
               Variable_Storage[Current_Variable].Var_Type = "int" ;
               Variable_Storage[Current_Variable].F_Var_Value = 0.0;
               Variable_Storage[Current_Variable].C_Var_Value = '\0';
               Current_Variable++ ;
        }

    }
    else printf ("ERROR:THE ARRAY TO FIND MAX IS NOT DECLARED YET\n");
}

void Sort_Asc(char *name)
{
    int size , index , swap ; 
    int declared = 0;
    for (int i = 100 ; i < Current_Variable_for_array ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
             size = Variable_Storage[i].Var_Value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        int array[size];
        for(int i=0 ; i < size ; i++)
            array[i] = Variable_Storage[i+index].Var_Value;  
        for (int c = 0 ; c < size; c++)
        {
            for (int d = 0 ; d < size-1 ; d++)
            {
                if (array[d] > array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
        for(int i = 0 ; i < size ; i++)
           Variable_Storage[i + index].Var_Value = array[i] ;

    }
    else printf ("ERROR:THE ARRAY TO BE SORTED IS NOT DECLARED YET\n");  
}

void Sort_Des(char *name)
{
    int size , index , swap ; 
    int declared = 0;
    for (int i = 100 ; i < Current_Variable_for_array ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
             size = Variable_Storage[i].Var_Value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        int array[size];
        for(int i=0 ; i < size ; i++)
            array[i] = Variable_Storage[i+index].Var_Value;  
        for (int c = 0 ; c < size; c++)
        {
            for (int d = 0 ; d < size-1 ; d++)
            {
                if (array[d] < array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
        for(int i = 0 ; i < size ; i++)
           Variable_Storage[i + index].Var_Value = array[i] ;

    }
    else printf ("ERROR:THE ARRAY TO BE SORTED IS NOT DECLARED YET\n");  
}









void GCD_Calculator(char *name, int val1 , int val2)
{
    int gcd;
    int is_that_var_declared = 0;
    for(int i=1; i <= val1 && i <= val2; ++i)
    {
            if(val1%i==0 && val2%i==0) gcd = i;
    }


 AddIntValueAgain(name,gcd);

}

void LCM_Calculator(char *name, int val1 , int val2)
{
    int lcm;
    int is_that_var_declared = 0;
    int max = (val1 > val2) ? val1 : val2;
    while (1) {
        if (max % val1 == 0 && max % val2 == 0) {
            lcm = max;
            break;
        }
        ++max;
    }

     AddNewFloatValue(name,lcm);
  
}

void AddIntValue(variableWithValues *pointer,char *name , int value )
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            printf("VARIABLE ALREADY DECLARED.RESTORING THE VALUE\n");
            Variable_Storage[i].Var_Value  = value;
            is_that_variable_already_there = 1;
            break;   
        }
    }
    if (is_that_variable_already_there == 0)
    {
        pointer->Var_Type   = "int" ;
        pointer->Var_Name   = name  ;
        pointer->Var_Value  = value ;
        pointer->F_Var_Value = 0.0   ;
        pointer->C_Var_Value = '\0'  ;
        Current_Variable ++ ;
    }
}














void Add_Int_Variable (char *name , int value)
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            if ( ( !( strcmp (Variable_Storage[i].Var_Type,"int") )  ) )
            {

              printf("%s -- variable Alteady Exists !\n",name);

                
                is_that_variable_already_there = 1;
                break;

                Variable_Storage[i].Var_Value = value;
            }  
        }
    }
    if (is_that_variable_already_there == 0)
    {

    printf("%s -- variable Declared !\n",name);
        
        Variable_Storage[Current_Variable].Var_Type   = "int" ;
        Variable_Storage[Current_Variable].Var_Name   = name  ;
        Variable_Storage[Current_Variable].F_Var_Value = 0.0   ;
        Variable_Storage[Current_Variable].C_Var_Value = '\0'  ;
        Variable_Storage[Current_Variable].Var_Value = value;
        Current_Variable ++ ;
    }

}




void AddIntValueAgain (char *name , int value)
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            if ( ( !( strcmp (Variable_Storage[i].Var_Type,"int") )  ) )
            {

              printf("value : %d assigned to :%s !\n",value,name);

                Variable_Storage[i].Var_Value = value;
                is_that_variable_already_there = 1;
                break;

               
            }  
        }
    }

    if (is_that_variable_already_there == 0)
    {

    printf("%s -- variable Not Declared Yet ! --\n",name);
    
    }

}















void AddFloatValue(variableWithValues *pointer,char *name , float value )
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            printf("VARIABLE ALREADY DECLARED.RESTORING THE VALUE\n");
            Variable_Storage[i].F_Var_Value = value;
            is_that_variable_already_there = 1;
            break;   
        }
    }
    if(is_that_variable_already_there == 0)
    {
        pointer->Var_Type   = "float" ;
        pointer->Var_Name   = name    ;
        pointer->F_Var_Value = value   ;
        pointer->Var_Value  = 0       ;
        pointer->C_Var_Value = '\0'    ;
        Current_Variable ++ ;
    }
}
















void Add_float_Variable (char *name , float value )
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            if ( ( !( strcmp (Variable_Storage[i].Var_Type,"float") )  ) )
            {

                printf("%s -- variable Alteady Exists !\n",name);
                is_that_variable_already_there = 1;
                break;
                Variable_Storage[i].F_Var_Value = value;
            }    
        }
    }
    if (is_that_variable_already_there == 0)
    {
         printf("%s -- variable Declared !\n",name);
        
        Variable_Storage[Current_Variable].Var_Type   = "float" ;
        Variable_Storage[Current_Variable].Var_Name   = name  ;
        Variable_Storage[Current_Variable].F_Var_Value = value   ;
        Variable_Storage[Current_Variable].C_Var_Value = '\0'  ;
        Variable_Storage[Current_Variable].Var_Value = 0;
        Current_Variable ++ ;
    }

}



//12
void AddNewFloatValue (char *name , float value )
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            if ( ( !( strcmp (Variable_Storage[i].Var_Type,"float") )  ) )
            {
                 printf("value : %f assigned to :%s !\n",value,name);

                Variable_Storage[i].F_Var_Value = value;
                is_that_variable_already_there = 1;
                break;
            }    
        }
    }
    if (is_that_variable_already_there == 0)
    {
          printf("%s -- variable Not Declared Yet ! --\n",name);
        
    }

}






void AddCharValue(variableWithValues *pointer,char *name ,  char *value )
{
    int is_that_variable_already_there = 0;
    for (int i = 100 ; i < Current_Variable_for_array ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            Variable_Storage[i].Var_Value = strlen(value) ; 
            for (int j=i+1;j<(i + strlen(value) - 2);j++)
            {
                Variable_Storage[j].C_Var_Value = value[j-i] ;
            }
            is_that_variable_already_there = 1;
            break;   
        }
    }
    if(is_that_variable_already_there == 0)
    {
        pointer->Var_Type   = "char"   ;
        pointer->Var_Name   = name     ;
        pointer->Var_Value  = strlen(value)        ;
        pointer++ ; 
        Current_Variable_for_array ++ ;
        for(int i=1; i < (strlen(value)-1) ; i++)
        {
            pointer->Var_Type   = "char"   ;
            pointer->Var_Name   = name     ;
            pointer->C_Var_Value = value[i] ;
            pointer->F_Var_Value = 0.0      ;
            pointer->Var_Value = 0;
            pointer ++ ;
            Current_Variable_for_array ++ ;
        }
    }
}




void MakeAnArrayOfIntegers(char *name , int size)
{
    Variable_Storage[Current_Variable_for_array].Var_Name = name;
    Variable_Storage[Current_Variable_for_array].Var_Value = size-1;
    Variable_Storage[Current_Variable_for_array].Var_Type = "notchar" ;
    Current_Variable_for_array ++;
    for(int i = Current_Variable_for_array ; i < Current_Variable_for_array + size ; i++)
    {
        Variable_Storage[ i].Var_Name   = name; 
        Variable_Storage[ i].Var_Value  = 0;
        Variable_Storage[ i].F_Var_Value = 0.0;
        Variable_Storage[ i].C_Var_Value = '\0';    
    }
    Current_Variable_for_array += size;
}

void StoreIntegersInAnArray( char *name,int index,int value)
{
    int is_the_value_storable = 0;
    int expected_index;
    int size;
    for ( int i = 100 ; i<Current_Variable_for_array ; i++)
    {
        if ( ! ( strcmp ( Variable_Storage[i].Var_Name , name  ) ) ) 
        {
            size = Variable_Storage[i].Var_Value;
            if( index <= size) is_the_value_storable = 1;
            expected_index = i + index + 1;
            break;
        }
    }
    
    if (is_the_value_storable == 0 ) 
    { 
        printf("THE ARRAY IS NOT DECLARED YET OR THE INDEX VALUE IS OUT OF ARRAY SIZE.\n");
        
        
    }    
    else
    {
        Variable_Storage[expected_index].Var_Value = value;
        Variable_Storage[expected_index].Var_Type = "int" ;
        
    }
    
}

void StoreFloatInAnArray( char *name,int index,float value)
{
    int is_the_value_storable = 0;
    int expected_index;
    int size;
    for ( int i = 100 ; i<Current_Variable_for_array ; i++)
    {
        if ( ! ( strcmp ( Variable_Storage[i].Var_Name , name  ) ) ) 
        {
            size = Variable_Storage[i].Var_Value;
            if( index <= size) is_the_value_storable = 1;
            expected_index = i + index + 1;
            break;
        }
    }
    
    if (is_the_value_storable == 0 ) 
    { 
        printf("THE ARRAY IS NOT DECLARED YET OR THE INDEX VALUE IS OUT OF ARRAY SIZE.\n");
        
        
    }    
    else
    {
        Variable_Storage[expected_index].F_Var_Value = value;
        Variable_Storage[expected_index].Var_Type = "float" ;
        
    }
    
}

void StoreCharInAnArray( char *name,int index,char *value)
{
    int is_the_value_storable = 0;
    int expected_index;
    int size;
    for ( int i = 100 ; i<Current_Variable_for_array ; i++)
    {
        if ( ! ( strcmp ( Variable_Storage[i].Var_Name , name  ) ) ) 
        {
            size = Variable_Storage[i].Var_Value;
            if( index <= size) is_the_value_storable = 1;
            expected_index = i + index + 1;
            break;
        }
    }
    
    if (is_the_value_storable == 0 ) 
    { 
        printf("THE ARRAY IS NOT DECLARED YET OR THE INDEX VALUE IS OUT OF ARRAY SIZE.\n");
        
        
    }    
    else
    {
        Variable_Storage[expected_index].C_Var_Value = value[1];
        Variable_Storage[expected_index].Var_Type = "char" ;
        
    }
    
}





void StoreArrayByLoop ( char *name)
{
    int size ;
    int starting_index; 
    int found_the_array = 0;
    int temp;
    int cont;
    for ( int i = 100 ; i<Current_Variable_for_array ; i++)
    {
        if ( ! ( strcmp ( Variable_Storage[i].Var_Name , name  ) ) ) 
        {
            size = Variable_Storage[i].Var_Value ;
            found_the_array = 1;
            starting_index = i+1 ;
            break;
        }
    }
    if (found_the_array == 1)
    {
        for(int i = 0 ; i<= size ; i++ )
        {
            printf("Enter the value = ");
            scanf("%d",&temp);
            Variable_Storage[starting_index].Var_Value = temp;
            starting_index ++ ;
            //printf("Wish to continue?In case not,the remaining index of the array will be skipped(0/1):");
            //scanf("%d",&cont);
            //if(cont == 0) break;
        }
    }
    else printf("ERROR:THE ARRAY IS NOT DECLARED YET\n");   
}




void Variables_in_Variable_Storage() 
{
    printf("%d\n",Current_Variable);
    for(int i=0;i<Current_Variable;i++) 
       printf("%s = %d\n",Variable_Storage[i].Var_Name,Variable_Storage[i].Var_Value);
}










void Display_Function(char *name)
{
    int found = 0;
    int index;
    char *type;
    for(int i=0;i<Current_Variable;i++)
    {
        if ( ! ( strcmp(Variable_Storage[i].Var_Name,name) ) )
        {
            index = i;
            type = Variable_Storage[i].Var_Type;
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        if( ! ( strcmp(type,"int") )  )   printf("%d\n",Variable_Storage[index].Var_Value);
        if( ! ( strcmp(type,"float") )  ) printf("%f\n",Variable_Storage[index].F_Var_Value);
        if( ! ( strcmp(type,"char") )  )  printf("%c\n",Variable_Storage[index].C_Var_Value);
    }
    else printf("ERROR: VARIABLE NOT FOUND\n");
}






void Array_Display(char *name)
{
    int size;
    int index;
    int is_printable = 0;
    for (int i=100 ; i<Current_Variable_for_array;i++)
    {
        if ( ! ( strcmp ( Variable_Storage[i].Var_Name , name  ) ) ) 
        {
            size = Variable_Storage[i].Var_Value;
            index = i+1;
            is_printable = 1;
            break;
        }
    }
    if ( is_printable)
    {
        for(int i=index;i<=(index + size);i++)
        {
            printf("%s %s %d %f %c\n",Variable_Storage[i].Var_Name,Variable_Storage[i].Var_Type,Variable_Storage[i].Var_Value,Variable_Storage[i].F_Var_Value,Variable_Storage[i].C_Var_Value);
        }
    }
    else
    {
        printf("ERROR: NO ARRAY IS FOUND WITH THIS NAME\n");
    }
    
}






void Array_Display_loop(char *name,int loopIndex)
{
    int size;
    int indexToPrint;
    int is_printable = 0;
    for (int i=100 ; i<Current_Variable_for_array;i++)
    {
        if ( ! ( strcmp ( Variable_Storage[i].Var_Name , name  ) ) ) 
        {
            size = Variable_Storage[i].Var_Value;
            indexToPrint = (i+1)+loopIndex;
            is_printable = 1;
            if ( ! ( strcmp ( Variable_Storage[indexToPrint].Var_Type , "int"  ) ) ) printf("%d\n",Variable_Storage[indexToPrint].Var_Value);
            else if ( ! ( strcmp ( Variable_Storage[indexToPrint].Var_Type , "float"  ) ) ) printf("%f\n",Variable_Storage[indexToPrint].F_Var_Value);
            else if ( ! ( strcmp ( Variable_Storage[indexToPrint].Var_Type , "char"  ) ) ) printf("%c\n",Variable_Storage[indexToPrint].C_Var_Value);
            break;
        }
    }
    if(is_printable == 0) printf("ERROR: ARRAY INDEX EXCEEDS\n");
}   





void inc_dec_function(char *name , char * operator , int unit)
{
    int done = 0;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,name) )  ) )
        {
            if ( ( !( strcmp (operator,"inc+") )  ) ) 
            { 
                Variable_Storage[i].Var_Value += unit ;
                done = 1;
                break ;  
            } 
            else if ( ( !( strcmp (operator,"inc*") )  ) ) 
            { 
                Variable_Storage[i].Var_Value *= unit ;
                done = 1;
                break ;  
            }  
            else if ( ( !( strcmp (operator,"dec-") )  ) ) 
            { 
                Variable_Storage[i].Var_Value -= unit ;
                done = 1;
                break ;  
            }  
            else if ( ( !( strcmp (operator,"dec/") )  ) ) 
            { 
                if (unit != 0) Variable_Storage[i].Var_Value /= unit ;
                else printf("ERROR: DIVISION BY ZERO\n");
                done = 1;
                break ;  
            } 
        }
    }
    if (done == 0) {printf ("ERROR: VARIABLE NO DECLARED\n");}   
        
}



void inc_dec_function_variableUnit(char *name , char * operator , char *unit)
{
    int is_unit_declared = 0;
    int index;
    for (int i = 0 ; i < Current_Variable ; i ++)
    {
        if ( ( !( strcmp (Variable_Storage[i].Var_Name,unit) )  ) ) { is_unit_declared = 1 ; index = i; break ; }
    }
    if( is_unit_declared == 0 ) printf ("ERROR: THE UNIT VARIABLE IS NOT DECLARED\n");    
    else inc_dec_function(name , operator , Variable_Storage[index].Var_Value);
}

int main(void)
{
         
    freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
	yyparse();
    return 0;

}

int yywrap(void)
{
	return 1;
}


int yyerror(char *s)
{
	fprintf(stderr, "error: %s\n", s);
             
}
