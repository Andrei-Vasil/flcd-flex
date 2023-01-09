#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

extern yylType yylval;
int main(){
    int s;
    while((s=yylex()))
    switch(s) {
        case '\n': 
            printf("\n");
            break;
        case '(' : 
            printf("<(> ");
            break;
        case ')' : 
            printf("<)> ");
            break;
        case '{' : 
            printf("<{> ");
            break;
        case '}' : 
            printf("<}> ");
            break;
        case ';' : 
            printf("<;> ");
            break;
        case ',' : 
            printf("<,> ");
            break;
        case '=' : 
            printf("<=> ");
            break;
        case '<' : 
            printf("<<> ");
            break;
        case BIN_OP :
            printf("<BIN_OP, %c> ", (char) yylval.integer);
            break;
        case TWO_BIN_OP:
            printf("<TWO_BIN_OP, %s> ", yylval.string);
            free (yylval.string);
            break;
        case '>' : 
            printf("<>> ");
            break; 
        case IF : 
            printf("<if> ");
            break;
        case ELSE : 
            printf("<else> ");
            break;
        case WHILE : 
            printf("<while> ");
            break;
        case INT : 
            printf("<int> ");
            break;
        case ID : 
            printf("<ID, %s> ", yylval.string);
            free (yylval.string);
            break;
        case NUM : 
            printf("<NUM, %d> ",yylval.integer);
            break;
        case STRING : 
            printf("<string> ");
            break;
        case CONST_STRING : 
            printf("<CONST_STRING, %s> ", yylval.string);
            break;
        case BOOL : 
            printf("<bool> ");
            break;
        case TRUE : 
            printf("<true> ");
            break;
        case FALSE : 
            printf("<false> ");
            break;
        case READ : 
            printf("<read> ");
            break;
        case PRINT : 
            printf("<print> ");
            break;
        case AND : 
            printf("<and> ");
            break;
        case OR : 
            printf("<or> ");
            break;
        case ERROR:
            printf("\nLEXICAL ERROR DETECTED: %s\n", yylval.string);
            return 1;
        default: ;
    }
    return 0;
}