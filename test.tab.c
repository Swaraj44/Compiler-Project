
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
#line 74 "test.y"

   #include <stdio.h>
   #include<stdlib.h>
   #include<math.h>
   #include<string.h>
   int yylex(void);

   typedef struct variable_collection
   {
       char *variable_name;
       char *variable_type;
       int   variable_value;
       float fVariable_value;
       char  cVariable_value;
   }variableWithValues;
   variableWithValues variableBox[1000];
   int Which_VariableBox_to_be_used_right_now = 0;
   int Which_VariableBox_to_be_used_right_now_for_array = 100;
   int switch_matched = 0;
   void AddIntValue  (variableWithValues *pointer,char *name , int value );
   void AddIntValueAsMathematicalOperation (char *name , int value );
   void AddIntValue_Checkwhetherfirstvariabledeclared ( char *name, char *firstVariable , char *operator , int second_value );
   void AddIntValue_Checkwhethersecondvariabledeclared ( char *name, int first_value , char *operator , char *secondVariable );
   void AddIntValue_Checkwhetherfirstsecondvariabledeclared ( char *name, char *firstVariable , char *operator , char *secondVariable );
   void AddFloatValue(variableWithValues *pointer,char *name , float value );
   void AddFloatValueAsMathematicalOperation (char *name , float value );
   void AddFloatValue_Checkwhetherfirstvariabledeclared ( char *name, char *firstVariable , char *operator , float second_value );
   void AddFloatValue_Checkwhethersecondvariabledeclared ( char *name, float first_value , char *operator , char *secondVariable );
   void AddCharValue(variableWithValues *pointer,char *name ,  char *value );
   void MakeAnArrayOfIntegers( char *name , int size);
   void StoreIntegersInAnArray( char *name,int index,int value);
   void StoreFloatInAnArray( char *name,int index,float value);
   void StoreCharInAnArray( char *name,int index,char *value);
   void StoreArrayByLoop ( char *name);
   void What_Values_Are_In_VariableBox();
   void Display_Function(char *name);
   void Display_Function_Array(char *name);
   void Display_Function_Array_loop(char *name,int loopIndex);
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
#line 128 "test.tab.c"

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

/* Line 214 of yacc.c  */
#line 129 "test.y"

      char     *str;
      int      integerValue;
      float    floatValue;



