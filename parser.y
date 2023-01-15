%{
#include <stdio.h>
#include <stdlib.h>
#define YYDEBUG 0
int yydebug = 0;
%}

%token IF 
%token ELSE 
%token WHILE 
%token ID 
%token NUM 
%token INT 
%token BOOL 
%token STRING 
%token BIN_OP 
%token TWO_BIN_OP 
%token AND 
%token OR 
%token READ 
%token PRINT 
%token TRUE 
%token FALSE 
%token CONST_STRING  

%left BIN_OP TWO_BIN_OP AND OR

%token OPEN_ROUND_BRACKET
%token CLOSED_ROUND_BRACKET
%token OPEN_CURLY_BRACKET
%token CLOSED_CURLY_BRACKET

%token SEMI_COLON
%token COMMA
%token ASSIGN

%start scope

%%
scope : OPEN_CURLY_BRACKET code_block CLOSED_CURLY_BRACKET;
code_block : stmt_wrapper | stmt_wrapper code_block;
stmt_wrapper: simple_stmt_wrapper | comp_stmt;
comp_stmt: if_stmt | if_else_stmt | while_stmt;

simple_stmt_wrapper : simple_stmt SEMI_COLON;
simple_stmt : decl_stmt | assign_stmt | in_stmt | out_stmt;
decl_stmt : type ID_list;
type : INT | BOOL | STRING;
ID_list : ID | ID COMMA ID_list;
assign_stmt : int_assign_stmt | bool_assign_stmt | string_assign_stmt;
int_assign_stmt : ID ASSIGN int_expression;
int_expression : int_term 
    | OPEN_ROUND_BRACKET int_expression CLOSED_ROUND_BRACKET 
    | int_expression BIN_OP int_expression;
int_term: ID | NUM;
bool_assign_stmt : ID ASSIGN bool_expression;
bool_expression : bool_term 
    | OPEN_ROUND_BRACKET bool_expression CLOSED_ROUND_BRACKET 
    | bool_expression bool_op bool_expression;
bool_term: ID | TRUE | FALSE | relation;
relation : int_expression 
    | OPEN_ROUND_BRACKET relation CLOSED_ROUND_BRACKET 
    | relation TWO_BIN_OP relation;
bool_op: AND | OR;
string_assign_stmt: ID ASSIGN string_val;
string_val: ID | CONST_STRING;
in_stmt : READ OPEN_ROUND_BRACKET ID CLOSED_ROUND_BRACKET;
out_stmt : PRINT OPEN_ROUND_BRACKET ID CLOSED_ROUND_BRACKET;

if_stmt : IF OPEN_ROUND_BRACKET bool_expression CLOSED_ROUND_BRACKET scope;
if_else_stmt : if_stmt ELSE scope;
while_stmt : WHILE OPEN_ROUND_BRACKET bool_expression CLOSED_ROUND_BRACKET scope;

%%
yyerror(char *s)
{
    printf("%s\n",s);
}

extern FILE *yyin;

main(int argc, char **argv)
{
    if(!yyparse()) fprintf(stderr, "\tO.K.\n"); 
}