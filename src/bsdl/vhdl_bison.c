/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         urj_vhdl_parse
#define yylex           urj_vhdl_lex
#define yyerror         urj_vhdl_error
#define yydebug         urj_vhdl_debug
#define yynerrs         urj_vhdl_nerrs

/* First part of user prologue.  */
#line 127 "vhdl_bison.y"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include <urjtag/part.h>

#include "bsdl_sysdep.h"

#include "bsdl_types.h"
#include "bsdl_msg.h"

/* interface to flex */
#include "vhdl_bison.h"
#include "vhdl_parser.h"

#ifdef DMALLOC
#include "dmalloc.h"
#endif

#define HACK priv_data->scanner
int yylex (YYSTYPE *, void *);

#if 1
#define ERROR_LIMIT 15
#define BUMP_ERROR \
    do { \
        if (urj_vhdl_flex_postinc_compile_errors (priv_data->scanner) > ERROR_LIMIT) \
        { \
            Give_Up_And_Quit (priv_data); \
            YYABORT; \
        } \
    } while (0)
#else
#define BUMP_ERROR \
    do { \
        Give_Up_And_Quit (priv_data); \
        YYABORT; \
    } while (0)
#endif

static void Init_Text (urj_vhdl_parser_priv_t *);
static void Store_Text (urj_vhdl_parser_priv_t *, char *);
static void Print_Error (urj_vhdl_parser_priv_t *, const char *);
static void Give_Up_And_Quit (urj_vhdl_parser_priv_t *);

/* VHDL semantic action interface */
static void urj_vhdl_set_entity (urj_vhdl_parser_priv_t *, char *);
static void urj_vhdl_port_add_name (urj_vhdl_parser_priv_t *, char *);
static void urj_vhdl_port_add_bit (urj_vhdl_parser_priv_t *);
static void urj_vhdl_port_add_range (urj_vhdl_parser_priv_t *, int, int);
static void urj_vhdl_port_apply_port (urj_vhdl_parser_priv_t *);

//static void set_attr_bool (urj_vhdl_parser_priv_t *, char *, int);
static void set_attr_decimal (urj_vhdl_parser_priv_t *, char *, int);
static void set_attr_string (urj_vhdl_parser_priv_t *, char *, char *);
//static void set_attr_real (urj_vhdl_parser_priv_t *, char *, char *);
//static void set_attr_const (urj_vhdl_parser_priv_t *, char *, char *);

void yyerror (urj_vhdl_parser_priv_t *, const char *);

#line 139 "vhdl_bison.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 357 "vhdl_bison.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int urj_vhdl_parse (urj_vhdl_parser_priv_t *priv_data);


