//1907069

%{
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
   void AddCharValue(variableWithValues *pointer,char *name ,  char *value );
   void MakeAnArrayOfIntegers( char *name , int size);
   void StoreIntegersInAnArray( char *name,int index,int value);
   void StoreFloatInAnArray( char *name,int index,float value);
   void StoreCharInAnArray( char *name,int index,char *value);
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
   
%}



%union
{
      char     *str;
      int      integerValue;
      float    floatValue;
}




%start begin




%token <integerValue>  INT 
%token <floatValue>    FLOAT
%token <str>           VARIABLE
%token <str>           EQUAL
%token <str>           CHAR
%token <str>           MATHEMATECAL_OPERATOR PLUS MINUS MUL DIV
%token <str>           INCREMENT_DECREMENT
%token WHILE
%token PRINT ARRAY TYPE_INT TYPE_FLOAT TYPE_CHAR IF ELSE ELSEIF LOOP SWITCH DEF STORE BLOCKSTART TO BLOCKEND LEFTPARANTHESIS RIGHTPARANTHESIS AND OR GREATERTHAN LESSTHAN GREATEREQUAL LESSEQUAL EQUALEQUAL COMMA SEMICOLON
%token GCD LCM SORT ASC DES MAX MIN SIN COS TAN  STRING SHOW LENGTH NOTEQUAL NEWLINE
%type <integerValue> Conditions Condition_Checking if_else expression 
%type <floatValue> float_expression
%type <str> STRING
%left PLUS MINUS
%left MUL DIV

%%

begin : Statements ;

Statements : /* empty */ 
           | Statements variable_declaration
           | Statements inc_dec
           | Statements if_else
           | Statements expression   {printf("%d\n",$2);}
           | Statements looping
           | Statements Switch
           | Statements While_loop      
           | Statements functions 
           | Statements PRINT STRING     {char *val = $3 ;for(int i =1 ; i<strlen($3)-1;i++) {printf("%c",val[i]);} }
           | Statements PRINT STRING NEWLINE    {char *val = $3 ;for(int i =1 ; i<strlen($3)-1;i++) {printf("%c",val[i]);} printf("\n");}
           | Statements PRINT VARIABLE                                          { Display_Function( $3); }
           | Statements PRINT ARRAY VARIABLE                                    { Array_Display( $4); }
           ; 

variable_declaration :  
                        TYPE_INT VARIABLE EQUAL expression                      { Add_Int_Variable( $2 , $4); }  
                     |  TYPE_FLOAT VARIABLE EQUAL float_expression              { Add_float_Variable ($2,$4); }
                     |  VARIABLE EQUAL STRING                                   { AddCharValue ( &Variable_Storage[Current_Variable_for_array] , $1 , $3 );} 
                     |  ARRAY VARIABLE INT                                      { MakeAnArrayOfIntegers( $2 , $3);}    
                     |  ARRAY VARIABLE INT EQUAL INT                            { StoreIntegersInAnArray( $2 , $3 , $5 );}  
                     |  ARRAY VARIABLE INT EQUAL FLOAT                          { StoreFloatInAnArray( $2 , $3 , $5 );} 
                     |  ARRAY VARIABLE INT EQUAL CHAR                           { StoreCharInAnArray( $2 , $3 , $5 );}    
                     |  VARIABLE EQUAL ARRAY VARIABLE INT                       { StoreAnArrrayValueToVariable($1,$4,$5);}
                     |  VARIABLE EQUAL LENGTH VARIABLE                          { FindLengthofArray($1,$4);}
                     
                     
                     ;