/* Line 214 of yacc.c  */
#line 226 "test.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 238 "test.tab.c"

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
#define YYLAST   331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    12,    15,    18,    21,
      24,    27,    31,    36,    40,    45,    48,    53,    58,    62,
      66,    72,    78,    84,    90,    95,    97,    99,   103,   107,
     111,   115,   117,   119,   123,   127,   131,   135,   139,   143,
     149,   159,   174,   213,   217,   221,   223,   227,   231,   235,
     239,   243,   247,   258,   269,   280,   291,   304,   317,   330,
     343,   356,   369,   382,   395,   405,   415,   420,   423,   424,
     427,   433,   436,   440,   444,   449,   454,   459,   464,   469,
     476
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    -1,    57,    58,    -1,    57,
      61,    -1,    57,    62,    -1,    57,    59,    -1,    57,    65,
      -1,    57,    66,    -1,    57,    71,    -1,    57,    14,    50,
      -1,    57,    14,    50,    54,    -1,    57,    14,     5,    -1,
      57,    14,    15,     5,    -1,    57,    51,    -1,    16,     5,
       6,    59,    -1,    17,     5,     6,    60,    -1,     5,     6,
      50,    -1,    15,     5,     3,    -1,    15,     5,     3,     6,
       3,    -1,    15,     5,     3,     6,     4,    -1,    15,     5,
       3,     6,     7,    -1,     5,     6,    15,     5,     3,    -1,
       5,     6,    52,     5,    -1,     3,    -1,     5,    -1,    59,
       9,    59,    -1,    59,    10,    59,    -1,    59,    11,    59,
      -1,    59,    12,    59,    -1,     4,    -1,     5,    -1,    60,
       9,    60,    -1,    60,    10,    60,    -1,    60,    11,    60,
      -1,    60,    12,    60,    -1,     5,    13,     5,    -1,     5,
      13,     3,    -1,    19,    63,    26,    59,    28,    -1,    19,
      63,    26,    59,    28,    20,    26,    59,    28,    -1,    19,
      63,    26,    59,    28,    21,    63,    26,    59,    28,    20,
      26,    59,    28,    -1,    19,    63,    26,    19,    63,    26,
      59,    28,    20,    26,    59,    28,    28,    21,    63,    26,
      19,    63,    26,    59,    28,    20,    26,    59,    28,    28,
      20,    26,    19,    63,    26,    59,    28,    20,    26,    59,
      28,    28,    -1,    64,    31,    64,    -1,    64,    32,    64,
      -1,    64,    -1,    59,    33,    59,    -1,    59,    34,    59,
      -1,    59,    35,    59,    -1,    59,    36,    59,    -1,    59,
      37,    59,    -1,    59,    53,    59,    -1,    22,     3,    38,
       3,    38,     9,     3,    26,    14,    28,    -1,    22,     3,
      38,     3,    38,    10,     3,    26,    14,    28,    -1,    22,
       3,    38,     3,    38,    11,     3,    26,    14,    28,    -1,
      22,     3,    38,     3,    38,    12,     3,    26,    14,    28,
      -1,    22,     3,    38,     3,    38,     9,     3,    26,    15,
       5,    14,    28,    -1,    22,     3,    38,     3,    38,    10,
       3,    26,    15,     5,    14,    28,    -1,    22,     3,    38,
       3,    38,    11,     3,    26,    15,     5,    14,    28,    -1,
      22,     3,    38,     3,    38,    12,     3,    26,    15,     5,
      14,    28,    -1,    22,     5,    38,     5,    38,     9,     3,
      26,    15,     5,    14,    28,    -1,    22,     5,    38,     5,
      38,    10,     3,    26,    15,     5,    14,    28,    -1,    22,
       5,    38,     5,    38,    11,     3,    26,    15,     5,    14,
      28,    -1,    22,     5,    38,     5,    38,    12,     3,    26,
      15,     5,    14,    28,    -1,    22,     3,    27,     3,    26,
      15,     5,    14,    28,    -1,    22,     5,    27,     5,    26,
      15,     5,    14,    28,    -1,    23,    26,    67,    28,    -1,
      68,    70,    -1,    -1,    68,    69,    -1,    59,    30,    59,
      39,    59,    -1,    24,    59,    -1,    42,    43,     5,    -1,
      42,    44,     5,    -1,     5,     6,    45,     5,    -1,     5,
       6,    46,     5,    -1,     5,     6,    47,     4,    -1,     5,
       6,    48,     4,    -1,     5,     6,    49,     4,    -1,     5,
       6,    40,    59,    38,    59,    -1,     5,     6,    41,    59,
      38,    59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   207,   208,   223,   224,   225,
     226,   229,   230,   247,   248,   249,   250,   253,   254,   257,
     258,   259,   265,   292,   293,   294,   298,   299,   300,   301,
     302,   303,   305,   313,   321,   329,   337,   344,   351,   358,
     365,   388,   411,   434,   457,   465,   498,   501,   504,   505,
     508,   511,   523,   524,   525,   526,   527,   528,   529,   530,
     531
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "VARIABLE", "EQUAL",
  "CHAR", "MATHEMATECAL_OPERATOR", "PLUS", "MINUS", "MUL", "DIV",
  "INCREMENT_DECREMENT", "PRINT", "ARRAY", "TYPE_INT", "TYPE_FLOAT",
  "TYPE_CHAR", "IF", "ELSE", "ELSEIF", "LOOP", "SWITCH", "DEF", "STORE",
  "BLOCKSTART", "TO", "BLOCKEND", "LEFTPARANTHESIS", "RIGHTPARANTHESIS",
  "AND", "OR", "GREATERTHAN", "LESSTHAN", "GREATEREQUAL", "LESSEQUAL",
  "EQUALEQUAL", "COMMA", "SEMICOLON", "GCD", "LCM", "SORT", "ASC", "DES",
  "MAX", "MIN", "SIN", "COS", "TAN", "STRING", "SHOW", "LENGTH",
  "NOTEQUAL", "NEWLINE", "$accept", "begin", "Statements",
  "variable_declaration", "expression", "float_expression", "inc_dec",
  "if_else", "Condition_Checking", "Conditions", "looping", "Switch",
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
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    67,    68,    68,
      69,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     2,     2,     2,
       2,     3,     4,     3,     4,     2,     4,     4,     3,     3,
       5,     5,     5,     5,     4,     1,     1,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     5,
       9,    14,    38,     3,     3,     1,     3,     3,     3,     3,
       3,     3,    10,    10,    10,    10,    12,    12,    12,    12,
      12,    12,    12,    12,     9,     9,     4,     2,     0,     2,
       5,     2,     3,     3,     4,     4,     4,     4,     4,     6,
       6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     4,     7,     5,     6,     8,
       9,    10,     0,     0,    13,     0,    11,     0,     0,     0,
      26,     0,     0,    45,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,    38,    37,    14,    12,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    27,    28,    29,
      30,     0,     0,     0,    74,    75,    76,    77,    78,    24,
       0,    16,    31,    32,    17,    46,    47,    48,    49,    50,
      51,     0,     0,    43,    44,     0,     0,     0,     0,    66,
       0,     0,    69,    67,    23,     0,     0,    20,    21,    22,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
      71,     0,    79,    80,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,    40,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,    52,
       0,    53,     0,    54,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    15,    31,    94,    17,    18,    32,    33,
      19,    20,    73,    74,   112,   113,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,    35,     2,  -100,  -100,    -3,    -4,    64,    73,    78,
      42,    87,    22,   -35,  -100,  -100,   172,  -100,  -100,  -100,
    -100,  -100,    39,   112,  -100,   102,    62,   118,   117,   129,
    -100,    40,   101,     0,    43,    44,  -100,   132,   154,    42,
      42,    42,    42,   171,    42,    42,   180,   187,   209,   210,
     211,  -100,   212,  -100,  -100,  -100,  -100,   213,    42,   115,
      42,    42,    42,    42,    42,    42,     1,    42,    42,   215,
     218,   217,   219,   197,    31,  -100,  -100,   114,   114,  -100,
    -100,   220,    56,    86,  -100,  -100,  -100,  -100,  -100,  -100,
      19,   172,  -100,  -100,   178,   172,   172,   172,   172,   172,
     172,    42,    90,  -100,  -100,   190,   189,   200,   191,  -100,
      42,     3,  -100,  -100,  -100,    42,    42,  -100,  -100,  -100,
     115,   115,   115,   115,   202,   127,   216,   188,   221,   192,
     172,    42,   172,   172,   145,   145,  -100,  -100,    42,   204,
      42,   227,   230,   231,   232,   235,   234,   237,   239,   240,
     241,    18,    94,    42,   222,   233,   224,   225,   226,   228,
     242,   229,   236,   238,   243,    42,   245,   100,    42,   244,
     146,   150,   179,   195,   246,   248,   251,   252,   253,   172,
     247,  -100,   121,  -100,   249,   254,   250,   255,   256,   265,
     257,   266,  -100,   270,   271,   274,   275,    42,   261,  -100,
     268,  -100,   269,  -100,   272,  -100,   273,   276,   277,   278,
     279,   130,   262,   267,   280,   281,   282,   283,   284,   285,
     286,   287,    42,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,   295,   134,    42,  -100,   263,   288,    42,   291,    42,
     143,   298,   293,    42,   158,   292,   301,   296,   304,    42,
     299,    42,   163,   306,   302,    42,   168,   303,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,  -100,    -2,    85,  -100,  -100,   -99,   144,
    -100,  -100,  -100,  -100,  -100,  -100,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      16,    24,   124,    22,     4,     4,    30,     5,    37,    38,
      23,    25,    39,    40,    41,    42,     6,     7,     8,     9,
     101,    10,   117,   118,    11,    12,   119,    39,    40,    41,
      42,    67,    68,   131,     4,     3,    30,    77,    78,    79,
      80,   154,    82,    83,    13,     4,    26,    30,    36,    39,
      40,    41,    42,    14,    43,   110,    91,   165,    95,    96,
      97,    98,    99,   100,   102,    39,    40,    41,    42,    27,
      69,    71,   111,    60,    61,    62,    63,    64,    28,    44,
      45,    70,    72,    29,    46,    47,    48,    49,    50,    51,
      34,    52,    35,    65,   115,    39,    40,    41,    42,    39,
      40,    41,    42,    39,    40,    41,    42,    55,   130,    39,
      40,    41,    42,   132,   133,    53,    56,    54,   125,    92,
      93,    57,   166,    58,   116,    41,    42,    66,   181,   151,
      39,    40,    41,    42,   235,    59,   152,    75,   238,    39,
      40,    41,    42,    39,    40,    41,    42,   139,   140,   198,
     250,   167,    39,    40,    41,    42,   122,   123,   221,    76,
     184,   185,   234,   179,   186,   187,   182,    39,    40,    41,
      42,   241,    39,    40,    41,    42,    81,    39,    40,    41,
      42,    39,    40,    41,    42,    84,   245,   120,   121,   122,
     123,   253,    85,   188,   189,   211,   257,   142,   143,   144,
     145,   147,   148,   149,   150,   134,   135,   136,   137,   190,
     191,   103,   104,    86,    87,    88,   126,    89,   105,    90,
     232,   106,   107,   114,   108,   109,   128,   127,   138,   129,
     153,   141,   155,   156,   157,   158,   146,   240,   159,   160,
     161,   244,   162,   163,   164,     0,     0,   169,   168,   252,
     170,   171,   172,   256,   173,   175,   174,     0,     0,   200,
     202,     0,   176,   193,   177,   180,   194,   195,   196,   178,
     204,   206,   183,   197,   192,   207,   208,   199,   201,   209,
     210,   212,   213,   214,   203,   205,   215,   216,   222,   236,
     217,   218,   219,   220,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   224,   225,
     226,   227,   228,   229,   230,   231,   233,   239,   242,   243,
     246,   247,   248,   249,     0,   251,   254,     0,   255,     0,
       0,   258
};