#endif /* !YY_URJ_VHDL_VHDL_BISON_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENTITY = 3,                     /* ENTITY  */
  YYSYMBOL_PORT = 4,                       /* PORT  */
  YYSYMBOL_GENERIC = 5,                    /* GENERIC  */
  YYSYMBOL_USE = 6,                        /* USE  */
  YYSYMBOL_ATTRIBUTE = 7,                  /* ATTRIBUTE  */
  YYSYMBOL_IS = 8,                         /* IS  */
  YYSYMBOL_OF = 9,                         /* OF  */
  YYSYMBOL_CONSTANT = 10,                  /* CONSTANT  */
  YYSYMBOL_STRING = 11,                    /* STRING  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_ALL = 13,                       /* ALL  */
  YYSYMBOL_PHYSICAL_PIN_MAP = 14,          /* PHYSICAL_PIN_MAP  */
  YYSYMBOL_PIN_MAP_STRING = 15,            /* PIN_MAP_STRING  */
  YYSYMBOL_TRUE = 16,                      /* TRUE  */
  YYSYMBOL_FALSE = 17,                     /* FALSE  */
  YYSYMBOL_SIGNAL = 18,                    /* SIGNAL  */
  YYSYMBOL_LOW = 19,                       /* LOW  */
  YYSYMBOL_BOTH = 20,                      /* BOTH  */
  YYSYMBOL_IN = 21,                        /* IN  */
  YYSYMBOL_OUT = 22,                       /* OUT  */
  YYSYMBOL_INOUT = 23,                     /* INOUT  */
  YYSYMBOL_BUFFER = 24,                    /* BUFFER  */
  YYSYMBOL_LINKAGE = 25,                   /* LINKAGE  */
  YYSYMBOL_BIT = 26,                       /* BIT  */
  YYSYMBOL_BIT_VECTOR = 27,                /* BIT_VECTOR  */
  YYSYMBOL_TO = 28,                        /* TO  */
  YYSYMBOL_DOWNTO = 29,                    /* DOWNTO  */
  YYSYMBOL_PACKAGE = 30,                   /* PACKAGE  */
  YYSYMBOL_BODY = 31,                      /* BODY  */
  YYSYMBOL_TYPE = 32,                      /* TYPE  */
  YYSYMBOL_SUBTYPE = 33,                   /* SUBTYPE  */
  YYSYMBOL_RECORD = 34,                    /* RECORD  */
  YYSYMBOL_ARRAY = 35,                     /* ARRAY  */
  YYSYMBOL_POSITIVE = 36,                  /* POSITIVE  */
  YYSYMBOL_RANGE = 37,                     /* RANGE  */
  YYSYMBOL_CELL_INFO = 38,                 /* CELL_INFO  */
  YYSYMBOL_INPUT = 39,                     /* INPUT  */
  YYSYMBOL_OUTPUT2 = 40,                   /* OUTPUT2  */
  YYSYMBOL_OUTPUT3 = 41,                   /* OUTPUT3  */
  YYSYMBOL_CONTROL = 42,                   /* CONTROL  */
  YYSYMBOL_CONTROLR = 43,                  /* CONTROLR  */
  YYSYMBOL_INTERNAL = 44,                  /* INTERNAL  */
  YYSYMBOL_CLOCK = 45,                     /* CLOCK  */
  YYSYMBOL_BIDIR = 46,                     /* BIDIR  */
  YYSYMBOL_BIDIR_IN = 47,                  /* BIDIR_IN  */
  YYSYMBOL_BIDIR_OUT = 48,                 /* BIDIR_OUT  */
  YYSYMBOL_EXTEST = 49,                    /* EXTEST  */
  YYSYMBOL_SAMPLE = 50,                    /* SAMPLE  */
  YYSYMBOL_INTEST = 51,                    /* INTEST  */
  YYSYMBOL_RUNBIST = 52,                   /* RUNBIST  */
  YYSYMBOL_PI = 53,                        /* PI  */
  YYSYMBOL_PO = 54,                        /* PO  */
  YYSYMBOL_UPD = 55,                       /* UPD  */
  YYSYMBOL_CAP = 56,                       /* CAP  */
  YYSYMBOL_X = 57,                         /* X  */
  YYSYMBOL_BIN_X_PATTERN = 58,             /* BIN_X_PATTERN  */
  YYSYMBOL_ZERO = 59,                      /* ZERO  */
  YYSYMBOL_ONE = 60,                       /* ONE  */
  YYSYMBOL_Z = 61,                         /* Z  */
  YYSYMBOL_IDENTIFIER = 62,                /* IDENTIFIER  */
  YYSYMBOL_SINGLE_QUOTE = 63,              /* SINGLE_QUOTE  */
  YYSYMBOL_QUOTED_STRING = 64,             /* QUOTED_STRING  */
  YYSYMBOL_DECIMAL_NUMBER = 65,            /* DECIMAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER = 66,               /* REAL_NUMBER  */
  YYSYMBOL_CONCATENATE = 67,               /* CONCATENATE  */
  YYSYMBOL_SEMICOLON = 68,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 69,                     /* COMMA  */
  YYSYMBOL_LPAREN = 70,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 71,                    /* RPAREN  */
  YYSYMBOL_COLON = 72,                     /* COLON  */
  YYSYMBOL_BOX = 73,                       /* BOX  */
  YYSYMBOL_COLON_EQUAL = 74,               /* COLON_EQUAL  */
  YYSYMBOL_PERIOD = 75,                    /* PERIOD  */
  YYSYMBOL_ILLEGAL = 76,                   /* ILLEGAL  */
  YYSYMBOL_BSDL_EXTENSION = 77,            /* BSDL_EXTENSION  */
  YYSYMBOL_OBSERVE_ONLY = 78,              /* OBSERVE_ONLY  */
  YYSYMBOL_STD_1532_2001 = 79,             /* STD_1532_2001  */
  YYSYMBOL_STD_1532_2002 = 80,             /* STD_1532_2002  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_BSDL_Program = 82,              /* BSDL_Program  */
  YYSYMBOL_Begin_BSDL = 83,                /* Begin_BSDL  */
  YYSYMBOL_BSDL_Body = 84,                 /* BSDL_Body  */
  YYSYMBOL_End_BSDL = 85,                  /* End_BSDL  */
  YYSYMBOL_VHDL_Generic = 86,              /* VHDL_Generic  */
  YYSYMBOL_VHDL_Port = 87,                 /* VHDL_Port  */
  YYSYMBOL_Port_Specifier_List = 88,       /* Port_Specifier_List  */
  YYSYMBOL_Port_Specifier = 89,            /* Port_Specifier  */
  YYSYMBOL_Port_List = 90,                 /* Port_List  */
  YYSYMBOL_Function = 91,                  /* Function  */
  YYSYMBOL_Scaler_Or_Vector = 92,          /* Scaler_Or_Vector  */
  YYSYMBOL_Vector_Range = 93,              /* Vector_Range  */
  YYSYMBOL_VHDL_Use_Part = 94,             /* VHDL_Use_Part  */
  YYSYMBOL_Standard_Use = 95,              /* Standard_Use  */
  YYSYMBOL_96_1 = 96,                      /* $@1  */
  YYSYMBOL_97_2 = 97,                      /* $@2  */
  YYSYMBOL_Standard_Package = 98,          /* Standard_Package  */
  YYSYMBOL_Standard_Decls = 99,            /* Standard_Decls  */
  YYSYMBOL_Standard_Decl = 100,            /* Standard_Decl  */
  YYSYMBOL_Attribute_Type = 101,           /* Attribute_Type  */
  YYSYMBOL_Type_Body = 102,                /* Type_Body  */
  YYSYMBOL_ID_Bits = 103,                  /* ID_Bits  */
  YYSYMBOL_ID_List = 104,                  /* ID_List  */
  YYSYMBOL_ID_Bit = 105,                   /* ID_Bit  */
  YYSYMBOL_Record_Body = 106,              /* Record_Body  */
  YYSYMBOL_Record_Element = 107,           /* Record_Element  */
  YYSYMBOL_Defered_Constants = 108,        /* Defered_Constants  */
  YYSYMBOL_Defered_Constant = 109,         /* Defered_Constant  */
  YYSYMBOL_Constant_Body = 110,            /* Constant_Body  */
  YYSYMBOL_VHDL_Use_List = 111,            /* VHDL_Use_List  */
  YYSYMBOL_Package_Body = 112,             /* Package_Body  */
  YYSYMBOL_113_3 = 113,                    /* $@3  */
  YYSYMBOL_Constant_List = 114,            /* Constant_List  */
  YYSYMBOL_Cell_Constant = 115,            /* Cell_Constant  */
  YYSYMBOL_Triples_List = 116,             /* Triples_List  */
  YYSYMBOL_Triple = 117,                   /* Triple  */
  YYSYMBOL_Triple_Function = 118,          /* Triple_Function  */
  YYSYMBOL_Triple_Inst = 119,              /* Triple_Inst  */
  YYSYMBOL_CAP_Data = 120,                 /* CAP_Data  */
  YYSYMBOL_VHDL_Use = 121,                 /* VHDL_Use  */
  YYSYMBOL_122_4 = 122,                    /* $@4  */
  YYSYMBOL_123_5 = 123,                    /* $@5  */
  YYSYMBOL_User_Package = 124,             /* User_Package  */
  YYSYMBOL_VHDL_Elements = 125,            /* VHDL_Elements  */
  YYSYMBOL_VHDL_Element = 126,             /* VHDL_Element  */
  YYSYMBOL_VHDL_Constant = 127,            /* VHDL_Constant  */
  YYSYMBOL_VHDL_Constant_Part = 128,       /* VHDL_Constant_Part  */
  YYSYMBOL_VHDL_Attribute = 129,           /* VHDL_Attribute  */
  YYSYMBOL_VHDL_Attribute_Types = 130,     /* VHDL_Attribute_Types  */
  YYSYMBOL_VHDL_Attr_Boolean = 131,        /* VHDL_Attr_Boolean  */
  YYSYMBOL_Boolean = 132,                  /* Boolean  */
  YYSYMBOL_VHDL_Attr_Decimal = 133,        /* VHDL_Attr_Decimal  */
  YYSYMBOL_VHDL_Attr_Real = 134,           /* VHDL_Attr_Real  */
  YYSYMBOL_Stop = 135,                     /* Stop  */
  YYSYMBOL_VHDL_Attr_String = 136,         /* VHDL_Attr_String  */
  YYSYMBOL_VHDL_Attr_PhysicalPinMap = 137, /* VHDL_Attr_PhysicalPinMap  */
  YYSYMBOL_Quoted_String = 138,            /* Quoted_String  */
  YYSYMBOL_ISC_Use = 139,                  /* ISC_Use  */
  YYSYMBOL_140_6 = 140,                    /* $@6  */
  YYSYMBOL_ISC_Packages = 141,             /* ISC_Packages  */
  YYSYMBOL_ISC_Package = 142,              /* ISC_Package  */
  YYSYMBOL_ISC_Package_Header = 143,       /* ISC_Package_Header  */
  YYSYMBOL_144_7 = 144,                    /* $@7  */
  YYSYMBOL_ISC_Package_Body = 145          /* ISC_Package_Body  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   227,   227,   229,   231,   238,   242,   248,   250,   256,
     259,   260,   266,   267,   269,   272,   274,   277,   277,   277,
     277,   277,   279,   281,   283,   285,   288,   289,   290,   291,
     292,   299,   304,   298,   314,   317,   323,   324,   326,   328,
     330,   333,   334,   335,   341,   343,   344,   345,   346,   352,
     353,   354,   355,   358,   361,   362,   368,   369,   371,   373,
     376,   378,   384,   385,   387,   389,   395,   396,   398,   400,
     402,   408,   409,   412,   411,   414,   420,   421,   423,   426,
     432,   433,   435,   437,   443,   443,   443,   443,   443,   444,
     444,   444,   444,   445,   446,   452,   452,   452,   452,   453,
     459,   459,   459,   459,   459,   459,   459,   460,   467,   472,
     466,   482,   485,   489,   490,   491,   497,   498,   500,   502,
     507,   509,   510,   511,   512,   513,   514,   520,   528,   530,
     533,   539,   547,   547,   549,   555,   558,   564,   571,   570,
     581,   585,   590,   594,   592,   600
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ENTITY", "PORT",
  "GENERIC", "USE", "ATTRIBUTE", "IS", "OF", "CONSTANT", "STRING", "END",
  "ALL", "PHYSICAL_PIN_MAP", "PIN_MAP_STRING", "TRUE", "FALSE", "SIGNAL",
  "LOW", "BOTH", "IN", "OUT", "INOUT", "BUFFER", "LINKAGE", "BIT",
  "BIT_VECTOR", "TO", "DOWNTO", "PACKAGE", "BODY", "TYPE", "SUBTYPE",
  "RECORD", "ARRAY", "POSITIVE", "RANGE", "CELL_INFO", "INPUT", "OUTPUT2",
  "OUTPUT3", "CONTROL", "CONTROLR", "INTERNAL", "CLOCK", "BIDIR",
  "BIDIR_IN", "BIDIR_OUT", "EXTEST", "SAMPLE", "INTEST", "RUNBIST", "PI",
  "PO", "UPD", "CAP", "X", "BIN_X_PATTERN", "ZERO", "ONE", "Z",
  "IDENTIFIER", "SINGLE_QUOTE", "QUOTED_STRING", "DECIMAL_NUMBER",
  "REAL_NUMBER", "CONCATENATE", "SEMICOLON", "COMMA", "LPAREN", "RPAREN",
  "COLON", "BOX", "COLON_EQUAL", "PERIOD", "ILLEGAL", "BSDL_EXTENSION",
  "OBSERVE_ONLY", "STD_1532_2001", "STD_1532_2002", "$accept",
  "BSDL_Program", "Begin_BSDL", "BSDL_Body", "End_BSDL", "VHDL_Generic",
  "VHDL_Port", "Port_Specifier_List", "Port_Specifier", "Port_List",
  "Function", "Scaler_Or_Vector", "Vector_Range", "VHDL_Use_Part",
  "Standard_Use", "$@1", "$@2", "Standard_Package", "Standard_Decls",
  "Standard_Decl", "Attribute_Type", "Type_Body", "ID_Bits", "ID_List",
  "ID_Bit", "Record_Body", "Record_Element", "Defered_Constants",
  "Defered_Constant", "Constant_Body", "VHDL_Use_List", "Package_Body",
  "$@3", "Constant_List", "Cell_Constant", "Triples_List", "Triple",
  "Triple_Function", "Triple_Inst", "CAP_Data", "VHDL_Use", "$@4", "$@5",
  "User_Package", "VHDL_Elements", "VHDL_Element", "VHDL_Constant",
  "VHDL_Constant_Part", "VHDL_Attribute", "VHDL_Attribute_Types",
  "VHDL_Attr_Boolean", "Boolean", "VHDL_Attr_Decimal", "VHDL_Attr_Real",
  "Stop", "VHDL_Attr_String", "VHDL_Attr_PhysicalPinMap", "Quoted_String",
  "ISC_Use", "$@6", "ISC_Packages", "ISC_Package", "ISC_Package_Header",
  "$@7", "ISC_Package_Body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-159)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     142,  -159,   -13,   109,   129,    66,  -159,  -159,    62,    11,
     132,  -159,   138,  -159,    96,  -159,  -159,    97,   101,    98,
      93,   106,  -159,    15,   107,   160,  -159,   158,  -159,  -159,
      69,  -159,    70,  -159,  -159,  -159,    99,  -159,    13,   110,
     131,  -159,  -159,  -159,    31,   165,  -159,  -159,   102,   106,
     105,   113,   104,   108,   164,  -159,   169,  -159,  -159,  -159,
    -159,  -159,  -159,   112,  -159,  -159,  -159,   117,  -159,   116,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,    74,   168,
     114,   123,   171,   115,  -159,    64,  -159,   118,  -159,   119,
    -159,   120,   121,   176,   127,   125,   133,  -159,   166,    94,
     116,   126,  -159,  -159,    90,   128,    16,    75,  -159,   167,
     192,   193,    92,  -159,   139,   140,  -159,  -159,   141,  -159,
     194,   175,  -159,    -5,    17,  -159,    21,  -159,  -159,   199,
     202,    75,   143,   144,    95,  -159,  -159,   147,   146,  -159,
     148,  -159,    30,   153,  -159,   201,  -159,  -159,  -159,   149,
    -159,   208,  -159,   155,   -12,    -7,    89,  -159,    30,   207,
     137,   210,   150,   213,   215,   216,   217,    14,  -159,    89,
    -159,    20,    75,  -159,  -159,   156,   134,     2,   191,     1,
     218,   219,  -159,   159,  -159,    91,  -159,    75,   170,   172,
     173,  -159,  -159,  -159,  -159,  -159,   174,   162,  -159,    19,
     163,     6,   177,   178,   179,   190,   181,   180,  -159,  -159,
     182,  -159,   198,  -159,   183,     4,  -159,   184,  -159,   185,
    -159,   186,    78,    79,  -159,  -159,  -159,  -159,   188,   189,
    -159,    28,   200,   196,   205,  -159,   136,   221,   197,     9,
    -159,   203,  -159,  -159,    28,  -159,   220,  -159,   195,   204,
    -159,   187,   206,   209,  -159,  -159,  -159,  -159,   211,   212,
    -159,   214,   222,  -159,   228,   244,   250,   252,    18,   224,
     225,   226,  -159,   227,   103,  -159,   223,  -159,  -159,   229,
     230,  -159,  -159,   231,  -159,   232,   234,   233,  -159,     3,
    -159,     0,    82,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,   235,     3,   237,     5,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,   238,    29,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,   239,  -159
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     1,     6,     0,     0,
       0,     3,     0,     8,     0,     2,    11,     0,     0,     0,
       0,     0,    30,     0,     0,    27,    26,     0,     7,    15,
       0,    12,     0,    31,   140,   141,     0,   115,     0,     0,
       5,   113,   116,   117,     0,    29,    71,    28,     0,     0,
       0,     0,     0,     0,     0,   126,     0,   120,   121,   122,
     123,   124,   125,     0,   118,   114,   108,     0,    72,     0,
      13,    10,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,   136,     0,    22,     0,    14,     0,
     138,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,   137,     9,     0,     0,     0,     0,   139,     0,
       0,     0,     0,   109,     0,     0,    23,    35,     0,    33,
       0,     0,   142,     0,     0,   119,     0,    24,    25,     0,
       0,     0,     0,     0,     0,   128,   129,     0,     0,   112,
       0,   110,     0,     0,   143,     0,   135,   130,   134,     0,
     127,     0,    43,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
      66,     0,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,    70,     0,    68,     0,    67,     0,     0,     0,
       0,    48,    45,    44,    46,    47,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   131,
       0,    38,     0,    65,     0,     0,    62,     0,    61,     0,
      58,     0,     0,     0,    56,    39,    41,    42,     0,     0,
     144,     0,     0,     0,     0,    63,     0,     0,     0,     0,
      49,     0,    50,    69,     0,    75,     0,   111,     0,     0,
      54,     0,     0,     0,    60,    57,    59,    34,     0,     0,
      64,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    76,     0,    52,    53,     0,
       0,    77,    40,     0,    73,     0,     0,     0,    74,     0,
      83,     0,     0,    80,    94,    84,    85,    86,    88,    89,
      87,    90,    91,    92,    93,     0,     0,     0,     0,    81,
      78,    99,    95,    96,    97,    98,     0,     0,   107,   100,
     101,   102,   103,   104,   105,   106,     0,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,   241,  -159,
    -159,  -159,  -159,  -159,   145,  -159,  -159,  -159,   -53,   -65,
    -159,  -159,  -159,  -159,    23,  -159,    48,   135,  -158,  -159,
    -159,    22,  -159,  -159,   -10,  -159,   -39,  -159,  -159,  -159,
     236,  -159,  -159,  -159,  -159,   242,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,   -62,   245,  -159,
    -107,  -159,  -159,  -159,  -159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     9,    15,    10,    18,    30,    31,    32,
      78,    88,   105,    24,    25,    53,   106,   119,   156,   157,
     196,   202,   222,   223,   224,   215,   216,   169,   170,   184,
      45,   247,   286,   274,   275,   292,   293,   305,   316,   326,
      46,    83,   126,   141,    40,    41,    42,    64,    43,    57,
      58,   138,    59,    60,   175,    61,    62,    85,    26,    98,
      36,   108,   109,   158,   122
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   294,   198,   191,   290,   213,   311,   218,   165,   132,
     218,   186,    13,   192,    55,   182,   234,   117,   186,   272,
     213,   152,   139,    14,   145,   219,   163,   153,   273,   245,
     318,   152,   187,   135,   136,   199,   200,   153,   112,   295,
     296,   297,   298,   299,   300,   301,   118,   302,   303,     5,
     164,   140,   154,   155,   312,   313,   314,   315,   246,    84,
     133,   134,   154,   155,   193,   188,   214,   194,   220,   221,
     166,   201,   221,   291,    11,    56,   183,    33,   304,   195,
     207,   214,   319,   320,   321,   322,   323,   137,   324,   325,
     152,   168,   152,    66,    34,    35,   153,   110,   153,   167,
      86,    87,    22,   206,   272,   171,   168,    23,    37,     6,
      34,    35,   111,   273,    38,   280,   185,    39,   114,   115,
     168,   154,   155,   154,   155,    73,    74,    75,    76,    77,
       7,    94,    12,    16,     8,    95,    17,    49,    38,    51,
      50,    39,    52,     1,   167,     2,   190,   239,   241,   240,
     242,   306,    19,   307,    34,    35,   173,   174,    20,    94,
     125,    28,    94,   148,   251,   252,    44,    21,    29,    48,
      27,    67,    63,    71,    54,    72,    69,    80,    81,    66,
      84,    89,    90,    79,    82,    91,    92,    97,    96,   101,
      93,   102,    99,   103,   113,   100,   107,   121,   104,   116,
     123,   124,   130,   129,   127,   128,   131,   142,   143,   159,
     151,   146,   147,   149,   150,    33,   161,   162,   160,   172,
     167,   178,   177,   179,   180,   181,   197,   189,   228,   203,
     204,   205,   212,   217,   232,   210,   268,   248,   208,   250,
     209,   253,   211,   229,   238,   225,   226,   227,   230,   236,
     231,   258,   261,   269,   237,   233,   243,   244,   249,   270,
     254,   271,   255,   235,   281,   256,   257,   309,   259,   285,
      47,   262,   260,   264,     0,   144,     0,     0,     0,     0,
     263,    68,    65,   265,     0,   266,   276,   277,   278,   279,
      70,   282,   284,   267,     0,     0,   176,     0,     0,     0,
       0,   283,   288,   289,   308,   310,   287,   317,     0,     0,
     327
};

static const yytype_int16 yycheck[] =
{
     107,     1,     1,     1,     1,     1,     1,     1,    15,    14,
       1,   169,     1,    11,     1,     1,    12,     1,   176,     1,
       1,     1,     1,    12,   131,    19,    38,     7,    10,     1,
       1,     1,    12,    16,    17,    34,    35,     7,   100,    39,
      40,    41,    42,    43,    44,    45,    30,    47,    48,    62,
      62,    30,    32,    33,    49,    50,    51,    52,    30,    64,
      65,   123,    32,    33,    62,   172,    62,    65,    62,    63,
      77,    70,    63,    70,     8,    62,    62,    62,    78,    77,
     187,    62,    53,    54,    55,    56,    57,    70,    59,    60,
       1,   156,     1,    62,    79,    80,     7,     3,     7,    10,
      26,    27,     1,    12,     1,   158,   171,     6,     1,     0,
      79,    80,    18,    10,     7,    12,   169,    10,    28,    29,
     185,    32,    33,    32,    33,    21,    22,    23,    24,    25,
       1,    67,    70,     1,     5,    71,     4,    68,     7,    69,
      71,    10,    72,     1,    10,     3,    12,    69,    69,    71,
      71,    69,    14,    71,    79,    80,    19,    20,    62,    67,
      68,    68,    67,    68,    28,    29,     6,    70,    62,    11,
      72,     6,    62,    68,    75,    62,    74,    13,     9,    62,
      64,    13,    68,    75,    72,    62,    15,    68,    70,    13,
      75,    64,    72,    68,    68,    74,    30,    30,    65,    71,
       8,     8,     8,    62,    65,    65,    31,     8,     6,     8,
      62,    68,    68,    66,    68,    62,     8,    62,    69,    12,
      10,     8,    72,     8,     8,     8,    35,    71,    38,    11,
      11,    72,    70,    70,    36,    62,     8,    37,    68,    34,
      68,    20,    68,    62,    58,    68,    68,    68,    68,    65,
      68,    31,    65,     9,    69,    72,    68,    68,    62,     9,
      63,     9,   239,   215,   274,    62,   244,   306,    73,    38,
      25,    65,    68,    62,    -1,   130,    -1,    -1,    -1,    -1,
      71,    45,    40,    71,    -1,    71,    62,    62,    62,    62,
      49,    68,    62,    71,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    72,    68,    70,    69,    68,    74,    69,    -1,    -1,
      71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    82,    83,    62,     0,     1,     5,    84,
      86,     8,    70,     1,    12,    85,     1,     4,    87,    14,
      62,    70,     1,     6,    94,    95,   139,    72,    68,    62,
      88,    89,    90,    62,    79,    80,   141,     1,     7,    10,
     125,   126,   127,   129,     6,   111,   121,   139,    11,    68,
      71,    69,    72,    96,    75,     1,    62,   130,   131,   133,
     134,   136,   137,    62,   128,   126,    62,     6,   121,    74,
      89,    68,    62,    21,    22,    23,    24,    25,    91,    75,
      13,     9,    72,   122,    64,   138,    26,    27,    92,    13,
      68,    62,    15,    75,    67,    71,    70,    68,   140,    72,
      74,    13,    64,    68,    65,    93,    97,    30,   142,   143,
       3,    18,   138,    68,    28,    29,    71,     1,    30,    98,
     141,    30,   145,     8,     8,    68,   123,    65,    65,    62,
       8,    31,    14,    65,   138,    16,    17,    70,   132,     1,
      30,   124,     8,     6,    95,   141,    68,    68,    68,    66,
      68,    62,     1,     7,    32,    33,    99,   100,   144,     8,
      69,     8,    62,    38,    62,    15,    77,    10,   100,   108,
     109,    99,    12,    19,    20,   135,   108,    72,     8,     8,
       8,     8,     1,    62,   110,    99,   109,    12,   141,    71,
      12,     1,    11,    62,    65,    77,   101,    35,     1,    34,
      35,    70,   102,    11,    11,    72,    12,   141,    68,    68,
      62,    68,    70,     1,    62,   106,   107,    70,     1,    19,
      62,    63,   103,   104,   105,    68,    68,    68,    38,    62,
      68,    68,    36,    72,    12,   107,    65,    69,    58,    69,
      71,    69,    71,    68,    68,     1,    30,   112,    37,    62,
      34,    28,    29,    20,    63,   105,    62,   112,    31,    73,
      68,    65,    65,    71,    62,    71,    71,    71,     8,     9,
       9,     9,     1,    10,   114,   115,    62,    62,    62,    62,
      12,   115,    68,    72,    62,    38,   113,    74,    68,    70,
       1,    70,   116,   117,     1,    39,    40,    41,    42,    43,
      44,    45,    47,    48,    78,   118,    69,    71,    69,   117,
      68,     1,    49,    50,    51,    52,   119,    69,     1,    53,
      54,    55,    56,    57,    59,    60,   120,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    84,    84,    85,    85,    86,
      87,    87,    88,    88,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    96,    97,    95,    98,    98,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   110,
     110,   111,   111,   113,   112,   112,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   122,   123,
     121,   124,   124,   125,   125,   125,   126,   126,   127,   128,
     129,   130,   130,   130,   130,   130,   130,   131,   132,   132,
     133,   134,   135,   135,   136,   137,   138,   138,   140,   139,
     141,   141,   142,   144,   143,   145
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     1,     4,     1,     3,     1,     9,
       5,     1,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     1,     1,     2,     2,
       1,     0,     0,     8,    10,     1,     1,     2,     5,     5,
      12,     5,     5,     1,     1,     1,     1,     1,     1,     3,
       3,     5,     8,     8,     4,     1,     1,     3,     1,     3,
       3,     1,     1,     2,     4,     1,     1,     2,     2,     4,
       1,     1,     2,     0,     9,     1,     1,     2,     9,     1,
       1,     3,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       8,     8,     1,     1,     2,     1,     1,     1,     2,     6,
       2,     1,     1,     1,     1,     1,     1,     8,     1,     1,
       8,    12,     1,     1,     8,     8,     1,     3,     0,     7,
       1,     1,     2,     0,     9,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (priv_data, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, priv_data); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, urj_vhdl_parser_priv_t *priv_data)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (priv_data);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, urj_vhdl_parser_priv_t *priv_data)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, priv_data);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, urj_vhdl_parser_priv_t *priv_data)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], priv_data);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, priv_data); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, urj_vhdl_parser_priv_t *priv_data)
{
  YY_USE (yyvaluep);
  YY_USE (priv_data);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (urj_vhdl_parser_priv_t *priv_data)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, HACK);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* Begin_BSDL: ENTITY IDENTIFIER IS  */