expression : INT { $$ = $1 ; }
           | VARIABLE {  int found = 0;
                         for (int i = 0 ; i < Current_Variable ; i ++)
                         { 
                             if ( ( !( strcmp (Variable_Storage[i].Var_Name,$1) )  ) )
                             {
                                 if ( ( !( strcmp (Variable_Storage[i].Var_Type,"int") )  ) )
                                 {
                                    $$ = Variable_Storage[i].Var_Value; found = 1;  break;
                                 }
                                  
                             }
                         }
                         if (found == 0) printf ("ERROR: VARIABLE NOT FOUND OR TYPE DOES NOT MATCH\n");
                      }      
        
           |   VARIABLE EQUAL float_expression                         { AddNewFloatValue($1,$3); }
           |   VARIABLE EQUAL expression                               { AddIntValueAgain( $1 , $3); }  
           | expression PLUS expression  { $$ = $1 + $3;  }
           | expression MINUS expression { $$ = $1 - $3;  }
           | expression MUL expression   { $$ = $1 * $3;  }
           | expression DIV expression   { if ($3 != 0) { $$ = $1 / $3;  } else printf ("ERROR: DIVISION BY ZERO\n"); }
           ;

expression_Statements :
                        if_else
                        |expression
                        |Statements
                     ;


float_expression : FLOAT { $$ = $1 ; }
           | VARIABLE {  int found = 0;
                         for (int i = 0 ; i < Current_Variable ; i ++)
                         { 
                             if ( ( !( strcmp (Variable_Storage[i].Var_Name,$1) )  ) )
                             {
                                 if ( ( !( strcmp (Variable_Storage[i].Var_Type,"float") )  ) )
                                 {
                                    $$ = Variable_Storage[i].F_Var_Value; found = 1;  break;
                                 }
                                 else("%s\n",Variable_Storage[i].Var_Type);
                                  
                             }
                             else("%s\n",$1);
                         }
                         if (found == 0) printf ("ERROR: VARIABLE NOT FOUND OR TYPE DOES NOT MATCH\n");
                      }      
        
           | float_expression PLUS float_expression  { $$ = $1 + $3;  }
           | float_expression MINUS float_expression { $$ = $1 - $3;  }
           | float_expression MUL float_expression   { $$ = $1 * $3;  }
           | float_expression DIV float_expression   { if ($3 != 0) { $$ = $1 / $3;  } else printf ("ERROR: DIVISION BY ZERO\n"); }
           ;           

inc_dec : VARIABLE INCREMENT_DECREMENT VARIABLE   { inc_dec_function_variableUnit($1,$2,$3);}
        | VARIABLE INCREMENT_DECREMENT INT        { inc_dec_function($1,$2,$3) ; }
        ;

if_else : IF  Condition_Checking  BLOCKSTART expression_Statements BLOCKEND  { printf("Valid If Block\n"); if($2) printf("IF");}
        | IF  Condition_Checking  BLOCKSTART expression_Statements BLOCKEND ELSE BLOCKSTART expression_Statements BLOCKEND  {  printf("Valid If Block\n"); if($2) printf("---if---"); else printf("---else---");  }
        | IF  Condition_Checking  BLOCKSTART expression_Statements BLOCKEND ELSEIF Condition_Checking BLOCKSTART expression_Statements BLOCKEND ELSE BLOCKSTART expression_Statements BLOCKEND 
                                                    {
                                                         printf("Valid If Block\n");
                                                    }
        
        ;
            

While_loop:  WHILE  Condition_Checking BLOCKSTART expression_Statements BLOCKEND { printf("Valid While_loop Block\n"); if($2) printf("While Loop");}

;



Condition_Checking : Conditions AND Conditions   { if ($1 && $3) $$ = 1 ; else $$ = 0; }
                   | Conditions OR Conditions    { if ($1 || $3) $$ = 1 ; else $$ = 0; }
                   | Conditions    { $$ = $1; }
                   ;
                