static const yytype_int16 yycheck[] =
{
       2,     5,   101,     6,     3,     3,     5,     5,    43,    44,
      13,    15,     9,    10,    11,    12,    14,    15,    16,    17,
      19,    19,     3,     4,    22,    23,     7,     9,    10,    11,
      12,    31,    32,    30,     3,     0,     5,    39,    40,    41,
      42,   140,    44,    45,    42,     3,    50,     5,    26,     9,
      10,    11,    12,    51,    15,    24,    58,    39,    60,    61,
      62,    63,    64,    65,    66,     9,    10,    11,    12,     5,
      27,    27,    74,    33,    34,    35,    36,    37,     5,    40,
      41,    38,    38,     5,    45,    46,    47,    48,    49,    50,
       3,    52,     5,    53,    38,     9,    10,    11,    12,     9,
      10,    11,    12,     9,    10,    11,    12,     5,   110,     9,
      10,    11,    12,   115,   116,     3,    54,     5,    28,     4,
       5,     3,    28,     6,    38,    11,    12,    26,    28,   131,
       9,    10,    11,    12,   233,     6,   138,     5,   237,     9,
      10,    11,    12,     9,    10,    11,    12,    20,    21,    28,
     249,   153,     9,    10,    11,    12,    11,    12,    28,     5,
      14,    15,    28,   165,    14,    15,   168,     9,    10,    11,
      12,    28,     9,    10,    11,    12,     5,     9,    10,    11,
      12,     9,    10,    11,    12,     5,    28,     9,    10,    11,
      12,    28,     5,    14,    15,   197,    28,     9,    10,    11,
      12,     9,    10,    11,    12,   120,   121,   122,   123,    14,
      15,    67,    68,     4,     4,     4,    26,     5,     3,     6,
     222,     3,     5,     3,     5,    28,    26,    38,    26,    38,
      26,    15,     5,     3,     3,     3,    15,   239,     3,     5,
       3,   243,     3,     3,     3,    -1,    -1,    14,    26,   251,
      26,    26,    26,   255,    26,    26,    14,    -1,    -1,     5,
       5,    -1,    26,    15,    26,    20,    15,    15,    15,    26,
       5,     5,    28,    26,    28,     5,     5,    28,    28,     5,
       5,    20,    14,    14,    28,    28,    14,    14,    26,    26,
      14,    14,    14,    14,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    28,    28,
      28,    28,    28,    28,    28,    28,    21,    26,    20,    26,
      28,    20,    26,    19,    -1,    26,    20,    -1,    26,    -1,
      -1,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    57,     0,     3,     5,    14,    15,    16,    17,
      19,    22,    23,    42,    51,    58,    59,    61,    62,    65,
      66,    71,     6,    13,     5,    15,    50,     5,     5,     5,
       5,    59,    63,    64,     3,     5,    26,    43,    44,     9,
      10,    11,    12,    15,    40,    41,    45,    46,    47,    48,
      49,    50,    52,     3,     5,     5,    54,     3,     6,     6,
      33,    34,    35,    36,    37,    53,    26,    31,    32,    27,
      38,    27,    38,    67,    68,     5,     5,    59,    59,    59,
      59,     5,    59,    59,     5,     5,     4,     4,     4,     5,
       6,    59,     4,     5,    60,    59,    59,    59,    59,    59,
      59,    19,    59,    64,    64,     3,     3,     5,     5,    28,
      24,    59,    69,    70,     3,    38,    38,     3,     4,     7,
       9,    10,    11,    12,    63,    28,    26,    38,    26,    38,
      59,    30,    59,    59,    60,    60,    60,    60,    26,    20,
      21,    15,     9,    10,    11,    12,    15,     9,    10,    11,
      12,    59,    59,    26,    63,     5,     3,     3,     3,     3,
       5,     3,     3,     3,     3,    39,    28,    59,    26,    14,
      26,    26,    26,    26,    14,    26,    26,    26,    26,    59,
      20,    28,    59,    28,    14,    15,    14,    15,    14,    15,
      14,    15,    28,    15,    15,    15,    15,    26,    28,    28,
       5,    28,     5,    28,     5,    28,     5,     5,     5,     5,
       5,    59,    20,    14,    14,    14,    14,    14,    14,    14,
      14,    28,    26,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    59,    21,    28,    63,    26,    19,    63,    26,
      59,    28,    20,    26,    59,    28,    28,    20,    26,    19,
      63,    26,    59,    28,    20,    26,    59,    28,    28
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
#line 169 "test.y"
    {printf("%d\n",(yyvsp[(2) - (2)].integerValue));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 173 "test.y"
    {char *val = (yyvsp[(3) - (3)].str) ;for(int i =1 ; i<strlen((yyvsp[(3) - (3)].str))-1;i++) {printf("%c",val[i]);} ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 174 "test.y"
    {char *val = (yyvsp[(3) - (4)].str) ;for(int i =1 ; i<strlen((yyvsp[(3) - (4)].str))-1;i++) {printf("%c",val[i]);} printf("\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 175 "test.y"
    { Display_Function( (yyvsp[(3) - (3)].str)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 176 "test.y"
    { Display_Function_Array( (yyvsp[(4) - (4)].str)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 177 "test.y"
    {
                              for(int i=0;i<Which_VariableBox_to_be_used_right_now;i++)
                              {
                                  if( ! ( strcmp(variableBox[i].variable_type,"int") )  )   printf("%d => %d\n",i,variableBox[i].variable_value);
                                  if( ! ( strcmp(variableBox[i].variable_type,"float") )  ) printf("%d => %f\n",i,variableBox[i].fVariable_value);
                                  if( ! ( strcmp(variableBox[i].variable_type,"char") )  )  printf("%d => %c\n",i,variableBox[i].cVariable_value);
                              }
                              for(int i=100;i<Which_VariableBox_to_be_used_right_now_for_array;i++)
                              {
                                  if( ! ( strcmp(variableBox[i].variable_type,"int") )  )   printf("%d => %d\n",i,variableBox[i].variable_value);
                                  if( ! ( strcmp(variableBox[i].variable_type,"float") )  ) printf("%d => %f\n",i,variableBox[i].fVariable_value);
                                  if( ! ( strcmp(variableBox[i].variable_type,"char") )  )  printf("%d => %c\n",i,variableBox[i].cVariable_value);
                              }
           ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 194 "test.y"
    { AddIntValueAsMathematicalOperation( (yyvsp[(2) - (4)].str) , (yyvsp[(4) - (4)].integerValue)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 195 "test.y"
    { AddFloatValueAsMathematicalOperation ((yyvsp[(2) - (4)].str),(yyvsp[(4) - (4)].floatValue)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 196 "test.y"
    { AddCharValue ( &variableBox[Which_VariableBox_to_be_used_right_now_for_array] , (yyvsp[(1) - (3)].str) , (yyvsp[(3) - (3)].str) );;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 197 "test.y"
    { MakeAnArrayOfIntegers( (yyvsp[(2) - (3)].str) , (yyvsp[(3) - (3)].integerValue));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 198 "test.y"
    { StoreIntegersInAnArray( (yyvsp[(2) - (5)].str) , (yyvsp[(3) - (5)].integerValue) , (yyvsp[(5) - (5)].integerValue) );;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 199 "test.y"
    { StoreFloatInAnArray( (yyvsp[(2) - (5)].str) , (yyvsp[(3) - (5)].integerValue) , (yyvsp[(5) - (5)].floatValue) );;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 200 "test.y"
    { StoreCharInAnArray( (yyvsp[(2) - (5)].str) , (yyvsp[(3) - (5)].integerValue) , (yyvsp[(5) - (5)].str) );;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 201 "test.y"
    { StoreAnArrrayValueToVariable((yyvsp[(1) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].integerValue));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 202 "test.y"
    { FindLengthofArray((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 207 "test.y"
    { (yyval.integerValue) = (yyvsp[(1) - (1)].integerValue) ; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 208 "test.y"
    {  int found = 0;
                         for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                         { 
                             if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(1) - (1)].str)) )  ) )
                             {
                                 if ( ( !( strcmp (variableBox[i].variable_type,"int") )  ) )
                                 {
                                    (yyval.integerValue) = variableBox[i].variable_value; found = 1;  break;
                                 }
                                  
                             }
                         }
                         if (found == 0) printf ("ERROR: VARIABLE NOT FOUND OR TYPE DOES NOT MATCH\n");
                      ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 223 "test.y"
    { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) + (yyvsp[(3) - (3)].integerValue);  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 224 "test.y"
    { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) - (yyvsp[(3) - (3)].integerValue);  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 225 "test.y"
    { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) * (yyvsp[(3) - (3)].integerValue);  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 226 "test.y"
    { if ((yyvsp[(3) - (3)].integerValue) != 0) { (yyval.integerValue) = (yyvsp[(1) - (3)].integerValue) / (yyvsp[(3) - (3)].integerValue);  } else printf ("ERROR: DIVISION BY ZERO\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 229 "test.y"
    { (yyval.floatValue) = (yyvsp[(1) - (1)].floatValue) ; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 230 "test.y"
    {  int found = 0;
                         for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                         { 
                             if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(1) - (1)].str)) )  ) )
                             {
                                 if ( ( !( strcmp (variableBox[i].variable_type,"float") )  ) )
                                 {
                                    (yyval.floatValue) = variableBox[i].fVariable_value; found = 1;  break;
                                 }
                                 else("%s\n",variableBox[i].variable_type);
                                  
                             }
                             else("%s\n",(yyvsp[(1) - (1)].str));
                         }
                         if (found == 0) printf ("ERROR: VARIABLE NOT FOUND OR TYPE DOES NOT MATCH\n");
                      ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 247 "test.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) + (yyvsp[(3) - (3)].floatValue);  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 248 "test.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) - (yyvsp[(3) - (3)].floatValue);  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 249 "test.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) * (yyvsp[(3) - (3)].floatValue);  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 250 "test.y"
    { if ((yyvsp[(3) - (3)].floatValue) != 0) { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) / (yyvsp[(3) - (3)].floatValue);  } else printf ("ERROR: DIVISION BY ZERO\n"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 253 "test.y"
    { inc_dec_function_variableUnit((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 254 "test.y"
    { inc_dec_function((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integerValue)) ; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 257 "test.y"
    { if((yyvsp[(2) - (5)].integerValue)) printf("%d\n",(yyvsp[(4) - (5)].integerValue));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 258 "test.y"
    { if((yyvsp[(2) - (9)].integerValue)) printf("%d\n",(yyvsp[(4) - (9)].integerValue)); else printf("%d\n",(yyvsp[(8) - (9)].integerValue)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 260 "test.y"
    {
                                                        if((yyvsp[(2) - (14)].integerValue)) printf ("%d\n",(yyvsp[(4) - (14)].integerValue)); 
                                                        else if((yyvsp[(7) - (14)].integerValue)) printf ("%d\n",(yyvsp[(9) - (14)].integerValue));
                                                        else printf ("%d\n",(yyvsp[(13) - (14)].integerValue)); 
                                                    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 273 "test.y"
    {
                                                               if((yyvsp[(2) - (38)].integerValue))
                                                               {
                                                                  if((yyvsp[(5) - (38)].integerValue)) printf ("%d\n",(yyvsp[(7) - (38)].integerValue));
                                                                  else   printf ("%d\n",(yyvsp[(11) - (38)].integerValue));   
                                                               }
                                                               else if((yyvsp[(15) - (38)].integerValue))
                                                               {
                                                                  if ((yyvsp[(18) - (38)].integerValue)) printf ("%d\n",(yyvsp[(20) - (38)].integerValue));
                                                                  else     printf ("%d\n",(yyvsp[(24) - (38)].integerValue));
                                                               }
                                                               else
                                                               {
                                                                  if((yyvsp[(30) - (38)].integerValue))  printf ("%d\n",(yyvsp[(32) - (38)].integerValue));
                                                                  else     printf ("%d\n",(yyvsp[(36) - (38)].integerValue));
                                                               }
                                                          ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 292 "test.y"
    { if ((yyvsp[(1) - (3)].integerValue) && (yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1 ; else (yyval.integerValue) = 0; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 293 "test.y"
    { if ((yyvsp[(1) - (3)].integerValue) || (yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1 ; else (yyval.integerValue) = 0; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 294 "test.y"
    { (yyval.integerValue) = (yyvsp[(1) - (1)].integerValue); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 298 "test.y"
    { if((yyvsp[(1) - (3)].integerValue)>(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 299 "test.y"
    { if((yyvsp[(1) - (3)].integerValue)<(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 300 "test.y"
    { if((yyvsp[(1) - (3)].integerValue)>=(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 301 "test.y"
    { if((yyvsp[(1) - (3)].integerValue)<=(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 302 "test.y"
    { if((yyvsp[(1) - (3)].integerValue)==(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 303 "test.y"
    { if((yyvsp[(1) - (3)].integerValue)!=(yyvsp[(3) - (3)].integerValue)) (yyval.integerValue) = 1; else (yyval.integerValue) = 0;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 305 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (10)].integerValue);i<=(yyvsp[(4) - (10)].integerValue);i=i+(yyvsp[(7) - (10)].integerValue))
                                                                   {
                                                                         printf("%d\n",i);
                                                                         //Display_Function($10);
                                                                         //printf("OK\n");
                                                                   }  
                                                                               ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 313 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (10)].integerValue);i<=(yyvsp[(4) - (10)].integerValue);i=i-(yyvsp[(7) - (10)].integerValue))
                                                                   {
                                                                         printf("%d\n",i);
                                                                         //Display_Function($10);
                                                                         //printf("OK\n");
                                                                   }  
                                                                               ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 321 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (10)].integerValue);i<=(yyvsp[(4) - (10)].integerValue);i=i*(yyvsp[(7) - (10)].integerValue))
                                                                   {
                                                                         printf("%d\n",i);
                                                                         //Display_Function($10);
                                                                         //printf("OK\n");
                                                                   }  
                                                                               ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 329 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (10)].integerValue);i<=(yyvsp[(4) - (10)].integerValue);i=i/(yyvsp[(7) - (10)].integerValue))
                                                                   {
                                                                         printf("%d\n",i);
                                                                         //Display_Function($10);
                                                                         //printf("OK\n");
                                                                   }  
                                                                               ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 337 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (12)].integerValue);i<=(yyvsp[(4) - (12)].integerValue);i=i+(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   }
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 344 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (12)].integerValue);i>=(yyvsp[(4) - (12)].integerValue);i=i-(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   } 
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 351 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (12)].integerValue);i>=(yyvsp[(4) - (12)].integerValue);i=i*(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   }   
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 358 "test.y"
    {  
                                                                   for (int i=(yyvsp[(2) - (12)].integerValue);i>=(yyvsp[(4) - (12)].integerValue);i=i/(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   }                                                                                                                                                                          
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 365 "test.y"
    { 
                int var1 = 0,var2 = 0 , value1 , value2; 
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(2) - (12)].str)) )  ) )
                    {
                         var1 = 1 ; value1 =  variableBox[i].variable_value ; break ;
                    }
                }
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(4) - (12)].str)) )  ) )
                    {
                         var2 = 1 ; value2 =  variableBox[i].variable_value ; break ;
                    }
                } 
                 if (var1 && var2) {                               for (int i=value1;i<=value2;i=i+(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   }
                                                                   }
        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 388 "test.y"
    { 
                int var1 = 0,var2 = 0 , value1 , value2; 
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(2) - (12)].str)) )  ) )
                    {
                         var1 = 1 ; value1 =  variableBox[i].variable_value ; break ;
                    }
                }
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(4) - (12)].str)) )  ) )
                    {
                         var2 = 1 ; value2 =  variableBox[i].variable_value ; break ;
                    }
                } 
                 if (var1 && var2) {                               for (int i=value1;i>=value2;i=i-(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   }
                                                                   }
        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 411 "test.y"
    { 
                int var1 = 0,var2 = 0 , value1 , value2; 
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(2) - (12)].str)) )  ) )
                    {
                         var1 = 1 ; value1 =  variableBox[i].variable_value ; break ;
                    }
                }
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(4) - (12)].str)) )  ) )
                    {
                         var2 = 1 ; value2 =  variableBox[i].variable_value ; break ;
                    }
                } 
                 if (var1 && var2) {                               for (int i=value1;i>=value2;i=i*(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   }
                                                                   }                                                           
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 434 "test.y"
    { 
                int var1 = 0,var2 = 0 , value1 , value2; 
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(2) - (12)].str)) )  ) )
                    {
                         var1 = 1 ; value1 =  variableBox[i].variable_value ; break ;
                    }
                }
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(4) - (12)].str)) )  ) )
                    {
                         var2 = 1 ; value2 =  variableBox[i].variable_value ; break ;
                    }
                } 
                 if (var1 && var2) {                               for (int i=value1;i>=value2;i=i/(yyvsp[(7) - (12)].integerValue))
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(10) - (12)].str),i);
                                                                         //printf("OK\n");
                                                                   }
                                                                   }
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 458 "test.y"
    {
               for (int i=(yyvsp[(2) - (9)].integerValue);i<=(yyvsp[(4) - (9)].integerValue);i++)
               {
                      Display_Function_Array_loop((yyvsp[(7) - (9)].str),i);
               }
               //printf("sadsad\n");
             ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 466 "test.y"
    {
               int var1 = 0,var2 = 0 , value1 , value2; 
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(2) - (9)].str)) )  ) )
                    {
                         var1 = 1 ; value1 =  variableBox[i].variable_value ; break ;
                    }
                }
                for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
                {
                    if ( ( !( strcmp (variableBox[i].variable_name,(yyvsp[(4) - (9)].str)) )  ) )
                    {
                         var2 = 1 ; value2 =  variableBox[i].variable_value ; break ;
                    }
                } 
                 if (var1 && var2) {                               for (int i=value1;i<=value2;i++)
                                                                   {
                                                                         Display_Function_Array_loop((yyvsp[(7) - (9)].str),i);
                                                                         //printf("OK\n");
                                                                   }
             }  
             ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 508 "test.y"
    { if(switch_matched == 0) { if((yyvsp[(1) - (5)].integerValue) == (yyvsp[(5) - (5)].integerValue)) { printf("Expected Value = %d\n",(yyvsp[(3) - (5)].integerValue)); switch_matched = 1;} } ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 511 "test.y"
    { if(switch_matched == 0) printf("Expected Value = %d\n",(yyvsp[(2) - (2)].integerValue)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 523 "test.y"
    { Sort_Asc((yyvsp[(3) - (3)].str));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 524 "test.y"
    { Sort_Des((yyvsp[(3) - (3)].str));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 525 "test.y"
    { Find_Max((yyvsp[(1) - (4)].str) , (yyvsp[(4) - (4)].str));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 526 "test.y"
    { Find_Min((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 527 "test.y"
    { Sine((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].floatValue));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 528 "test.y"
    { Cos((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].floatValue));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 529 "test.y"
    { Tan((yyvsp[(1) - (4)].str),(yyvsp[(4) - (4)].floatValue));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 530 "test.y"
    { GCD_Calculator((yyvsp[(1) - (6)].str),(yyvsp[(4) - (6)].integerValue),(yyvsp[(6) - (6)].integerValue));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 531 "test.y"
    { LCM_Calculator((yyvsp[(1) - (6)].str),(yyvsp[(4) - (6)].integerValue),(yyvsp[(6) - (6)].integerValue));;}
    break;



/* Line 1455 of yacc.c  */
#line 2356 "test.tab.c"
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
#line 532 "test.y"


void FindLengthofArray(char *var , char *arr)
{
    int length;
    int arrayFound = 0;
    int varFound = 0;
    for (int i = 100 ; i < Which_VariableBox_to_be_used_right_now_for_array ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,arr) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"char") )  ) )length = variableBox[i].variable_value - 2;
            else  length = variableBox[i].variable_value ;
            arrayFound = 1;
            break;
        }
    }
    if (arrayFound==1)
    {
        for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
        {
            if ( ( !( strcmp (variableBox[i].variable_name,var) )  ) )
            {
                 varFound = 1;
                 variableBox[i].variable_value = length;
                 break;
            }
        }
        if(varFound == 0)
        {
            variableBox[Which_VariableBox_to_be_used_right_now].variable_name = var;
            variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "int";
            variableBox[Which_VariableBox_to_be_used_right_now].variable_value = length;
            variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = 0.0;
            variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0' ;
            Which_VariableBox_to_be_used_right_now ++ ;
        }
    }    

}

void StoreAnArrrayValueToVariable(char *var,char *arr , int index)
{
    int arrayFound = 0;
    int sizeMatched = 0;
    int varFound = 0 ;
    int arrayIndex , arrayValue , arraySize; 
    for (int i = 100 ; i < Which_VariableBox_to_be_used_right_now_for_array ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,arr) )  ) )
        {
            arrayFound = 1;
            arraySize = i + 1 + variableBox[i].variable_value ; 
            arrayIndex = (i+1)+index;
            if(arrayIndex <= arraySize)
            {
                sizeMatched = 1 ;
                arrayValue = variableBox[arrayIndex].variable_value ;
                for (int j = 0 ; j < Which_VariableBox_to_be_used_right_now ; j ++)
                {
                    if ( ( !( strcmp (variableBox[j].variable_name,var) )  ) )
                    {
                         varFound = 1;
                         variableBox[j].variable_value = arrayValue ;
                         break;
                    }
                }
            }
            break;
        }
    }
    if(varFound == 0 && arrayFound == 1 && sizeMatched == 1)
    {
        variableBox[Which_VariableBox_to_be_used_right_now].variable_name = var;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_value = arrayValue;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "int" ;
        variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = 0.0 ; 
        variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0' ; 
        Which_VariableBox_to_be_used_right_now ++ ;
    } 
    else if (sizeMatched == 0) printf("ERROR: THE GIVEN INDEX IS OUT OF ARRAY BOUND\n");
    else if  (arrayFound == 0)  printf("ERROR: ARRAY NOT DECLARED\n");  
}

void Sine(char *name , float var)
{
     variableBox[Which_VariableBox_to_be_used_right_now].variable_name = name ; 
     variableBox[Which_VariableBox_to_be_used_right_now].variable_value = 0 ;
     variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "float" ; 
     variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0';
     variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = sin( var * (3.14159265359 / 180));
     Which_VariableBox_to_be_used_right_now ++ ;  
}

void Cos(char *name , float var)
{
     variableBox[Which_VariableBox_to_be_used_right_now].variable_name = name ; 
     variableBox[Which_VariableBox_to_be_used_right_now].variable_value = 0 ;
     variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "float" ; 
     variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0';
     variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = cos( var * (3.14159265359 / 180));
     Which_VariableBox_to_be_used_right_now ++ ;  
}

void Tan(char *name , float var)
{
     variableBox[Which_VariableBox_to_be_used_right_now].variable_name = name ; 
     variableBox[Which_VariableBox_to_be_used_right_now].variable_value = 0 ;
     variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "float" ; 
     variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0';
     variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = tan( var * (3.14159265359 / 180));
     Which_VariableBox_to_be_used_right_now ++ ;  
}

void Find_Max(char *var ,char *name)
{
    int declared = 0;
    int var_declared = 0;
    int max = 0;
    int size,index;
    for (int i = 100 ; i < Which_VariableBox_to_be_used_right_now_for_array ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
             size = variableBox[i].variable_value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        for(int i =index ; i< index+size ;i++)
        {
            if (variableBox[i].variable_value > max) max = variableBox[i].variable_value;
        }
        for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
        {
           if ( ( !( strcmp (variableBox[i].variable_name,var) )  ) )
           {
               variableBox[i].variable_value = max ; 
               var_declared = 1 ;
               break ;
           }
       }
       if(var_declared == 0)
        {
               variableBox[Which_VariableBox_to_be_used_right_now].variable_name = var ;
               variableBox[Which_VariableBox_to_be_used_right_now].variable_value = max;
               variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "int" ;
               variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = 0.0;
               variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0';
               Which_VariableBox_to_be_used_right_now++ ;
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
    for (int i = 100 ; i < Which_VariableBox_to_be_used_right_now_for_array ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
             size = variableBox[i].variable_value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        for(int i =index ; i< index+size ;i++)
        {
            if (variableBox[i].variable_value < max) max = variableBox[i].variable_value;
        }
        for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
        {
           if ( ( !( strcmp (variableBox[i].variable_name,var) )  ) )
           {
               variableBox[i].variable_value = max ; 
               var_declared = 1 ;
               break ;
           }
       }
       if(var_declared == 0)
        {
               variableBox[Which_VariableBox_to_be_used_right_now].variable_name = var ;
               variableBox[Which_VariableBox_to_be_used_right_now].variable_value = max;
               variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "int" ;
               variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = 0.0;
               variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0';
               Which_VariableBox_to_be_used_right_now++ ;
        }

    }
    else printf ("ERROR:THE ARRAY TO FIND MAX IS NOT DECLARED YET\n");
}

void Sort_Asc(char *name)
{
    int size , index , swap ; 
    int declared = 0;
    for (int i = 100 ; i < Which_VariableBox_to_be_used_right_now_for_array ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
             size = variableBox[i].variable_value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        int array[size];
        for(int i=0 ; i < size ; i++)
            array[i] = variableBox[i+index].variable_value;  
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
           variableBox[i + index].variable_value = array[i] ;

    }
    else printf ("ERROR:THE ARRAY TO BE SORTED IS NOT DECLARED YET\n");  
}

void Sort_Des(char *name)
{
    int size , index , swap ; 
    int declared = 0;
    for (int i = 100 ; i < Which_VariableBox_to_be_used_right_now_for_array ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
             size = variableBox[i].variable_value + 1 ; 
             index = i + 1 ;
             declared = 1 ;
             break ;
        }
    }
    if(declared == 1)
    {
        int array[size];
        for(int i=0 ; i < size ; i++)
            array[i] = variableBox[i+index].variable_value;  
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
           variableBox[i + index].variable_value = array[i] ;

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
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            variableBox[i].variable_value = gcd ; 
            is_that_var_declared = 1;
            break;
        }
    }
    if (is_that_var_declared == 0)
    {
        variableBox[Which_VariableBox_to_be_used_right_now].variable_name = name ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_value = gcd ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "int" ;
        variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = 0.0 ;
        variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0' ; 
    }   
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
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            variableBox[i].variable_value = lcm ; 
            is_that_var_declared = 1;
            break;
        }
    }
    if (is_that_var_declared == 0)
    {
        variableBox[Which_VariableBox_to_be_used_right_now].variable_name = name ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_value = lcm ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_type = "int" ;
        variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = 0.0 ;
        variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0' ; 
    }   
}