#line 230 "vhdl_bison.y"
             { urj_vhdl_set_entity (priv_data, (yyvsp[-1].str)); }
#line 1720 "vhdl_bison.c"
    break;

  case 4: /* Begin_BSDL: error  */
#line 232 "vhdl_bison.y"
             {
               Print_Error (priv_data, _("Improper Entity declaration"));
               Print_Error (priv_data, _("Check if source file is BSDL"));
               BUMP_ERROR; YYABORT;     /* Probably not a BSDL source file */
             }
#line 1730 "vhdl_bison.c"
    break;

  case 6: /* BSDL_Body: error  */
#line 243 "vhdl_bison.y"
            {
              Print_Error (priv_data, _("Syntax Error"));
              BUMP_ERROR; YYABORT;
            }
#line 1739 "vhdl_bison.c"
    break;

  case 7: /* End_BSDL: END IDENTIFIER SEMICOLON  */
#line 249 "vhdl_bison.y"
           { free ((yyvsp[-1].str)); }
#line 1745 "vhdl_bison.c"
    break;

  case 8: /* End_BSDL: error  */
#line 251 "vhdl_bison.y"
           {
             Print_Error (priv_data, _("Syntax Error"));
             BUMP_ERROR; YYABORT;
           }
#line 1754 "vhdl_bison.c"
    break;

  case 11: /* VHDL_Port: error  */
