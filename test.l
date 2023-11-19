%{
    #include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include "test.tab.h"
	
%}


digits         [-]?[0-9]+
alphabets      [a-zA-z]
alpha_numbers  [a-zA-Z0-9]
char_type      [']{alpha_numbers}[']





%%
"array:"                         {                                      return ARRAY ;}
"int_i"                           {                                      return TYPE_INT ;}
"float_f"                         {                                      return TYPE_FLOAT ;}
"char_c"                          {                                      return TYPE_CHAR ;}





"add"                             {yylval.str          = strdup(yytext); return PLUS;}
"sub"                             {yylval.str          = strdup(yytext); return MINUS;}
"mul"                             {yylval.str          = strdup(yytext); return MUL;}
"div"                             {yylval.str          = strdup(yytext); return DIV;}








{digits}                        {yylval.integerValue = atoi(yytext);   return INT ;}  
{digits}.{digits}               {yylval.floatValue   = atof(yytext);   return FLOAT ;} 
{char_type}                     {yylval.str          = strdup(yytext); return CHAR ;} 
{alphabets}({alpha_numbers})*   {yylval.str          = strdup(yytext); return VARIABLE ;} 



"fake:"                         {yylval.str          = strdup(yytext); return MATHEMATECAL_OPERATOR;}

"inc+"|"dec-"|"inc*"|"dec/"     {yylval.str          = strdup(yytext); return INCREMENT_DECREMENT ;}


\".*\"                           {yylval.str          = strdup(yytext);return STRING;}
"<-"                             {return EQUAL;}


"print:"                        {return PRINT;}


"if:"                           {return IF;}
"else:"                         {return ELSE;}
"elseif:"                       {return ELSEIF;}



"loop:"                         {return LOOP;}
"store:"                        {return STORE;}
"switch:"                       {return SWITCH;}
"def:"                          {return DEF;}


"gcd:"                          {return GCD;}
"lcm:"                          {return LCM;}
"sort:"                         {return SORT;}
"asc:"                          {return ASC;}
"des:"                          {return DES;}
"max:"                          {return MAX;}
"min:"                          {return MIN;}
"sin:"                          {return SIN;}
"cos:"                          {return COS;}
"tan:"                          {return TAN;}


"show:"                         {return SHOW;}
"len:"                          {return LENGTH;}
"el;"                           {return NEWLINE;}





"{"                            {return BLOCKSTART;}


"}"                            {return BLOCKEND;}






"("                             {return LEFTPARANTHESIS;}
")"                             {return RIGHTPARANTHESIS;}
"&&"                            {return AND;}
"||"                            {return OR;}




"-gt"                             {return GREATERTHAN;}
"-lt"                            {return LESSTHAN;}
"-le"                           {return LESSEQUAL;}
"-ge"                            {return GREATEREQUAL;}
"-eq"                            {return EQUALEQUAL;}
"-ne"                            {return NOTEQUAL ;}
","                             {return COMMA;}
";"                             {return SEMICOLON;}

[ \n\t]
[/][/].*                       
%%





