#ifndef _Y_TAB_H
#define _Y_TAB_H
#define IF 300
#define ELSE 301
#define WHILE 302
#define ID 303
#define NUM 304
#define INT 305
#define BOOL 306
#define STRING 307
#define BIN_OP 308
#define TWO_BIN_OP 309
#define AND 310
#define OR 311
#define READ 312
#define PRINT 313
#define TRUE 314
#define FALSE 315
#define CONST_STRING 316

int yylex(void);
typedef union {
char *string;
int integer;
} yylType;

#endif