#line 261 "vhdl_bison.y"
                      {
                        Print_Error (priv_data, _("Improper Port declaration"));
                        BUMP_ERROR; YYABORT;
                      }
#line 1763 "vhdl_bison.c"
    break;

  case 14: /* Port_Specifier: Port_List COLON Function Scaler_Or_Vector  */
#line 270 "vhdl_bison.y"
                      { urj_vhdl_port_apply_port (priv_data); }
#line 1769 "vhdl_bison.c"
    break;

  case 15: /* Port_List: IDENTIFIER  */
#line 273 "vhdl_bison.y"
                      { urj_vhdl_port_add_name (priv_data, (yyvsp[0].str)); }
#line 1775 "vhdl_bison.c"
    break;

  case 16: /* Port_List: Port_List COMMA IDENTIFIER  */
#line 275 "vhdl_bison.y"
                      { urj_vhdl_port_add_name (priv_data, (yyvsp[0].str)); }
#line 1781 "vhdl_bison.c"
    break;

  case 22: /* Scaler_Or_Vector: BIT  */
#line 280 "vhdl_bison.y"
                      { urj_vhdl_port_add_bit (priv_data); }
#line 1787 "vhdl_bison.c"
    break;

  case 24: /* Vector_Range: DECIMAL_NUMBER TO DECIMAL_NUMBER  */