void AddIntValue(variableWithValues *pointer,char *name , int value )
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            printf("VARIABLE ALREADY DECLARED.RESTORING THE VALUE\n");
            variableBox[i].variable_value  = value;
            is_that_variable_already_there = 1;
            break;   
        }
    }
    if (is_that_variable_already_there == 0)
    {
        pointer->variable_type   = "int" ;
        pointer->variable_name   = name  ;
        pointer->variable_value  = value ;
        pointer->fVariable_value = 0.0   ;
        pointer->cVariable_value = '\0'  ;
        Which_VariableBox_to_be_used_right_now ++ ;
    }
}

void AddIntValueAsMathematicalOperation (char *name , int value)
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"int") )  ) )
            {
                variableBox[i].variable_value = value;
                is_that_variable_already_there = 1;
                break;
            }  
        }
    }
    if (is_that_variable_already_there == 0)
    {
        
        variableBox[Which_VariableBox_to_be_used_right_now].variable_type   = "int" ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_name   = name  ;
        variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = 0.0   ;
        variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0'  ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_value = value;
        Which_VariableBox_to_be_used_right_now ++ ;
    }

}

void AddIntValue_Checkwhetherfirstvariabledeclared( char *name, char *firstVariable , char *operator , int second_value )
{
    int first_value;
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,firstVariable) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"int") )  ) )
            {
               first_value = variableBox[i].variable_value;
               is_that_variable_already_there = 1;
               break;
            }
        }
    }
    if(is_that_variable_already_there)
    {
        //AddIntValueAsMathematicalOperation(name,first_value,operator,second_value,&variableBox[Which_VariableBox_to_be_used_right_now]);
    }
    else printf("ERROR: THE VARIABLE IN THE RIGHT SIDE OF EQUAL(=) IS NOT DECLARED OR DID NOT MATCH WITH THE TYPE(INT)\n");   
}

