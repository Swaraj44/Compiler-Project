%{
    #include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include "1907069.tab.h"
	
%}


digit [0-9]
digits         [-]?[0-9]+
alphabets      [a-zA-z]
alpha_numbers  [a-zA-Z0-9]
char_type      [']{alpha_numbers}[']

identifiers [a-zA-Z]([a-zA-Z0-9])*
unary_operator "inc"|"dec"




%%

"import"[ ]+.+\n   {printf("header declaration\n"); }
"introduce"[ ]+{identifiers}" "+({identifiers}|{digits})    {printf("define section\n");}



[#][#].*\n         {printf("single line comment\n");}
[!][<][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[>][!]    {printf("multiple_line_comment\n");}


"ARRAY:"                         {                                      return ARRAY ;}
"int_i"                           {                                      return TYPE_INT ;}
"float_f"                         {                                      return TYPE_FLOAT ;}
"char_c"                          {                                      return TYPE_CHAR ;}





"add"                             { yylval.str          = strdup(yytext); return PLUS;}
"sub"                             {yylval.str          = strdup(yytext); return MINUS;}
"mul"                             {yylval.str          = strdup(yytext); return MUL;}
"div"                             {yylval.str          = strdup(yytext); return DIV;}








{digits}                        { yylval.integerValue = atoi(yytext);   return INT ;}  
{digits}.{digits}               {yylval.floatValue   = atof(yytext);   return FLOAT ;} 
{char_type}                     {yylval.str          = strdup(yytext); return CHAR ;} 
{alphabets}({alpha_numbers})*   {  yylval.str          = strdup(yytext); return VARIABLE ;} 




"inc+"|"dec-"|"inc*"|"dec/"     {yylval.str          = strdup(yytext); return INCREMENT_DECREMENT ;}


\".*\"                           { yylval.str          = strdup(yytext);return STRING;}
"<-"                             {return EQUAL;}


"print:"                        { return PRINT;}
"oo"[ ]*(<<[ ]*)                { return PRINT;}


"any:"                           {  return IF;}
"or:"                            {   return ELSE;}
"maybe:"                         {   return ELSEIF;}



"when:"							{return WHILE;}
"FOR:"                         { return LOOP;}
"store:"                        {return STORE;}
"match:"                        {return SWITCH;}
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
"el;"                           { return NEWLINE;}





"{"                            {   return BLOCKSTART;}

"->"                            {return TO;}

"}"                            {   return BLOCKEND;}






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
","                             { return COMMA;}
";"                             {return SEMICOLON;}


"func"[ ]+("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")[ ]+{identifiers}[ ]*[(][ ]*("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")[ ]+{identifiers}[ ]*[,][ ]*("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")[ ]+{identifiers}[ ]*[)][ ]*[{][ \t\n]*.*[ \t\n]*[}]  {
    printf("Function declaration Statement");
}


[ \n\t]
[/][/].* 

. {
	printf("Error occour %s\n",yytext);
}

%%