#line 284 "vhdl_bison.y"
                      { urj_vhdl_port_add_range (priv_data, (yyvsp[-2].integer), (yyvsp[0].integer)); }
#line 1793 "vhdl_bison.c"
    break;

  case 25: /* Vector_Range: DECIMAL_NUMBER DOWNTO DECIMAL_NUMBER  */
#line 286 "vhdl_bison.y"
                      { urj_vhdl_port_add_range (priv_data, (yyvsp[0].integer), (yyvsp[-2].integer)); }
#line 1799 "vhdl_bison.c"
    break;

  case 30: /* VHDL_Use_Part: error  */
#line 293 "vhdl_bison.y"
                {
                  Print_Error (priv_data, _("Error in Package declaration(s)"));
                  BUMP_ERROR; YYABORT;
                }
#line 1808 "vhdl_bison.c"
    break;

  case 31: /* $@1: %empty  */
#line 299 "vhdl_bison.y"
                {/* Parse Standard 1149.1 Package */
                  strcpy (priv_data->Package_File_Name, (yyvsp[0].str));
                  free ((yyvsp[0].str));
                }
#line 1817 "vhdl_bison.c"
    break;

  case 32: /* $@2: %empty  */
#line 304 "vhdl_bison.y"
                {
                  priv_data->Reading_Package = 1;
                  urj_vhdl_flex_switch_file (priv_data->scanner,
                                             priv_data->Package_File_Name);
                }
#line 1827 "vhdl_bison.c"
    break;

  case 33: /* Standard_Use: USE IDENTIFIER $@1 PERIOD ALL SEMICOLON $@2 Standard_Package  */
#line 310 "vhdl_bison.y"
                {
                  priv_data->Reading_Package = 0;
                }
#line 1835 "vhdl_bison.c"
    break;

  case 34: /* Standard_Package: PACKAGE IDENTIFIER IS Standard_Decls Defered_Constants Standard_Decls END IDENTIFIER SEMICOLON Package_Body  */
#line 316 "vhdl_bison.y"
                   { free ((yyvsp[-8].str)); free ((yyvsp[-2].str)); }
#line 1841 "vhdl_bison.c"
    break;

  case 35: /* Standard_Package: error  */
#line 318 "vhdl_bison.y"
                   {
                     Print_Error (priv_data, _("Error in Standard Package"));
                     BUMP_ERROR; YYABORT;
                   }
#line 1850 "vhdl_bison.c"
    break;

  case 38: /* Standard_Decl: ATTRIBUTE IDENTIFIER COLON Attribute_Type SEMICOLON  */
#line 327 "vhdl_bison.y"
                 { free ((yyvsp[-3].str)); }
#line 1856 "vhdl_bison.c"
    break;

  case 39: /* Standard_Decl: TYPE IDENTIFIER IS Type_Body SEMICOLON  */
#line 329 "vhdl_bison.y"
                 { free ((yyvsp[-3].str)); }
#line 1862 "vhdl_bison.c"
    break;

  case 40: /* Standard_Decl: TYPE CELL_INFO IS ARRAY LPAREN POSITIVE RANGE BOX RPAREN OF IDENTIFIER SEMICOLON  */
#line 332 "vhdl_bison.y"
                 { free ((yyvsp[-1].str)); }
#line 1868 "vhdl_bison.c"
    break;

  case 43: /* Standard_Decl: error  */
#line 336 "vhdl_bison.y"
                 {
                   Print_Error (priv_data, _("Error in Standard Declarations"));
                   BUMP_ERROR; YYABORT;
                 }
#line 1877 "vhdl_bison.c"
    break;

  case 44: /* Attribute_Type: IDENTIFIER  */
#line 342 "vhdl_bison.y"
                 { free ((yyvsp[0].str)); }
#line 1883 "vhdl_bison.c"
    break;

  case 48: /* Attribute_Type: error  */
#line 347 "vhdl_bison.y"
                 {
                   Print_Error (priv_data, _("Error in Attribute type identification"));
                   BUMP_ERROR; YYABORT;
                 }
#line 1892 "vhdl_bison.c"
    break;

  case 52: /* Type_Body: ARRAY LPAREN DECIMAL_NUMBER TO DECIMAL_NUMBER RPAREN OF IDENTIFIER  */
#line 357 "vhdl_bison.y"
                 { free ((yyvsp[0].str)); }
#line 1898 "vhdl_bison.c"
    break;

  case 53: /* Type_Body: ARRAY LPAREN DECIMAL_NUMBER DOWNTO DECIMAL_NUMBER RPAREN OF IDENTIFIER  */
#line 360 "vhdl_bison.y"
                 { free ((yyvsp[0].str)); }
#line 1904 "vhdl_bison.c"
    break;

  case 55: /* Type_Body: error  */
#line 363 "vhdl_bison.y"
                 {
                   Print_Error (priv_data, _("Error in Type definition"));
                   BUMP_ERROR; YYABORT;
                 }
#line 1913 "vhdl_bison.c"
    break;

  case 58: /* ID_List: IDENTIFIER  */
#line 372 "vhdl_bison.y"
                 { free ((yyvsp[0].str)); }
#line 1919 "vhdl_bison.c"
    break;

  case 59: /* ID_List: ID_List COMMA IDENTIFIER  */
#line 374 "vhdl_bison.y"
                 { free ((yyvsp[0].str)); }
#line 1925 "vhdl_bison.c"
    break;

  case 60: /* ID_Bit: SINGLE_QUOTE BIN_X_PATTERN SINGLE_QUOTE  */
#line 377 "vhdl_bison.y"
                 { free ((yyvsp[-1].str)); }
#line 1931 "vhdl_bison.c"
    break;

  case 61: /* ID_Bit: error  */
#line 379 "vhdl_bison.y"
                 {
                   Print_Error (priv_data, _("Error in Bit definition"));
                   BUMP_ERROR; YYABORT;
                 }
#line 1940 "vhdl_bison.c"
    break;

  case 64: /* Record_Element: IDENTIFIER COLON IDENTIFIER SEMICOLON  */
#line 388 "vhdl_bison.y"
                 { free ((yyvsp[-3].str)); free ((yyvsp[-1].str)); }
#line 1946 "vhdl_bison.c"
    break;

  case 65: /* Record_Element: error  */
#line 390 "vhdl_bison.y"
                 {
                   Print_Error (priv_data, _("Error in Record Definition"));
                   BUMP_ERROR; YYABORT;
                 }
#line 1955 "vhdl_bison.c"
    break;

  case 69: /* Constant_Body: IDENTIFIER COLON CELL_INFO SEMICOLON  */