void AddIntValue_Checkwhethersecondvariabledeclared ( char *name, int first_value , char *operator , char *secondVariable )
{
    int second_value;
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,secondVariable) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"int") )  ) )
            {
               second_value = variableBox[i].variable_value;
               is_that_variable_already_there = 1;
               break;
            }
            
        }
    }
    if(is_that_variable_already_there)
    {
        //AddIntValueAsMathematicalOperation(name,first_value,operator,second_value,&variableBox[Which_VariableBox_to_be_used_right_now]);
    }
    else printf("ERROR: THE VARIABLE IN THE RIGHT SIDE OF EQUAL(=) IS NOT DECLARED OR DID NOT MATCH WITH THE TYPE(INT)\n"); 
}

void AddIntValue_Checkwhetherfirstsecondvariabledeclared ( char *name, char *firstVariable , char *operator , char *secondVariable )
{
    int first_value;
    float first_value_f;
    char *type1;
    int is_first_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,firstVariable) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"int") )  ) ) { first_value = variableBox[i].variable_value; type1 = "int";}
            else if ( ( !( strcmp (variableBox[i].variable_type,"float") )  ) ) { first_value_f = variableBox[i].fVariable_value; type1 = "float";}
            is_first_variable_already_there = 1;
            break;
        }
    }
    int second_value;
    float second_value_f;
    char *type2;
    int is_second_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,secondVariable) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"int") )  ) ) { second_value = variableBox[i].variable_value; type2 = "int";}
            else if ( ( !( strcmp (variableBox[i].variable_type,"float") )  ) ) { second_value_f = variableBox[i].fVariable_value; type2 = "float";}
            is_second_variable_already_there = 1;
            break;
        }
    }
    if ( is_first_variable_already_there  && is_second_variable_already_there   )
    {
        if ( ((!strcmp(type1,type2))) && ((!strcmp(type1,"int"))) ) {}// AddIntValueAsMathematicalOperation(name,first_value,operator,second_value,&variableBox[Which_VariableBox_to_be_used_right_now]);
        else if ( ((!strcmp(type1,type2))) && ((!strcmp(type1,"float"))) ) {}//AddFloatValueAsMathematicalOperation(name,first_value_f,operator,second_value_f,&variableBox[Which_VariableBox_to_be_used_right_now]);
        else printf("ERROR: TYPE ERROR \n");
    }
    else printf("ERROR: ONE OF THE VARIABLES OR BOTH IN THE RIGHT SIDE OF EQUAL(=) ARE NOT DECLARED\n"); 
}

