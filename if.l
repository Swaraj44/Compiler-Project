
%{
#include <stdio.h>
#include <stdlib.h>
#include "if.tab.h"
extern int yylval;
%}

%%
[a-zA-Z]    { yylval = *yytext-'a';
              return VAR; }



[0-9]+  { yylval = atoi(yytext); 
          return NUM;
        }


"if"  {
      return IF;
      }

"else" {
      return ELSE;
}

[-+*/=(),{};] {
yylval=yytext[0];
return *yytext;
}

.    { }


%%

main(){
yyin = fopen("in.txt","r");
yyparse();

return 0;
}
