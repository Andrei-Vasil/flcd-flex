%{
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
int line_count = 0;
%}

%option noyywrap
%x CMNT

DELIM ([ \t:])
WHITESPACES ({DELIM}+)
POSI_DECI ([1-9])
DECI (0|{POSI_DECI})
DECIMAL (0|{POSI_DECI}{DECI}*|-{POSI_DECI}{DECI}*)
LETTER ([a-zA-Z_])
IDENTIFIER ({LETTER}({LETTER}|{DECI})*)
ERRORS (-0|0{DECIMAL}|{DECIMAL}[^0-9\n;]*)
%%

"//" {BEGIN CMNT;} 
<CMNT>. {;}
<CMNT>\n {++line_count; BEGIN INITIAL;}
\n {
++line_count;
printf("newline \n");
}

"\"".*"\"" {
    printf("conststring \n");
    return CONST_STRING;
}

{WHITESPACES} { ; }
read { printf("read \n"); return READ; }
print { printf("conststring \n"); return PRINT; }
if { return IF; }
else { return ELSE; }
while { return WHILE; }
int { return INT; }
bool { return BOOL; }
string { return STRING; }

"<=" { 
    return TWO_BIN_OP;
}

">=" { 
    return TWO_BIN_OP;
}

"==" { 
    return TWO_BIN_OP;
}

"!=" { 
    return TWO_BIN_OP;
}

\( { return OPEN_ROUND_BRACKET; }
\) { return CLOSED_ROUND_BRACKET; }
\{ { return OPEN_CURLY_BRACKET; }
\} { return CLOSED_CURLY_BRACKET; }
; { return SEMI_COLON; }
, { return COMMA; }
= { return ASSIGN; }
"<" { return TWO_BIN_OP; }
\> { return TWO_BIN_OP; }

"%" {
    return BIN_OP;
    }

"+" {
    return BIN_OP;
    }

"-" {
    return BIN_OP;
    }

"*" {
    return BIN_OP;
    }

"/" {
    return BIN_OP;
    }

"&&" { return AND; }

"||" { return OR; }

true { return TRUE; }

false { return FALSE; }

{IDENTIFIER} {
    return ID;
}

{DECIMAL} {
    return NUM;
}

{ERRORS} {
    printf("lexical error: %s\n", yytext);
    return -1;
}

%%