void AddFloatValue(variableWithValues *pointer,char *name , float value )
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            printf("VARIABLE ALREADY DECLARED.RESTORING THE VALUE\n");
            variableBox[i].fVariable_value = value;
            is_that_variable_already_there = 1;
            break;   
        }
    }
    if(is_that_variable_already_there == 0)
    {
        pointer->variable_type   = "float" ;
        pointer->variable_name   = name    ;
        pointer->fVariable_value = value   ;
        pointer->variable_value  = 0       ;
        pointer->cVariable_value = '\0'    ;
        Which_VariableBox_to_be_used_right_now ++ ;
    }
}

void AddFloatValueAsMathematicalOperation (char *name , float value )
{
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"float") )  ) )
            {
                variableBox[i].fVariable_value = value;
                is_that_variable_already_there = 1;
                break;
            }    
        }
    }
    if (is_that_variable_already_there == 0)
    {
        
        variableBox[Which_VariableBox_to_be_used_right_now].variable_type   = "float" ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_name   = name  ;
        variableBox[Which_VariableBox_to_be_used_right_now].fVariable_value = value   ;
        variableBox[Which_VariableBox_to_be_used_right_now].cVariable_value = '\0'  ;
        variableBox[Which_VariableBox_to_be_used_right_now].variable_value = 0;
        Which_VariableBox_to_be_used_right_now ++ ;
    }

}