#line 401 "vhdl_bison.y"
                    { free ((yyvsp[-3].str)); }
#line 1961 "vhdl_bison.c"
    break;

  case 70: /* Constant_Body: error  */
#line 403 "vhdl_bison.y"
                    {
                      Print_Error (priv_data, _("Error in defered constant"));
                      BUMP_ERROR; YYABORT;
                    }
#line 1970 "vhdl_bison.c"
    break;

  case 73: /* $@3: %empty  */
#line 412 "vhdl_bison.y"
                  { free ((yyvsp[-4].str)); free ((yyvsp[0].str)); }
#line 1976 "vhdl_bison.c"
    break;

  case 75: /* Package_Body: error  */
#line 415 "vhdl_bison.y"
                  {
                    Print_Error (priv_data, _("Error in Package Body definition"));
                    BUMP_ERROR; YYABORT;
                  }
#line 1985 "vhdl_bison.c"
    break;

  case 78: /* Cell_Constant: CONSTANT IDENTIFIER COLON CELL_INFO COLON_EQUAL LPAREN Triples_List RPAREN SEMICOLON  */
#line 425 "vhdl_bison.y"
                  { free ((yyvsp[-7].str)); }
#line 1991 "vhdl_bison.c"
    break;

  case 79: /* Cell_Constant: error  */
#line 427 "vhdl_bison.y"
                  {
                    Print_Error (priv_data, _("Error in Cell Constant definition"));
                    BUMP_ERROR; YYABORT;
                  }
#line 2000 "vhdl_bison.c"
    break;

  case 83: /* Triple: error  */
#line 438 "vhdl_bison.y"
                  {
                    Print_Error (priv_data, _("Error in Cell Data Record"));
                    BUMP_ERROR; YYABORT;
                  }
#line 2009 "vhdl_bison.c"
    break;

  case 94: /* Triple_Function: error  */
#line 447 "vhdl_bison.y"
                  {
                    Print_Error (priv_data, _("Error in Cell_Type Function field"));
                    BUMP_ERROR; YYABORT;
                  }
#line 2018 "vhdl_bison.c"
    break;

  case 99: /* Triple_Inst: error  */
#line 454 "vhdl_bison.y"
                  {
                    Print_Error (priv_data, _("Error in BScan_Inst Instruction field"));
                    BUMP_ERROR; YYABORT;
                  }
#line 2027 "vhdl_bison.c"
    break;

  case 107: /* CAP_Data: error  */
#line 461 "vhdl_bison.y"
                  {
                    Print_Error (priv_data, _("Error in Constant CAP data source field"));
                    BUMP_ERROR; YYABORT;
                  }
#line 2036 "vhdl_bison.c"
    break;

  case 108: /* $@4: %empty  */
#line 467 "vhdl_bison.y"
                   {/* Parse Standard 1149.1 Package */
                    strcpy(priv_data->Package_File_Name, (yyvsp[0].str));
                    free((yyvsp[0].str));
                   }
#line 2045 "vhdl_bison.c"
    break;

  case 109: /* $@5: %empty  */
#line 472 "vhdl_bison.y"
                   {
                     priv_data->Reading_Package = 1;
                     urj_vhdl_flex_switch_file (priv_data->scanner,
                                                priv_data->Package_File_Name);
                   }
#line 2055 "vhdl_bison.c"
    break;

  case 110: /* VHDL_Use: USE IDENTIFIER $@4 PERIOD ALL SEMICOLON $@5 User_Package  */
#line 478 "vhdl_bison.y"
                   {
                     priv_data->Reading_Package = 0;
                   }
#line 2063 "vhdl_bison.c"
    break;

  case 111: /* User_Package: PACKAGE IDENTIFIER IS Defered_Constants END IDENTIFIER SEMICOLON Package_Body  */
#line 484 "vhdl_bison.y"
                   { free((yyvsp[-6].str)); free((yyvsp[-2].str)); }
#line 2069 "vhdl_bison.c"
    break;

  case 112: /* User_Package: error  */
#line 486 "vhdl_bison.y"
                   {Print_Error(priv_data, _("Error in User-Defined Package declarations"));
                    BUMP_ERROR; YYABORT; }
#line 2076 "vhdl_bison.c"
    break;

  case 115: /* VHDL_Elements: error  */
#line 492 "vhdl_bison.y"
                {
                  Print_Error (priv_data, _("Unknown VHDL statement"));
                  BUMP_ERROR; YYABORT;
                }
#line 2085 "vhdl_bison.c"
    break;

  case 119: /* VHDL_Constant_Part: IDENTIFIER COLON PIN_MAP_STRING COLON_EQUAL Quoted_String SEMICOLON  */
#line 505 "vhdl_bison.y"
                     { free ((yyvsp[-5].str)); }
#line 2091 "vhdl_bison.c"
    break;

  case 126: /* VHDL_Attribute_Types: error  */
#line 515 "vhdl_bison.y"
                       {
                         Print_Error (priv_data, _("Error in Attribute specification"));
                         BUMP_ERROR; YYABORT;
                       }
#line 2100 "vhdl_bison.c"
    break;

  case 127: /* VHDL_Attr_Boolean: IDENTIFIER OF IDENTIFIER COLON SIGNAL IS Boolean SEMICOLON  */
#line 521 "vhdl_bison.y"
                     {
                       //set_attr_bool (priv_data, $1, $7);
                       //free ($3);
                       /* skip boolean attributes for the time being */
                       free ((yyvsp[-7].str)); free ((yyvsp[-5].str));
                     }
#line 2111 "vhdl_bison.c"
    break;

  case 128: /* Boolean: TRUE  */
#line 529 "vhdl_bison.y"
                     { (yyval.integer) = 1; }
#line 2117 "vhdl_bison.c"
    break;

  case 129: /* Boolean: FALSE  */
#line 531 "vhdl_bison.y"
                     { (yyval.integer) = 0; }
#line 2123 "vhdl_bison.c"
    break;

  case 130: /* VHDL_Attr_Decimal: IDENTIFIER OF IDENTIFIER COLON ENTITY IS DECIMAL_NUMBER SEMICOLON  */
#line 534 "vhdl_bison.y"
                    {
                      set_attr_decimal (priv_data, (yyvsp[-7].str), (yyvsp[-1].integer));
                      free ((yyvsp[-5].str));
                    }
#line 2132 "vhdl_bison.c"
    break;

  case 131: /* VHDL_Attr_Real: IDENTIFIER OF IDENTIFIER COLON SIGNAL IS LPAREN REAL_NUMBER COMMA Stop RPAREN SEMICOLON  */
#line 540 "vhdl_bison.y"
                   {
                     //set_attr_real (priv_data, $1, $8);
                     //free ($3);
                     /* skip real attributes for the time being */
                     free ((yyvsp[-11].str)); free ((yyvsp[-9].str)); free ((yyvsp[-4].str));
                   }
#line 2143 "vhdl_bison.c"
    break;

  case 134: /* VHDL_Attr_String: IDENTIFIER OF IDENTIFIER COLON ENTITY IS Quoted_String SEMICOLON  */
#line 550 "vhdl_bison.y"
                   {
                     set_attr_string (priv_data, (yyvsp[-7].str), strdup (priv_data->buffer));
                     free ((yyvsp[-5].str));
                   }
#line 2152 "vhdl_bison.c"
    break;

  case 135: /* VHDL_Attr_PhysicalPinMap: IDENTIFIER OF IDENTIFIER COLON ENTITY IS PHYSICAL_PIN_MAP SEMICOLON  */
#line 556 "vhdl_bison.y"
                           { free ((yyvsp[-7].str)); free ((yyvsp[-5].str)); }
#line 2158 "vhdl_bison.c"
    break;

  case 136: /* Quoted_String: QUOTED_STRING  */
#line 559 "vhdl_bison.y"
                   {
                     Init_Text (priv_data);
                     Store_Text (priv_data, (yyvsp[0].str));
                     free ((yyvsp[0].str));
                   }
#line 2168 "vhdl_bison.c"
    break;

  case 137: /* Quoted_String: Quoted_String CONCATENATE QUOTED_STRING  */
#line 565 "vhdl_bison.y"
                   {
                     Store_Text (priv_data, (yyvsp[0].str));
                     free ((yyvsp[0].str));
                   }