Conditions : expression GREATERTHAN expression    { if($1>$3) $$ = 1; else $$ = 0;}
           | expression LESSTHAN expression       { if($1<$3) $$ = 1; else $$ = 0;}
           | expression GREATEREQUAL expression   { if($1>=$3) $$ = 1; else $$ = 0;}
           | expression LESSEQUAL expression      { if($1<=$3) $$ = 1; else $$ = 0;}
           | expression EQUALEQUAL expression     { if($1==$3) $$ = 1; else $$ = 0;}  
           | expression NOTEQUAL expression       { if($1!=$3) $$ = 1; else $$ = 0;}     






















                                                       

looping :   LOOP INT COMMA INT COMMA PLUS INT BLOCKSTART Statements  BLOCKEND {  
                                                                   for (int i=$2;i<=$4;i=i+$7)
                                                                   {
                                                                         printf("FOR Loop Running :%d\n",i);
                                                                        
                                                                   }  
                                                                               }  
        |   LOOP INT COMMA INT COMMA MINUS INT BLOCKSTART Statements  BLOCKEND {  
                                                                   for (int i=$2;i<=$4;i=i-$7)
                                                                   {
                                                                          printf("FOR Loop Running :%d\n",i);
                                                                        
                                                                   }  
                                                                               }    
        |   LOOP INT COMMA INT COMMA MUL INT BLOCKSTART PRINT  BLOCKEND {  
          
                                                                   for (int i=$2;i<=$4;i=i*$7)
                                                                   {
                                                                         printf("%d\n",i);
                                                                         
                                                                   }  
                                                                               }  
       
        |   LOOP VARIABLE COMMA VARIABLE COMMA PLUS INT BLOCKSTART ARRAY VARIABLE PRINT BLOCKEND { 
                int var1 = 0,var2 = 0 , value1 , value2; 
                for (int i = 0 ; i < Current_Variable ; i ++)
                {
                    if ( ( !( strcmp (Variable_Storage[i].Var_Name,$2) )  ) )
                    {
                         var1 = 1 ; value1 =  Variable_Storage[i].Var_Value ; break ;
                    }
                }
                for (int i = 0 ; i < Current_Variable ; i ++)
                {
                    if ( ( !( strcmp (Variable_Storage[i].Var_Name,$4) )  ) )
                    {
                         var2 = 1 ; value2 =  Variable_Storage[i].Var_Value ; break ;
                    }
                } 
                 if (var1 && var2) {                               for (int i=value1;i<=value2;i=i+$7)
                                                                   {
                                                                         Array_Display_loop($10,i);
                                                                        
                                                                   }
                                                                   }
        }
                                                                          
                                                                    
           ;   




















































Switch: SWITCH BLOCKSTART CASE BLOCKEND
       ;

CASE :  PARTICULAR_CASE  DEFAULT_CASE 
      ; 

PARTICULAR_CASE : /* NULL */
                  | PARTICULAR_CASE CASE_NUMBER 
                  ;

CASE_NUMBER : expression RIGHTPARANTHESIS expression SEMICOLON  expression { if(switch_matched == 0) { if($1 == $5) { printf("switch_matched  \n");printf("Expected Value = %d\n",$3); switch_matched = 1;} } }
            ;

DEFAULT_CASE : DEF  expression { if(switch_matched == 0) printf("Expected Value = %d\n",$2); }
              ;           










functions: SORT ASC VARIABLE { Sort_Asc($3);}  
        |  SORT DES VARIABLE { Sort_Des($3);}
        |  VARIABLE EQUAL MAX VARIABLE { Find_Max($1 , $4);}
        |  VARIABLE EQUAL MIN VARIABLE { Find_Min($1,$4);}
        |  VARIABLE EQUAL SIN FLOAT    { Sine($1,$4);}
        |  VARIABLE EQUAL COS FLOAT    { Cos($1,$4);}
        |  VARIABLE EQUAL TAN FLOAT    { Tan($1,$4);}
        |  VARIABLE EQUAL GCD expression COMMA expression          { GCD_Calculator($1,$4,$6);}
        |  VARIABLE EQUAL LCM expression COMMA expression          { LCM_Calculator($1,$4,$6);}
%%













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