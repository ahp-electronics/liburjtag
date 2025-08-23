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

#ifndef YY_URJ_SVF_SVF_BISON_H_INCLUDED
# define YY_URJ_SVF_SVF_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int urj_svf_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    SVF_EOF = 0,                   /* SVF_EOF  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    HEXA_NUM_FRAGMENT = 260,       /* HEXA_NUM_FRAGMENT  */
    VECTOR_STRING = 261,           /* VECTOR_STRING  */
    EMPTY = 262,                   /* EMPTY  */
    ENDDR = 263,                   /* ENDDR  */
    ENDIR = 264,                   /* ENDIR  */
    FREQUENCY = 265,               /* FREQUENCY  */
    HZ = 266,                      /* HZ  */
    STATE = 267,                   /* STATE  */
    RESET = 268,                   /* RESET  */
    IDLE = 269,                    /* IDLE  */
    TDI = 270,                     /* TDI  */
    TDO = 271,                     /* TDO  */
    MASK = 272,                    /* MASK  */
    SMASK = 273,                   /* SMASK  */
    TRST = 274,                    /* TRST  */
    ON = 275,                      /* ON  */
    OFF = 276,                     /* OFF  */
    Z = 277,                       /* Z  */
    ABSENT = 278,                  /* ABSENT  */
    HDR = 279,                     /* HDR  */
    HIR = 280,                     /* HIR  */
    SDR = 281,                     /* SDR  */
    SIR = 282,                     /* SIR  */
    TDR = 283,                     /* TDR  */
    TIR = 284,                     /* TIR  */
    PIO = 285,                     /* PIO  */
    PIOMAP = 286,                  /* PIOMAP  */
    IN = 287,                      /* IN  */
    OUT = 288,                     /* OUT  */
    INOUT = 289,                   /* INOUT  */
    H = 290,                       /* H  */
    L = 291,                       /* L  */
    U = 292,                       /* U  */
    D = 293,                       /* D  */
    X = 294,                       /* X  */
    RUNTEST = 295,                 /* RUNTEST  */
    MAXIMUM = 296,                 /* MAXIMUM  */
    SEC = 297,                     /* SEC  */
    TCK = 298,                     /* TCK  */
    SCK = 299,                     /* SCK  */
    ENDSTATE = 300,                /* ENDSTATE  */
    IRPAUSE = 301,                 /* IRPAUSE  */
    IRSHIFT = 302,                 /* IRSHIFT  */
    IRUPDATE = 303,                /* IRUPDATE  */
    IRSELECT = 304,                /* IRSELECT  */
    IREXIT1 = 305,                 /* IREXIT1  */
    IREXIT2 = 306,                 /* IREXIT2  */
    IRCAPTURE = 307,               /* IRCAPTURE  */
    DRPAUSE = 308,                 /* DRPAUSE  */
    DRSHIFT = 309,                 /* DRSHIFT  */
    DRUPDATE = 310,                /* DRUPDATE  */
    DRSELECT = 311,                /* DRSELECT  */
    DREXIT1 = 312,                 /* DREXIT1  */
    DREXIT2 = 313,                 /* DREXIT2  */
    DRCAPTURE = 314                /* DRCAPTURE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define SVF_EOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define NUMBER 259
#define HEXA_NUM_FRAGMENT 260
#define VECTOR_STRING 261
#define EMPTY 262
#define ENDDR 263
#define ENDIR 264
#define FREQUENCY 265
#define HZ 266
#define STATE 267
#define RESET 268
#define IDLE 269
#define TDI 270
#define TDO 271
#define MASK 272
#define SMASK 273
#define TRST 274
#define ON 275
#define OFF 276
#define Z 277
#define ABSENT 278
#define HDR 279
#define HIR 280
#define SDR 281
#define SIR 282
#define TDR 283
#define TIR 284
#define PIO 285
#define PIOMAP 286
#define IN 287
#define OUT 288
#define INOUT 289
#define H 290
#define L 291
#define U 292
#define D 293
#define X 294
#define RUNTEST 295
#define MAXIMUM 296
#define SEC 297
#define TCK 298
#define SCK 299
#define ENDSTATE 300
#define IRPAUSE 301
#define IRSHIFT 302
#define IRUPDATE 303
#define IRSELECT 304
#define IREXIT1 305
#define IREXIT2 306
#define IRCAPTURE 307
#define DRPAUSE 308
#define DRSHIFT 309
#define DRUPDATE 310
#define DRSELECT 311
#define DREXIT1 312
#define DREXIT2 313
#define DRCAPTURE 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 60 "svf_bison.y"

  int    token;
  double dvalue;
  char  *cvalue;
  int    ivalue;
  struct hexa_frag hexa_frag;
  struct tdval tdval;
  struct tcval *tcval;

#line 195 "svf_bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int urj_svf_parse (urj_svf_parser_priv_t *priv_data, urj_chain_t *chain);


#endif /* !YY_URJ_SVF_SVF_BISON_H_INCLUDED  */
