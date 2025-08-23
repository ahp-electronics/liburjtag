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

#ifndef YY_URJ_BSDL_BSDL_BISON_H_INCLUDED
# define YY_URJ_BSDL_BSDL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int urj_bsdl_debug;
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
    CONSTANT = 258,                /* CONSTANT  */
    PIN_MAP = 259,                 /* PIN_MAP  */
    PHYSICAL_PIN_MAP = 260,        /* PHYSICAL_PIN_MAP  */
    PIN_MAP_STRING = 261,          /* PIN_MAP_STRING  */
    TAP_SCAN_IN = 262,             /* TAP_SCAN_IN  */
    TAP_SCAN_OUT = 263,            /* TAP_SCAN_OUT  */
    TAP_SCAN_MODE = 264,           /* TAP_SCAN_MODE  */
    TAP_SCAN_RESET = 265,          /* TAP_SCAN_RESET  */
    TAP_SCAN_CLOCK = 266,          /* TAP_SCAN_CLOCK  */
    INSTRUCTION_LENGTH = 267,      /* INSTRUCTION_LENGTH  */
    INSTRUCTION_OPCODE = 268,      /* INSTRUCTION_OPCODE  */
    INSTRUCTION_CAPTURE = 269,     /* INSTRUCTION_CAPTURE  */
    INSTRUCTION_DISABLE = 270,     /* INSTRUCTION_DISABLE  */
    INSTRUCTION_GUARD = 271,       /* INSTRUCTION_GUARD  */
    INSTRUCTION_PRIVATE = 272,     /* INSTRUCTION_PRIVATE  */
    REGISTER_ACCESS = 273,         /* REGISTER_ACCESS  */
    BOUNDARY_LENGTH = 274,         /* BOUNDARY_LENGTH  */
    BOUNDARY_REGISTER = 275,       /* BOUNDARY_REGISTER  */
    IDCODE_REGISTER = 276,         /* IDCODE_REGISTER  */
    USERCODE_REGISTER = 277,       /* USERCODE_REGISTER  */
    BOUNDARY = 278,                /* BOUNDARY  */
    DEVICE_ID = 279,               /* DEVICE_ID  */
    INPUT = 280,                   /* INPUT  */
    OUTPUT2 = 281,                 /* OUTPUT2  */
    OUTPUT3 = 282,                 /* OUTPUT3  */
    CONTROL = 283,                 /* CONTROL  */
    CONTROLR = 284,                /* CONTROLR  */
    INTERNAL = 285,                /* INTERNAL  */
    CLOCK = 286,                   /* CLOCK  */
    BIDIR = 287,                   /* BIDIR  */
    BIDIR_IN = 288,                /* BIDIR_IN  */
    BIDIR_OUT = 289,               /* BIDIR_OUT  */
    Z = 290,                       /* Z  */
    WEAK0 = 291,                   /* WEAK0  */
    WEAK1 = 292,                   /* WEAK1  */
    IDENTIFIER = 293,              /* IDENTIFIER  */
    PULL0 = 294,                   /* PULL0  */
    PULL1 = 295,                   /* PULL1  */
    KEEPER = 296,                  /* KEEPER  */
    DECIMAL_NUMBER = 297,          /* DECIMAL_NUMBER  */
    BINARY_PATTERN = 298,          /* BINARY_PATTERN  */
    BIN_X_PATTERN = 299,           /* BIN_X_PATTERN  */
    COMMA = 300,                   /* COMMA  */
    LPAREN = 301,                  /* LPAREN  */
    RPAREN = 302,                  /* RPAREN  */
    LBRACKET = 303,                /* LBRACKET  */
    RBRACKET = 304,                /* RBRACKET  */
    COLON = 305,                   /* COLON  */
    ASTERISK = 306,                /* ASTERISK  */
    COMPLIANCE_PATTERNS = 307,     /* COMPLIANCE_PATTERNS  */
    OBSERVE_ONLY = 308,            /* OBSERVE_ONLY  */
    BYPASS = 309,                  /* BYPASS  */
    CLAMP = 310,                   /* CLAMP  */
    EXTEST = 311,                  /* EXTEST  */
    HIGHZ = 312,                   /* HIGHZ  */
    IDCODE = 313,                  /* IDCODE  */
    INTEST = 314,                  /* INTEST  */
    PRELOAD = 315,                 /* PRELOAD  */
    RUNBIST = 316,                 /* RUNBIST  */
    SAMPLE = 317,                  /* SAMPLE  */
    USERCODE = 318,                /* USERCODE  */
    COMPONENT_CONFORMANCE = 319,   /* COMPONENT_CONFORMANCE  */
    STD_1149_1_1990 = 320,         /* STD_1149_1_1990  */
    STD_1149_1_1993 = 321,         /* STD_1149_1_1993  */
    STD_1149_1_2001 = 322,         /* STD_1149_1_2001  */
    ISC_CONFORMANCE = 323,         /* ISC_CONFORMANCE  */
    STD_1532_2001 = 324,           /* STD_1532_2001  */
    STD_1532_2002 = 325,           /* STD_1532_2002  */
    ISC_PIN_BEHAVIOR = 326,        /* ISC_PIN_BEHAVIOR  */
    ISC_FIXED_SYSTEM_PINS = 327,   /* ISC_FIXED_SYSTEM_PINS  */
    ISC_STATUS = 328,              /* ISC_STATUS  */
    IMPLEMENTED = 329,             /* IMPLEMENTED  */
    ISC_BLANK_USERCODE = 330,      /* ISC_BLANK_USERCODE  */
    ISC_SECURITY = 331,            /* ISC_SECURITY  */
    ISC_DISABLE_READ = 332,        /* ISC_DISABLE_READ  */
    ISC_DISABLE_PROGRAM = 333,     /* ISC_DISABLE_PROGRAM  */
    ISC_DISABLE_ERASE = 334,       /* ISC_DISABLE_ERASE  */
    ISC_DISABLE_KEY = 335,         /* ISC_DISABLE_KEY  */
    ISC_FLOW = 336,                /* ISC_FLOW  */
    UNPROCESSED = 337,             /* UNPROCESSED  */
    EXIT_ON_ERROR = 338,           /* EXIT_ON_ERROR  */
    ARRAY = 339,                   /* ARRAY  */
    SECURITY = 340,                /* SECURITY  */
    INITIALIZE = 341,              /* INITIALIZE  */
    REPEAT = 342,                  /* REPEAT  */
    TERMINATE = 343,               /* TERMINATE  */
    LOOP = 344,                    /* LOOP  */
    MIN = 345,                     /* MIN  */
    MAX = 346,                     /* MAX  */
    DOLLAR = 347,                  /* DOLLAR  */
    EQUAL = 348,                   /* EQUAL  */
    HEX_STRING = 349,              /* HEX_STRING  */
    WAIT = 350,                    /* WAIT  */
    REAL_NUMBER = 351,             /* REAL_NUMBER  */
    PLUS = 352,                    /* PLUS  */
    MINUS = 353,                   /* MINUS  */
    SH_RIGHT = 354,                /* SH_RIGHT  */
    SH_LEFT = 355,                 /* SH_LEFT  */
    TILDE = 356,                   /* TILDE  */
    QUESTION_MARK = 357,           /* QUESTION_MARK  */
    EXCLAMATION_MARK = 358,        /* EXCLAMATION_MARK  */
    QUESTION_EXCLAMATION = 359,    /* QUESTION_EXCLAMATION  */
    CRC = 360,                     /* CRC  */
    OST = 361,                     /* OST  */
    ISC_PROCEDURE = 362,           /* ISC_PROCEDURE  */
    ISC_ACTION = 363,              /* ISC_ACTION  */
    PROPRIETARY = 364,             /* PROPRIETARY  */
    OPTIONAL = 365,                /* OPTIONAL  */
    RECOMMENDED = 366,             /* RECOMMENDED  */
    ISC_ILLEGAL_EXIT = 367,        /* ISC_ILLEGAL_EXIT  */
    ILLEGAL = 368                  /* ILLEGAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CONSTANT 258
#define PIN_MAP 259
#define PHYSICAL_PIN_MAP 260
#define PIN_MAP_STRING 261
#define TAP_SCAN_IN 262
#define TAP_SCAN_OUT 263
#define TAP_SCAN_MODE 264
#define TAP_SCAN_RESET 265
#define TAP_SCAN_CLOCK 266
#define INSTRUCTION_LENGTH 267
#define INSTRUCTION_OPCODE 268
#define INSTRUCTION_CAPTURE 269
#define INSTRUCTION_DISABLE 270
#define INSTRUCTION_GUARD 271
#define INSTRUCTION_PRIVATE 272
#define REGISTER_ACCESS 273
#define BOUNDARY_LENGTH 274
#define BOUNDARY_REGISTER 275
#define IDCODE_REGISTER 276
#define USERCODE_REGISTER 277
#define BOUNDARY 278
#define DEVICE_ID 279
#define INPUT 280
#define OUTPUT2 281
#define OUTPUT3 282
#define CONTROL 283
#define CONTROLR 284
#define INTERNAL 285
#define CLOCK 286
#define BIDIR 287
#define BIDIR_IN 288
#define BIDIR_OUT 289
#define Z 290
#define WEAK0 291
#define WEAK1 292
#define IDENTIFIER 293
#define PULL0 294
#define PULL1 295
#define KEEPER 296
#define DECIMAL_NUMBER 297
#define BINARY_PATTERN 298
#define BIN_X_PATTERN 299
#define COMMA 300
#define LPAREN 301
#define RPAREN 302
#define LBRACKET 303
#define RBRACKET 304
#define COLON 305
#define ASTERISK 306
#define COMPLIANCE_PATTERNS 307
#define OBSERVE_ONLY 308
#define BYPASS 309
#define CLAMP 310
#define EXTEST 311
#define HIGHZ 312
#define IDCODE 313
#define INTEST 314
#define PRELOAD 315
#define RUNBIST 316
#define SAMPLE 317
#define USERCODE 318
#define COMPONENT_CONFORMANCE 319
#define STD_1149_1_1990 320
#define STD_1149_1_1993 321
#define STD_1149_1_2001 322
#define ISC_CONFORMANCE 323
#define STD_1532_2001 324
#define STD_1532_2002 325
#define ISC_PIN_BEHAVIOR 326
#define ISC_FIXED_SYSTEM_PINS 327
#define ISC_STATUS 328
#define IMPLEMENTED 329
#define ISC_BLANK_USERCODE 330
#define ISC_SECURITY 331
#define ISC_DISABLE_READ 332
#define ISC_DISABLE_PROGRAM 333
#define ISC_DISABLE_ERASE 334
#define ISC_DISABLE_KEY 335
#define ISC_FLOW 336
#define UNPROCESSED 337
#define EXIT_ON_ERROR 338
#define ARRAY 339
#define SECURITY 340
#define INITIALIZE 341
#define REPEAT 342
#define TERMINATE 343
#define LOOP 344
#define MIN 345
#define MAX 346
#define DOLLAR 347
#define EQUAL 348
#define HEX_STRING 349
#define WAIT 350
#define REAL_NUMBER 351
#define PLUS 352
#define MINUS 353
#define SH_RIGHT 354
#define SH_LEFT 355
#define TILDE 356
#define QUESTION_MARK 357
#define EXCLAMATION_MARK 358
#define QUESTION_EXCLAMATION 359
#define CRC 360
#define OST 361
#define ISC_PROCEDURE 362
#define ISC_ACTION 363
#define PROPRIETARY 364
#define OPTIONAL 365
#define RECOMMENDED 366
#define ISC_ILLEGAL_EXIT 367
#define ILLEGAL 368

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 188 "bsdl_bison.y"

  int   integer;
  char *str;

#line 298 "bsdl_bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int urj_bsdl_parse (urj_bsdl_parser_priv_t *priv_data);


#endif /* !YY_URJ_BSDL_BSDL_BISON_H_INCLUDED  */