void AddFloatValue_Checkwhetherfirstvariabledeclared( char *name, char *firstVariable , char *operator , float second_value )
{
    float first_value;
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,firstVariable) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"float") )  ) )
            {
               first_value = variableBox[i].fVariable_value;
               is_that_variable_already_there = 1;
               break;
            }
        }
    }
    if(is_that_variable_already_there)
    {
        //AddFloatValueAsMathematicalOperation(name,first_value,operator,second_value,&variableBox[Which_VariableBox_to_be_used_right_now]);
    }
    else printf("ERROR: THE VARIABLE IN THE RIGHT SIDE OF EQUAL(=) IS NOT DECLARED OR DID NOT MATCH WITH THE TYPE(FLOAT)\n");   
}

void AddFloatValue_Checkwhethersecondvariabledeclared ( char *name, float first_value , char *operator , char *secondVariable )
{
    float second_value;
    int is_that_variable_already_there = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,secondVariable) )  ) )
        {
            if ( ( !( strcmp (variableBox[i].variable_type,"float") )  ) )
            {
               second_value = variableBox[i].fVariable_value;
               is_that_variable_already_there = 1;
               break;
            }
        }
    }
    if(is_that_variable_already_there)
    {
        //AddFloatValueAsMathematicalOperation(name,first_value,operator,second_value,&variableBox[Which_VariableBox_to_be_used_right_now]);
    }
    else printf("ERROR: THE VARIABLE IN THE RIGHT SIDE OF EQUAL(=) IS NOT DECLARED OR DID NOT MATCH WITH THE TYPE(FLOAT)\n"); 
}

void AddCharValue(variableWithValues *pointer,char *name ,  char *value )
{
    int is_that_variable_already_there = 0;
    for (int i = 100 ; i < Which_VariableBox_to_be_used_right_now_for_array ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            variableBox[i].variable_value = strlen(value) ; 
            for (int j=i+1;j<(i + strlen(value) - 2);j++)
            {
                variableBox[j].cVariable_value = value[j-i] ;
            }
            is_that_variable_already_there = 1;
            break;   
        }
    }
    if(is_that_variable_already_there == 0)
    {
        pointer->variable_type   = "char"   ;
        pointer->variable_name   = name     ;
        pointer->variable_value  = strlen(value)        ;
        pointer++ ; 
        Which_VariableBox_to_be_used_right_now_for_array ++ ;
        for(int i=1; i < (strlen(value)-1) ; i++)
        {
            pointer->variable_type   = "char"   ;
            pointer->variable_name   = name     ;
            pointer->cVariable_value = value[i] ;
            pointer->fVariable_value = 0.0      ;
            pointer->variable_value = 0;
            pointer ++ ;
            Which_VariableBox_to_be_used_right_now_for_array ++ ;
        }
    }
}

