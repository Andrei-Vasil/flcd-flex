#ifndef _Y_TAB_H
#define _Y_TAB_H
#define IF 300
#define ELSE 301
#define WHILE 302
#define ID 303
#define NUM 304
#define INT 305
#define BOOL 306
#define CHAR 307
#define STRING 308
#define BIN_OP 309
#define TWO_BIN_OP 310
#define AND 311
#define OR 312
#define READ 313
#define PRINT 314
#define TRUE 315
#define FALSE 316

int yylex(void);
typedef union {
char *string;
int integer;
} yylType;

#endif