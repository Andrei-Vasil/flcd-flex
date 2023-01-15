/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    WHILE = 260,                   /* WHILE  */
    ID = 261,                      /* ID  */
    NUM = 262,                     /* NUM  */
    INT = 263,                     /* INT  */
    BOOL = 264,                    /* BOOL  */
    STRING = 265,                  /* STRING  */
    BIN_OP = 266,                  /* BIN_OP  */
    TWO_BIN_OP = 267,              /* TWO_BIN_OP  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    READ = 270,                    /* READ  */
    PRINT = 271,                   /* PRINT  */
    TRUE = 272,                    /* TRUE  */
    FALSE = 273,                   /* FALSE  */
    CONST_STRING = 274,            /* CONST_STRING  */
    OPEN_ROUND_BRACKET = 275,      /* OPEN_ROUND_BRACKET  */
    CLOSED_ROUND_BRACKET = 276,    /* CLOSED_ROUND_BRACKET  */
    OPEN_CURLY_BRACKET = 277,      /* OPEN_CURLY_BRACKET  */
    CLOSED_CURLY_BRACKET = 278,    /* CLOSED_CURLY_BRACKET  */
    SEMI_COLON = 279,              /* SEMI_COLON  */
    COMMA = 280,                   /* COMMA  */
    ASSIGN = 281                   /* ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define WHILE 260
#define ID 261
#define NUM 262
#define INT 263
#define BOOL 264
#define STRING 265
#define BIN_OP 266
#define TWO_BIN_OP 267
#define AND 268
#define OR 269
#define READ 270
#define PRINT 271
#define TRUE 272
#define FALSE 273
#define CONST_STRING 274
#define OPEN_ROUND_BRACKET 275
#define CLOSED_ROUND_BRACKET 276
#define OPEN_CURLY_BRACKET 277
#define CLOSED_CURLY_BRACKET 278
#define SEMI_COLON 279
#define COMMA 280
#define ASSIGN 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
