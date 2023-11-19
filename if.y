						
%{
	#include <stdio.h>
	#include <math.h>
	#define YYSTYPE int
        int sym[26];
%}


		     
%token NUM VAR IF ELSE
%nonassoc ELSE  
%nonassoc IFX
%left '<' '>'
%left '+' '-'
%left '*' '/'

%%	  	


program: 
       | program statement  
       ;

	




		   

statement:
           expression ';' { printf("\nValid Declaration Check: %d \n",$1);}


         | VAR '=' expression ';' { sym[$1] = $3;printf("\nCK1: %d \n",sym[$1]);printf("\nCK2: %d \n",$3); }


         | ';'	          { printf("\nValid Declaration\n");}

|IF '(' expression ')''{' statement'}'statement ELSE statement {
     printf("\nAccepted\n");
}

|IF '(' expression ')' statement %prec IFX{

   printf("\nIts Accepted\n");
}
;






expression: NUM                     { $$=$1;     }
      | VAR                         { $$=sym[$1];}
      | expression '+' expression   { $$=$1+$3;                    printf("\nAddition Result: %d \n",$$);  }
      | expression '-' expression   { $$=$1-$3;  }
      ;	

%%

int yywrap()
{
return 1;
}	

yyerror(char *s){

printf("%s\n",s);
}		       
					