void MakeAnArrayOfIntegers(char *name , int size)
{
    variableBox[Which_VariableBox_to_be_used_right_now_for_array].variable_name = name;
    variableBox[Which_VariableBox_to_be_used_right_now_for_array].variable_value = size-1;
    variableBox[Which_VariableBox_to_be_used_right_now_for_array].variable_type = "notchar" ;
    Which_VariableBox_to_be_used_right_now_for_array ++;
    for(int i = Which_VariableBox_to_be_used_right_now_for_array ; i < Which_VariableBox_to_be_used_right_now_for_array + size ; i++)
    {
        variableBox[ i].variable_name   = name; 
        variableBox[ i].variable_value  = 0;
        variableBox[ i].fVariable_value = 0.0;
        variableBox[ i].cVariable_value = '\0';    
    }
    Which_VariableBox_to_be_used_right_now_for_array += size;
}

void StoreIntegersInAnArray( char *name,int index,int value)
{
    int is_the_value_storable = 0;
    int expected_index;
    int size;
    for ( int i = 100 ; i<Which_VariableBox_to_be_used_right_now_for_array ; i++)
    {
        if ( ! ( strcmp ( variableBox[i].variable_name , name  ) ) ) 
        {
            size = variableBox[i].variable_value;
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
        variableBox[expected_index].variable_value = value;
        variableBox[expected_index].variable_type = "int" ;
        
    }
    
}

void StoreFloatInAnArray( char *name,int index,float value)
{
    int is_the_value_storable = 0;
    int expected_index;
    int size;
    for ( int i = 100 ; i<Which_VariableBox_to_be_used_right_now_for_array ; i++)
    {
        if ( ! ( strcmp ( variableBox[i].variable_name , name  ) ) ) 
        {
            size = variableBox[i].variable_value;
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
        variableBox[expected_index].fVariable_value = value;
        variableBox[expected_index].variable_type = "float" ;
        
    }
    
}

void StoreCharInAnArray( char *name,int index,char *value)
{
    int is_the_value_storable = 0;
    int expected_index;
    int size;
    for ( int i = 100 ; i<Which_VariableBox_to_be_used_right_now_for_array ; i++)
    {
        if ( ! ( strcmp ( variableBox[i].variable_name , name  ) ) ) 
        {
            size = variableBox[i].variable_value;
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
        variableBox[expected_index].cVariable_value = value[1];
        variableBox[expected_index].variable_type = "char" ;
        
    }
    
}

void StoreArrayByLoop ( char *name)
{
    int size ;
    int starting_index; 
    int found_the_array = 0;
    int temp;
    int cont;
    for ( int i = 100 ; i<Which_VariableBox_to_be_used_right_now_for_array ; i++)
    {
        if ( ! ( strcmp ( variableBox[i].variable_name , name  ) ) ) 
        {
            size = variableBox[i].variable_value ;
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
            variableBox[starting_index].variable_value = temp;
            starting_index ++ ;
            //printf("Wish to continue?In case not,the remaining index of the array will be skipped(0/1):");
            //scanf("%d",&cont);
            //if(cont == 0) break;
        }
    }
    else printf("ERROR:THE ARRAY IS NOT DECLARED YET\n");   
}

void What_Values_Are_In_VariableBox() // has to be editted
{
    printf("%d\n",Which_VariableBox_to_be_used_right_now);
    for(int i=0;i<Which_VariableBox_to_be_used_right_now;i++) 
       printf("%s = %d\n",variableBox[i].variable_name,variableBox[i].variable_value);
}

void Display_Function(char *name)
{
    int found = 0;
    int index;
    char *type;
    for(int i=0;i<Which_VariableBox_to_be_used_right_now;i++)
    {
        if ( ! ( strcmp(variableBox[i].variable_name,name) ) )
        {
            index = i;
            type = variableBox[i].variable_type;
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        if( ! ( strcmp(type,"int") )  )   printf("%d\n",variableBox[index].variable_value);
        if( ! ( strcmp(type,"float") )  ) printf("%f\n",variableBox[index].fVariable_value);
        if( ! ( strcmp(type,"char") )  )  printf("%c\n",variableBox[index].cVariable_value);
    }
    else printf("ERROR: VARIABLE NOT FOUND\n");
}

void Display_Function_Array(char *name)
{
    int size;
    int index;
    int is_printable = 0;
    for (int i=100 ; i<Which_VariableBox_to_be_used_right_now_for_array;i++)
    {
        if ( ! ( strcmp ( variableBox[i].variable_name , name  ) ) ) 
        {
            size = variableBox[i].variable_value;
            index = i+1;
            is_printable = 1;
            break;
        }
    }
    if ( is_printable)
    {
        for(int i=index;i<=(index + size);i++)
        {
            printf("%s %s %d %f %c\n",variableBox[i].variable_name,variableBox[i].variable_type,variableBox[i].variable_value,variableBox[i].fVariable_value,variableBox[i].cVariable_value);
        }
    }
    else
    {
        printf("ERROR: NO ARRAY IS FOUND WITH THIS NAME\n");
    }
    
}

void Display_Function_Array_loop(char *name,int loopIndex)
{
    int size;
    int indexToPrint;
    int is_printable = 0;
    for (int i=100 ; i<Which_VariableBox_to_be_used_right_now_for_array;i++)
    {
        if ( ! ( strcmp ( variableBox[i].variable_name , name  ) ) ) 
        {
            size = variableBox[i].variable_value;
            indexToPrint = (i+1)+loopIndex;
            is_printable = 1;
            if ( ! ( strcmp ( variableBox[indexToPrint].variable_type , "int"  ) ) ) printf("%d\n",variableBox[indexToPrint].variable_value);
            else if ( ! ( strcmp ( variableBox[indexToPrint].variable_type , "float"  ) ) ) printf("%f\n",variableBox[indexToPrint].fVariable_value);
            else if ( ! ( strcmp ( variableBox[indexToPrint].variable_type , "char"  ) ) ) printf("%c\n",variableBox[indexToPrint].cVariable_value);
            break;
        }
    }
    if(is_printable == 0) printf("ERROR: ARRAY INDEX EXCEEDS\n");
}   

void inc_dec_function(char *name , char * operator , int unit)
{
    int done = 0;
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,name) )  ) )
        {
            if ( ( !( strcmp (operator,"inc+") )  ) ) 
            { 
                variableBox[i].variable_value += unit ;
                done = 1;
                break ;  
            } 
            else if ( ( !( strcmp (operator,"inc*") )  ) ) 
            { 
                variableBox[i].variable_value *= unit ;
                done = 1;
                break ;  
            }  
            else if ( ( !( strcmp (operator,"dec-") )  ) ) 
            { 
                variableBox[i].variable_value -= unit ;
                done = 1;
                break ;  
            }  
            else if ( ( !( strcmp (operator,"dec/") )  ) ) 
            { 
                if (unit != 0) variableBox[i].variable_value /= unit ;
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
    for (int i = 0 ; i < Which_VariableBox_to_be_used_right_now ; i ++)
    {
        if ( ( !( strcmp (variableBox[i].variable_name,unit) )  ) ) { is_unit_declared = 1 ; index = i; break ; }
    }
    if( is_unit_declared == 0 ) printf ("ERROR: THE UNIT VARIABLE IS NOT DECLARED\n");    
    else inc_dec_function(name , operator , variableBox[index].variable_value);
}

int main(void)
{
   
	//freopen("Input69_modified.txt","r",stdin);
        
    freopen("Input69_modified.txt","r",stdin);
	freopen("output_Modified.txt","w",stdout);
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