#line 2177 "vhdl_bison.c"
    break;

  case 138: /* $@6: %empty  */
#line 571 "vhdl_bison.y"
             {
               priv_data->Reading_Package = 1;
               urj_vhdl_flex_switch_file (priv_data->scanner,
                                          priv_data->Package_File_Name);
             }
#line 2187 "vhdl_bison.c"
    break;

  case 139: /* ISC_Use: USE ISC_Packages PERIOD ALL SEMICOLON $@6 ISC_Package  */
#line 577 "vhdl_bison.y"
             {
               priv_data->Reading_Package = 0;
             }
#line 2195 "vhdl_bison.c"
    break;

  case 140: /* ISC_Packages: STD_1532_2001  */
#line 582 "vhdl_bison.y"
               {
                 strcpy (priv_data->Package_File_Name, "STD_1532_2001");
               }
#line 2203 "vhdl_bison.c"
    break;

  case 141: /* ISC_Packages: STD_1532_2002  */
#line 586 "vhdl_bison.y"
               {
                 strcpy (priv_data->Package_File_Name, "STD_1532_2002");
               }
#line 2211 "vhdl_bison.c"
    break;

  case 143: /* $@7: %empty  */
#line 594 "vhdl_bison.y"
                     {
                       priv_data->Reading_Package = 1;
                     }
#line 2219 "vhdl_bison.c"
    break;


#line 2223 "vhdl_bison.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (priv_data, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, priv_data);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, priv_data);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (priv_data, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, priv_data);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, priv_data);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 603 "vhdl_bison.y"
  /* End rules, begin programs  */
/*****************************************************************************
 * void Init_Text( urj_vhdl_parser_priv_t *priv )
 *
 * Allocates the internal test buffer if not already existing.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
static void
Init_Text (urj_vhdl_parser_priv_t *priv)
{
    if (priv->len_buffer == 0)
    {
        /* @@@@ RFHH check malloc result */
        priv->buffer = malloc (160);
        priv->len_buffer = 160;
    }
    priv->buffer[0] = '\0';
}


/*****************************************************************************
 * void Store_Text( urj_vhdl_parser_priv_t *priv, char *Source )
 *
 * Appends the given String to the internal text buffer. The buffer
 * is extended if the string does not fit into the current size.
 *
 * Parameters
 *   priv   : private data container for parser related tasks
 *   String : pointer to string that is to be added to buffer
 *
 * Returns
 *   void
 ****************************************************************************/
static void
Store_Text (urj_vhdl_parser_priv_t *priv, char *Source)
{                               /* Save characters from VHDL string in local string buffer.           */
    size_t req_len;
    char *SourceEnd;

    SourceEnd = ++Source;       /* skip leading '"' */
    while (*SourceEnd && (*SourceEnd != '"') && (*SourceEnd != '\n'))
        SourceEnd++;
    /* terminate Source string with NUL character */
    *SourceEnd = '\0';

    req_len = strlen (priv->buffer) + strlen (Source) + 1;
    if (req_len > priv->len_buffer)
    {
        /* @@@@ RFHH check realloc result */
        priv->buffer = realloc (priv->buffer, req_len);
        priv->len_buffer = req_len;
    }
    strcat (priv->buffer, Source);
}

/*----------------------------------------------------------------------*/
static void
Print_Error (urj_vhdl_parser_priv_t *priv_data, const char *Errmess)
{
    urj_bsdl_jtag_ctrl_t *jc = priv_data->jtag_ctrl;

    if (priv_data->Reading_Package)
        urj_bsdl_err (jc->proc_mode,
                      _("In Package %s, Line %d, %s.\n"),
                      priv_data->Package_File_Name,
                      urj_vhdl_flex_get_lineno (priv_data->scanner), Errmess);
    else
        urj_bsdl_err (jc->proc_mode,
                      _("Line %d, %s.\n"),
                      urj_vhdl_flex_get_lineno (priv_data->scanner), Errmess);

    /* set an error if nothing else is pending */
    if (urj_error_get () == URJ_ERROR_OK)
        urj_bsdl_err_set (jc->proc_mode, URJ_ERROR_BSDL_VHDL,
                          "Parser error, see log for details");
}

/*----------------------------------------------------------------------*/
static void
Give_Up_And_Quit (urj_vhdl_parser_priv_t *priv_data)
{
    Print_Error (priv_data, _("Too many errors"));
}

/*----------------------------------------------------------------------*/
void
yyerror (urj_vhdl_parser_priv_t *priv_data, const char *error_string)
{
}


/*****************************************************************************
 * void urj_vhdl_sem_init( urj_vhdl_parser_priv_t *priv )
 *
 * Initializes storage elements in the private parser and jtag control
 * structures that are used for semantic purposes.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
static void
urj_vhdl_sem_init (urj_vhdl_parser_priv_t *priv)
{
    priv->tmp_port_desc.names_list = NULL;
    priv->tmp_port_desc.next = NULL;

    priv->jtag_ctrl->port_desc = NULL;

    priv->jtag_ctrl->vhdl_elem_first = NULL;
    priv->jtag_ctrl->vhdl_elem_last = NULL;
}


/*****************************************************************************
 * void free_string_list( urj_bsdl_string_elem_t *sl )
 *
 * Deallocates the given list of string_elem items.
 *
 * Parameters
 *  sl : first string_elem to deallocate
 *
 * Returns
 *  void
 ****************************************************************************/
static void
free_string_list (urj_bsdl_string_elem_t *sl)
{
    if (sl)
    {
        if (sl->string)
            free (sl->string);
        free_string_list (sl->next);
        free (sl);
    }
}


/*****************************************************************************
 * void free_port_list( urj_bsdl_port_desc_t *pl, int free_me )
 *
 * Deallocates the given list of port_desc.
 *
 * Parameters
 *  pl      : first port_desc to deallocate
 *  free_me : set to 1 to free memory for ai as well
 *
 * Returns
 *  void
 ****************************************************************************/
static void
free_port_list (urj_bsdl_port_desc_t *pl, int free_me)
{
    if (pl)
    {
        free_string_list (pl->names_list);
        free_port_list (pl->next, 1);

        if (free_me)
            free (pl);
    }
}


/*****************************************************************************
 * void free_elem_list( urj_vhdl_elem_t *el )
 *
 * Deallocates the given list of vhdl_elem items.
 *
 * Parameters
 *  el : first vhdl_elem to deallocate
 *
 * Returns
 *  void
 ****************************************************************************/
static void
free_elem_list (urj_vhdl_elem_t *el)
{
    if (el)
    {
        free_elem_list (el->next);

        if (el->name)
            free (el->name);

        if (el->payload)
            free (el->payload);
        free (el);
    }
}


/*****************************************************************************
 * void urj_vhdl_sem_deinit( urj_vhdl_parser_priv_t *priv )
 *
 * Frees and deinitializes storage elements in the private parser and
 * jtag control structures that were filled by semantic rules.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
static void
urj_vhdl_sem_deinit (urj_vhdl_parser_priv_t *priv_data)
{
    urj_bsdl_port_desc_t *pd = priv_data->jtag_ctrl->port_desc;
    urj_vhdl_elem_t *el = priv_data->jtag_ctrl->vhdl_elem_first;

    /* free port_desc list */
    free_port_list (pd, 1);
    free_port_list (&(priv_data->tmp_port_desc), 0);

    /* free VHDL element list */
    free_elem_list (el);

    priv_data->jtag_ctrl = NULL;
}


/*****************************************************************************
 * urj_vhdl_parser_priv_t *urj_vhdl_parser_init( FILE *f, urj_bsdl_jtag_ctrl_t *jtag_ctrl )
 *
 * Initializes storage elements in the private parser structure that are
 * used for parser maintenance purposes.
 * Subsequently calls initializer functions for the scanner and the semantic
 * parts.
 *
 * Parameters
 *   f         : descriptor of file for scanning
 *   jtag_ctrl : pointer to jtag control structure
 *
 * Returns
 *   pointer to private parser structure
 ****************************************************************************/
