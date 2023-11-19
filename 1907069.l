%{
        #include<stdio.h>
	#include<stdlib.h>
	#include<string.h>



struct Variables {
    char name[256];
    struct Variables *next;
};

struct Variables *VariablesTable = NULL;




int CheckDuplicate(char *varName) {
    struct Variables *current = VariablesTable;
    while (current != NULL) {
        if (strcmp(current->name, varName) == 0) {
            return 1; // duplicate
        }
        current = current->next;
    }
    return 0; // no copy
}

void addToVariablesTable(char *varName) {
    struct Variables *newVariables = (struct Variables *)malloc(sizeof(struct Variables));
    strcpy(newVariables->name, varName);
    newVariables->next = VariablesTable;
    VariablesTable = newVariables;
}



int total_v=0;
int kk=0;



%}




digit [0-9]
digits         [-]?[0-9]+
alphabets      [a-zA-z]
alpha_numbers  [a-zA-Z0-9]
char_type      [']{alpha_numbers}[']


identifiers [a-zA-Z]([a-zA-Z0-9])*
unary_operator "inc"|"dec"





%%







"import"[ ]+.+\n   {printf("header declaration\n"); kk++; }

"introduce"[ ]+{identifiers}" "+({identifiers}|{digits})    {printf("define section\n"); kk++;}



