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

#ifndef YY_URJ_VHDL_VHDL_BISON_H_INCLUDED
# define YY_URJ_VHDL_VHDL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int urj_vhdl_debug;
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
    ENTITY = 258,                  /* ENTITY  */
    PORT = 259,                    /* PORT  */
    GENERIC = 260,                 /* GENERIC  */
    USE = 261,                     /* USE  */
    ATTRIBUTE = 262,               /* ATTRIBUTE  */
    IS = 263,                      /* IS  */
    OF = 264,                      /* OF  */
    CONSTANT = 265,                /* CONSTANT  */
    STRING = 266,                  /* STRING  */
    END = 267,                     /* END  */
    ALL = 268,                     /* ALL  */
    PHYSICAL_PIN_MAP = 269,        /* PHYSICAL_PIN_MAP  */
    PIN_MAP_STRING = 270,          /* PIN_MAP_STRING  */
    TRUE = 271,                    /* TRUE  */
    FALSE = 272,                   /* FALSE  */
    SIGNAL = 273,                  /* SIGNAL  */
    LOW = 274,                     /* LOW  */
    BOTH = 275,                    /* BOTH  */
    IN = 276,                      /* IN  */
    OUT = 277,                     /* OUT  */
    INOUT = 278,                   /* INOUT  */
    BUFFER = 279,                  /* BUFFER  */
    LINKAGE = 280,                 /* LINKAGE  */
    BIT = 281,                     /* BIT  */
    BIT_VECTOR = 282,              /* BIT_VECTOR  */
    TO = 283,                      /* TO  */
    DOWNTO = 284,                  /* DOWNTO  */
    PACKAGE = 285,                 /* PACKAGE  */
    BODY = 286,                    /* BODY  */
    TYPE = 287,                    /* TYPE  */
    SUBTYPE = 288,                 /* SUBTYPE  */
    RECORD = 289,                  /* RECORD  */
    ARRAY = 290,                   /* ARRAY  */
    POSITIVE = 291,                /* POSITIVE  */
    RANGE = 292,                   /* RANGE  */
    CELL_INFO = 293,               /* CELL_INFO  */
    INPUT = 294,                   /* INPUT  */
    OUTPUT2 = 295,                 /* OUTPUT2  */
    OUTPUT3 = 296,                 /* OUTPUT3  */
    CONTROL = 297,                 /* CONTROL  */
    CONTROLR = 298,                /* CONTROLR  */
    INTERNAL = 299,                /* INTERNAL  */
    CLOCK = 300,                   /* CLOCK  */
    BIDIR = 301,                   /* BIDIR  */
    BIDIR_IN = 302,                /* BIDIR_IN  */
    BIDIR_OUT = 303,               /* BIDIR_OUT  */
    EXTEST = 304,                  /* EXTEST  */
    SAMPLE = 305,                  /* SAMPLE  */
    INTEST = 306,                  /* INTEST  */
    RUNBIST = 307,                 /* RUNBIST  */
    PI = 308,                      /* PI  */
    PO = 309,                      /* PO  */
    UPD = 310,                     /* UPD  */
    CAP = 311,                     /* CAP  */
    X = 312,                       /* X  */
    BIN_X_PATTERN = 313,           /* BIN_X_PATTERN  */
    ZERO = 314,                    /* ZERO  */
    ONE = 315,                     /* ONE  */
    Z = 316,                       /* Z  */
    IDENTIFIER = 317,              /* IDENTIFIER  */
    SINGLE_QUOTE = 318,            /* SINGLE_QUOTE  */
    QUOTED_STRING = 319,           /* QUOTED_STRING  */
    DECIMAL_NUMBER = 320,          /* DECIMAL_NUMBER  */
    REAL_NUMBER = 321,             /* REAL_NUMBER  */
    CONCATENATE = 322,             /* CONCATENATE  */
    SEMICOLON = 323,               /* SEMICOLON  */
    COMMA = 324,                   /* COMMA  */
    LPAREN = 325,                  /* LPAREN  */
    RPAREN = 326,                  /* RPAREN  */
    COLON = 327,                   /* COLON  */
    BOX = 328,                     /* BOX  */
    COLON_EQUAL = 329,             /* COLON_EQUAL  */
    PERIOD = 330,                  /* PERIOD  */
    ILLEGAL = 331,                 /* ILLEGAL  */
    BSDL_EXTENSION = 332,          /* BSDL_EXTENSION  */
    OBSERVE_ONLY = 333,            /* OBSERVE_ONLY  */
    STD_1532_2001 = 334,           /* STD_1532_2001  */
    STD_1532_2002 = 335            /* STD_1532_2002  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ENTITY 258
#define PORT 259
#define GENERIC 260
#define USE 261
#define ATTRIBUTE 262
#define IS 263
#define OF 264
#define CONSTANT 265
#define STRING 266
#define END 267
#define ALL 268
#define PHYSICAL_PIN_MAP 269
#define PIN_MAP_STRING 270
#define TRUE 271
#define FALSE 272
#define SIGNAL 273
#define LOW 274
#define BOTH 275
#define IN 276
#define OUT 277
#define INOUT 278
#define BUFFER 279
#define LINKAGE 280
#define BIT 281
#define BIT_VECTOR 282
#define TO 283
#define DOWNTO 284
#define PACKAGE 285
#define BODY 286
#define TYPE 287
#define SUBTYPE 288
#define RECORD 289
#define ARRAY 290
#define POSITIVE 291
#define RANGE 292
#define CELL_INFO 293
#define INPUT 294
#define OUTPUT2 295
#define OUTPUT3 296
#define CONTROL 297
#define CONTROLR 298
#define INTERNAL 299
#define CLOCK 300
#define BIDIR 301
#define BIDIR_IN 302
#define BIDIR_OUT 303
#define EXTEST 304
#define SAMPLE 305
#define INTEST 306
#define RUNBIST 307
#define PI 308
#define PO 309
#define UPD 310
#define CAP 311
#define X 312
#define BIN_X_PATTERN 313
#define ZERO 314
#define ONE 315
#define Z 316
#define IDENTIFIER 317
#define SINGLE_QUOTE 318
#define QUOTED_STRING 319
#define DECIMAL_NUMBER 320
#define REAL_NUMBER 321
#define CONCATENATE 322
#define SEMICOLON 323
#define COMMA 324
#define LPAREN 325
#define RPAREN 326
#define COLON 327
#define BOX 328
#define COLON_EQUAL 329
#define PERIOD 330
#define ILLEGAL 331
#define BSDL_EXTENSION 332
#define OBSERVE_ONLY 333
#define STD_1532_2001 334
#define STD_1532_2002 335

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 191 "vhdl_bison.y"

  int   integer;
  char *str;

#line 232 "vhdl_bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int urj_vhdl_parse (urj_vhdl_parser_priv_t *priv_data);


#endif /* !YY_URJ_VHDL_VHDL_BISON_H_INCLUDED  */