urj_vhdl_parser_priv_t *
urj_vhdl_parser_init (FILE *f, urj_bsdl_jtag_ctrl_t *jtag_ctrl)
{
    urj_vhdl_parser_priv_t *new_priv;

    if (!(new_priv = malloc (sizeof (urj_vhdl_parser_priv_t))))
    {
        urj_bsdl_ftl_set (jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
        return NULL;
    }

    new_priv->jtag_ctrl = jtag_ctrl;

    new_priv->Reading_Package = 0;
    new_priv->buffer = NULL;
    new_priv->len_buffer = 0;

    if (!(new_priv->scanner = urj_vhdl_flex_init (f, jtag_ctrl->proc_mode)))
    {
        free (new_priv);
        new_priv = NULL;
    }

    urj_vhdl_sem_init (new_priv);

    return new_priv;
}


/*****************************************************************************
 * void urj_vhdl_parser_deinit( urj_vhdl_parser_priv_t *priv )
 *
 * Frees storage elements in the private parser structure that are
 * used for parser maintenance purposes.
 * Subsequently calls deinitializer functions for the scanner and the semantic
 * parts.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
void
urj_vhdl_parser_deinit (urj_vhdl_parser_priv_t *priv_data)
{
    if (priv_data->buffer)
    {
        free (priv_data->buffer);
        priv_data->buffer = NULL;
    }

    urj_vhdl_sem_deinit (priv_data);
    urj_vhdl_flex_deinit (priv_data->scanner);
    free (priv_data);
}

/*****************************************************************************
 * void urj_vhdl_set_entity( urj_vhdl_parser_priv_t *priv, char *entityname )
 *
 * Applies the entity name from BSDL as the part name.
 *
 * Parameters
 *   priv       : private data container for parser related tasks
 *   entityname : entity name string, memory gets free'd
 *
 * Returns
 *   void
 ****************************************************************************/
static void
urj_vhdl_set_entity (urj_vhdl_parser_priv_t *priv, char *entityname)
{
    if (priv->jtag_ctrl->proc_mode & URJ_BSDL_MODE_INSTR_EXEC)
    {
        strncpy (priv->entity_name, entityname, VHDL_PARSER_ENTITY_NAME_MAXLEN);
        priv->entity_name[VHDL_PARSER_ENTITY_NAME_MAXLEN] = '\0';
    }

    free (entityname);
}

/*****************************************************************************
 * void urj_vhdl_port_add_name( urj_vhdl_parser_priv_t *priv, char *name )
 * Port name management function
 *
 * Sets the name field of the temporary storage area for port description
 * (port_desc) to the parameter name.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *   name : base name of the port, memory get's free'd lateron
 *
 * Returns
 *   void
 ****************************************************************************/
static void
urj_vhdl_port_add_name (urj_vhdl_parser_priv_t *priv, char *name)
{
    urj_bsdl_port_desc_t *pd = &(priv->tmp_port_desc);
    urj_bsdl_string_elem_t *new_string;

    new_string = malloc (sizeof (urj_bsdl_string_elem_t));
    if (new_string)
    {
        new_string->next = pd->names_list;
        new_string->string = name;

        pd->names_list = new_string;
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}


/*****************************************************************************
 * void urj_vhdl_port_add_bit( urj_vhdl_parser_priv_t *priv )
 * Port name management function
 *
 * Sets the vector and index fields of the temporary storage area for port
 * description (port_desc) to non-vector information. The low and high indice
 * are set to equal numbers (exact value is irrelevant).
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
static void
urj_vhdl_port_add_bit (urj_vhdl_parser_priv_t *priv)
{
    urj_bsdl_port_desc_t *pd = &(priv->tmp_port_desc);

    pd->is_vector = 0;
    pd->low_idx = 0;
    pd->high_idx = 0;
}


/*****************************************************************************
 * void urj_vhdl_port_add_range( urj_vhdl_parser_priv_t *priv, int low, int high )
 * Port name management function
 *
 * Sets the vector and index fields of the temporary storage area for port
 * description (port_desc) to the specified vector information.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *   low  : low index of vector
 *   high : high index of vector
 *
 * Returns
 *   void
 ****************************************************************************/
static void
urj_vhdl_port_add_range (urj_vhdl_parser_priv_t *priv, int low,
                         int high)
{
    urj_bsdl_port_desc_t *pd = &(priv->tmp_port_desc);

    pd->is_vector = 1;
    pd->low_idx = low;
    pd->high_idx = high;
}

/*****************************************************************************
 * void urj_vhdl_port_apply_port( urj_vhdl_parser_priv_t *priv )
 * Port name management function
 *
 * Applies the current temporary port description to the final list
 * of port descriptions.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
static void
urj_vhdl_port_apply_port (urj_vhdl_parser_priv_t *priv)
{
    urj_bsdl_port_desc_t *tmp_pd = &(priv->tmp_port_desc);
    urj_bsdl_port_desc_t *pd = malloc (sizeof (urj_bsdl_port_desc_t));

    if (pd)
    {
        /* insert at top of list */
        pd->next = priv->jtag_ctrl->port_desc;
        priv->jtag_ctrl->port_desc = pd;

        /* copy information from temporary port descriptor */
        pd->names_list = tmp_pd->names_list;
        pd->is_vector = tmp_pd->is_vector;
        pd->low_idx = tmp_pd->low_idx;
        pd->high_idx = tmp_pd->high_idx;

        /* and reset temporary port descriptor */
        tmp_pd->names_list = NULL;
        tmp_pd->next = NULL;
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}

static void
add_elem (urj_vhdl_parser_priv_t *priv, urj_vhdl_elem_t *el)
{
    urj_bsdl_jtag_ctrl_t *jc = priv->jtag_ctrl;

    el->next = NULL;
    if (jc->vhdl_elem_last)
        jc->vhdl_elem_last->next = el;
    jc->vhdl_elem_last = el;

    if (!jc->vhdl_elem_first)
        jc->vhdl_elem_first = el;

    el->line = urj_vhdl_flex_get_lineno (priv->scanner);
}

#if 0
static void
set_attr_bool (urj_vhdl_parser_priv_t *priv, char *name, int value)
{
    urj_vhdl_elem_t *el = malloc (sizeof (urj_vhdl_elem_t));

    if (el)
    {
        el->type = VET_ATTRIBUTE_BOOL;
        el->name = name;
        el->payload.bool = value;

        add_elem (priv, el);
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}
#endif

static void
set_attr_decimal (urj_vhdl_parser_priv_t *priv, char *name, int value)
{
    urj_vhdl_elem_t *el = malloc (sizeof (urj_vhdl_elem_t));
    char *string = malloc (10);

    if (el && string)
    {
        el->type = URJ_BSDL_VET_ATTRIBUTE_DECIMAL;
        el->name = name;
        snprintf (string, 10, "%d", value);
        el->payload = string;

        add_elem (priv, el);
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}

static void
set_attr_string (urj_vhdl_parser_priv_t *priv, char *name, char *string)
{
    urj_vhdl_elem_t *el = malloc (sizeof (urj_vhdl_elem_t));

    /* skip certain attributes */
    if ((strcasecmp (name, "DESIGN_WARNING") == 0)
        || (strcasecmp (name, "BOUNDARY_CELLS") == 0)
        || (strcasecmp (name, "INSTRUCTION_SEQUENCE") == 0)
        || (strcasecmp (name, "INSTRUCTION_USAGE") == 0)
        || (strcasecmp (name, "ISC_DESIGN_WARNING") == 0))
    {
        free (name);
        free (string);
        free (el);
        return;
    }

    if (el)
    {
        el->type = URJ_BSDL_VET_ATTRIBUTE_STRING;
        el->name = name;
        el->payload = string;

        add_elem (priv, el);
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}

#if 0
static void
set_attr_real (urj_vhdl_parser_priv_t *priv, char *name, char *string)
{
    urj_vhdl_elem_t *el = malloc (sizeof (urj_vhdl_elem_t));

    if (el)
    {
        el->type = VET_ATTRIBUTE_REAL;
        el->name = name;
        el->payload.real = string;

        add_elem (priv, el);
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}
#endif

#if 0
static void
set_attr_const (urj_vhdl_parser_priv_t *priv, char *name, char *string)
{
    urj_vhdl_elem_t *el = malloc (sizeof (urj_vhdl_elem_t));

    if (el)
    {
        el->type = URJ_BSDL_VET_CONSTANT;
        el->name = name;
        el->payload = string;

        add_elem (priv, el);
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}
#endif


/*
 Local Variables:
 mode:C
 c-default-style:gnu
 indent-tabs-mode:nil
 End:
*/