[#][#].*\n         {printf("single line comment\n");}

[!][<][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[>][!]    {printf("multiple_line_comment\n");}









[i][i][ ]*(>>[ ]*[a-zA-Z][a-zA-Z0-9]*[ ]*)*[;] { printf("Input Statement\n"); kk++; }


[o][o][ ]*(<<[ ]*[a-zA-Z][a-zA-Z0-9]*[ ]*)*; { printf("Output Statement\n");  kk++;}






{identifiers}*[ \t\n]*<-[ \t\n]*({identifiers}|{digits})[ \t\n]*[;] { printf("Value Assigned"); }


"<-"            { printf("Assignment operator\n"); }

";"             { printf("End of line \n"); }




"var"[ \t\n]+("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")(" ")+{identifiers}[ ]*([,][ ]*{identifiers})*[;]           {

kk++;kk++;kk++;


 char varName[256];
    int numVars = 0 , ck=0;
    char *token = strtok(yytext, ",");
    while (token != NULL) {
        strcpy(varName, token);

        int len = strlen(varName);
        if (varName[len - 1] ==';')varName[len - 1] = '\0';
        if (!CheckDuplicate(varName)) {


            if (ck > 0) {
                addToVariablesTable(varName);
                printf("Variable declaration for: %s\n", varName);
                numVars++;
            }
            ck++;
        } else {
            printf("duplicate variable: %s\n", varName);
        }


        token = strtok(NULL, ",");
    }

    //printf("Number of variables: %d\n", numVars);
    total_v += numVars;

}






"var"[ \t\n]+("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")(" ")+{identifiers}[ ]*[ ]*([,][ ]*{identifiers}[(]{digits}[)])*[;]           {


kk++;kk++;kk++;

 char varName[256];
    int numVars = 0 , ck=0;
    char *token = strtok(yytext, ",");
    while (token != NULL) {
        strcpy(varName, token);

        int len = strlen(varName);
        if (varName[len - 1] ==';')varName[len - 1] = '\0';
        if (!CheckDuplicate(varName)) {


            if (ck > 0) {
                addToVariablesTable(varName);
                printf("Array declaration Statement\n");
                numVars++;
            }
            ck++;
        } else {
            printf("duplicate Array variable");
        }


        token = strtok(NULL, ",");
    }

    //printf("Number of variables: %d\n", numVars);
    total_v += numVars;

}






"int_i" 	        {  printf("INT");kk++;}
"long_l"                {printf("long");kk++;}
"double_d" 	     	{ printf("DOUBLE");kk++;}
"float_f" 		  { printf("float");kk++;}
"char_c" 		   { printf("CHAR");kk++;}
"bool_b"                {printf("BOOLEAN");kk++;}
"str_s"                 {printf("STRING");kk++;}


{identifiers}[ \t\n]*<-[ \t\n]*({identifiers}|{digits})[ \t\n]*("add")[ \t\n]*({identifiers}|{digits})[ \t\n]*; { printf("Addition Operation done\n");kk++; }


{identifiers}[ \t\n]*<-[ \t\n]*({identifiers}|{digits})[ \t\n]*("sub")[ \t\n]*({identifiers}|{digits})[ \t\n]*; { printf("Subtruction Operation done\n");kk++; }


{identifiers}[ \t\n]*<-[ \t\n]*({identifiers}|{digits})[ \t\n]*("mul")[ \t\n]*({identifiers}|{digits})[ \t\n]*; { printf("Multiplication Operation done\n");kk++; }


{identifiers}[ \t\n]*<-[ \t\n]*({identifiers}|{digits})[ \t\n]*("div")[ \t\n]*({identifiers}|{digits})[ \t\n]*; { printf("Division Operation done\n"); kk++;}


"cmp "({identifiers}|{digits})[ \t\n]*("-gt")[ \t\n]*({identifiers}|{digits})[ \t\n]*":"(.+)[;] { printf("Greater than Comparation done\n");kk++; }

"cmp "({identifiers}|{digits})[ \t\n]*("-ge")[ \t\n]*({identifiers}|{digits})[ \t\n]*":"(.+)[;] { printf("Greater than or equal Comparation done\n"); kk++;}

"cmp "({identifiers}|{digits})[ \t\n]*("-lt")[ \t\n]*({identifiers}|{digits})[ \t\n]*":"(.+)[;] { printf("Less than Comparation done\n");kk++; }

"cmp "({identifiers}|{digits})[ \t\n]*("-le")[ \t\n]*({identifiers}|{digits})[ \t\n]*":"(.+)[;] { printf("less than or Comparation done\n");kk++; }

"cmp "({identifiers}|{digits})[ \t\n]*("-eq")[ \t\n]*({identifiers}|{digits})[ \t\n]*":"(.+)[;] { printf("Equal Comparation done\n"); kk++;}

"cmp "({identifiers}|{digits})[ \t\n]*("-ne")[ \t\n]*({identifiers}|{digits})[ \t\n]*":"(.+)[;] { printf("Not equal Comparation done\n"); kk++;}




({identifiers}[ ]+"inc")[;]|("inc"[ ]+{identifiers})[;]   { printf("increment statement");kk++;}
({identifiers}[ ]+"dec")[;]|("dec"[ ]+{identifiers})[;]   { printf("decrement statement");kk++;}





"add"         { printf("Operator: add\n"); kk++;}
"sub"         { printf("Operator: sub\n"); kk++;}
"mul"         { printf("Operator: mul\n"); kk++;}
"div"         { printf("Operator: div\n"); kk++;}




"-eq"         { printf("Operator: equal\n"); kk++;}
"-ne"         { printf("Operator: not equal\n"); kk++;}
"-lt"         { printf("Operator: less_than\n"); kk++;}
"-le"         { printf("Operator: less_than or equal\n"); kk++;}
"-gt"         { printf("Operator: greater than\n"); kk++;}
"-ge"         { printf("Operator: greater than or equal\n");kk++; }




"SORT"[ ]+{identifiers}[;] 			                                       {printf("SORT statement"); kk++;}
"FACT"[ ]+({identifiers}|{digits})[;]	                                                {printf("FACTORIAL statement");kk++;}
"sin"[ ]+({identifiers}|{digits})[;] 			                                {printf("SINFUNC statement");kk++;}
"cos"[ ]+({identifiers}|{digits})[;] 			                                {printf("COSFUNC statement");kk++;}
"tan"[ ]+({identifiers}|{digits})[;] 			                                {printf("TANFUNC statement");kk++;}
"MAX"[ ]*[(][ ]*({identifiers}|{digits})[,][ ]*({identifiers}|{digits})[ ]*[)][;]  	        {printf("MAXNUMBER statement");kk++;}
"MIN"[ ]*[(][ ]*({identifiers}|{digits})[,][ ]*({identifiers}|{digits})[ ]*[)][;]  	        {printf("MINNUMBER statement");kk++;}
"REV"[ ]+{identifiers}[;]  			                                        {printf("REVERSE statement");kk++;}
"log10"[ ]+({identifiers}|{digits})[;]			                                {printf("LOG10FUNC statement");kk++;}
"log"[ ]+({identifiers}|{digits})[;] 			                                {printf("LOGFUNC statement");kk++;}
"gcd"[ ]*[(][ ]*({identifiers}|{digits})[,][ ]*({identifiers}|{digits})[ ]*[)][;] 		{printf("GCDFUNC statement");kk++;}
"lcm"[ ]*[(][ ]*({identifiers}|{digits})[,][ ]*({identifiers}|{digits})[ ]*[)][;] 		{printf("LCMFUNC statement");kk++;}
"pow"[ ]*[(][ ]*({identifiers}|{digits})[,][ ]*({identifiers}|{digits})[ ]*[)][;] 		{printf("POWERFUNC statement");kk++;}



"let"[ ]+{identifiers}[ \t\n]*("option"([ ]+)({identifiers}|{digits})*":"(.+)[;])*[ \t\n]*"default"[ ]+":"(.+)[;]	                                {printf("Switch Statement");kk++;kk++;kk++;}


"when"[ ]*[(][ ]*{identifiers}*[ ]*("-eq"|"-ne"|"-lt"|"-le"|"-gt"|"-ge")[ ]*{identifiers}*[ ]*[)][ \t\n]*[{][ \t\n]*.*[ \t\n]*[}] {
    printf("While loop Statement\n");kk++;
}



"any"[ ]*[(][ ]*{identifiers}[ ]*("-eq"|"-ne"|"-lt"|"-le"|"-gt"|"-ge")[ ]*{identifiers}[ ]*[)][ \t]*"then"[ \t]*[{][ \t\n]*.*[ \t\n]*[}][ \t\n]*"also"[ \t\n]*[(][ ]*{identifiers}[ ]*("-eq"|"-ne"|"-lt"|"-le"|"-gt"|"-ge")[ ]*{identifiers}[ ]*[)][ \t]*"then"[ \t]*[{][ \t\n]*.*[ \t\n]*[}][ \t\n]*"or"[ \t\n]*[{][ \t\n]*.*[ \t\n]*[}] {
    printf("If Else Ladder Block\n");
    kk+=5;
}



"FOR"[ ]*[(][ ]*{identifiers}[ ]*[,][ ]*{digits}[ ]*[,][ ]*{identifiers}[ ]*("-eq"|"-ne"|"-lt"|"-le"|"-gt"|"-ge")[ ]*({identifiers}|{digits})[ ]*[,][ ]*{identifiers}[ ]+("inc"|"dec")[)][ \t\n]*[{][ \t\n]*.*[ \t\n]*[}] {
    printf("FOR loop statement\n");kk++;
}



"func"[ ]+("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")[ ]+{identifiers}[ ]*[(][ ]*("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")[ ]+{identifiers}[ ]*[,][ ]*("int_i"|long_l|"double_d"|"float_f"|"char_c"|"bool_b"|"str_s")[ ]+{identifiers}[ ]*[)][ ]*[{][ \t\n]*.*[ \t\n]*[}]  {
    printf("Function declaration Statement");
}



"BEGIN:" 			{printf("Beginning of Main section");kk++;}
"END" 			        {
kk++;
printf("Ending of Main section\n\n\n");
printf("Number of variables in Input Code: %d\n", total_v);
printf("Number of keyword Used in Input Code: %d\n", kk);
}


"return"[ ]+{digit}; { printf("Return statement\n"); kk++; }



%%





int yywrap() {
return 1;
}




int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);

       
	yylex();
	return 0;


}
