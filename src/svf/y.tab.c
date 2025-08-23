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
#define yyparse         urj_svf_parse
#define yylex           urj_svf_lex
#define yyerror         urj_svf_error
#define yydebug         urj_svf_debug
#define yynerrs         urj_svf_nerrs

/* First part of user prologue.  */
#line 35 "svf_bison.y"

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <urjtag/log.h>

#include "svf.h"

/* interface to flex */
#include "svf_bison.h"
#define HACK priv_data->scanner
int yylex (YYSTYPE *, YYLTYPE *, void *);

// @@@@ RFHH need to define YYPRINTF in terms of urj_log()

#define YYERROR_VERBOSE


void yyerror(YYLTYPE *, urj_svf_parser_priv_t *priv_data, urj_chain_t *, const char *);

static void urj_svf_free_ths_params(struct ths_params *);

#line 101 "y.tab.c"

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

#line 279 "y.tab.c"

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



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* SVF_EOF  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_HEXA_NUM_FRAGMENT = 5,          /* HEXA_NUM_FRAGMENT  */
  YYSYMBOL_VECTOR_STRING = 6,              /* VECTOR_STRING  */
  YYSYMBOL_EMPTY = 7,                      /* EMPTY  */
  YYSYMBOL_ENDDR = 8,                      /* ENDDR  */
  YYSYMBOL_ENDIR = 9,                      /* ENDIR  */
  YYSYMBOL_FREQUENCY = 10,                 /* FREQUENCY  */
  YYSYMBOL_HZ = 11,                        /* HZ  */
  YYSYMBOL_STATE = 12,                     /* STATE  */
  YYSYMBOL_RESET = 13,                     /* RESET  */
  YYSYMBOL_IDLE = 14,                      /* IDLE  */
  YYSYMBOL_TDI = 15,                       /* TDI  */
  YYSYMBOL_TDO = 16,                       /* TDO  */
  YYSYMBOL_MASK = 17,                      /* MASK  */
  YYSYMBOL_SMASK = 18,                     /* SMASK  */
  YYSYMBOL_TRST = 19,                      /* TRST  */
  YYSYMBOL_ON = 20,                        /* ON  */
  YYSYMBOL_OFF = 21,                       /* OFF  */
  YYSYMBOL_Z = 22,                         /* Z  */
  YYSYMBOL_ABSENT = 23,                    /* ABSENT  */
  YYSYMBOL_HDR = 24,                       /* HDR  */
  YYSYMBOL_HIR = 25,                       /* HIR  */
  YYSYMBOL_SDR = 26,                       /* SDR  */
  YYSYMBOL_SIR = 27,                       /* SIR  */
  YYSYMBOL_TDR = 28,                       /* TDR  */
  YYSYMBOL_TIR = 29,                       /* TIR  */
  YYSYMBOL_PIO = 30,                       /* PIO  */
  YYSYMBOL_PIOMAP = 31,                    /* PIOMAP  */
  YYSYMBOL_IN = 32,                        /* IN  */
  YYSYMBOL_OUT = 33,                       /* OUT  */
  YYSYMBOL_INOUT = 34,                     /* INOUT  */
  YYSYMBOL_H = 35,                         /* H  */
  YYSYMBOL_L = 36,                         /* L  */
  YYSYMBOL_U = 37,                         /* U  */
  YYSYMBOL_D = 38,                         /* D  */
  YYSYMBOL_X = 39,                         /* X  */
  YYSYMBOL_RUNTEST = 40,                   /* RUNTEST  */
  YYSYMBOL_MAXIMUM = 41,                   /* MAXIMUM  */
  YYSYMBOL_SEC = 42,                       /* SEC  */
  YYSYMBOL_TCK = 43,                       /* TCK  */
  YYSYMBOL_SCK = 44,                       /* SCK  */
  YYSYMBOL_ENDSTATE = 45,                  /* ENDSTATE  */
  YYSYMBOL_IRPAUSE = 46,                   /* IRPAUSE  */
  YYSYMBOL_IRSHIFT = 47,                   /* IRSHIFT  */
  YYSYMBOL_IRUPDATE = 48,                  /* IRUPDATE  */
  YYSYMBOL_IRSELECT = 49,                  /* IRSELECT  */
  YYSYMBOL_IREXIT1 = 50,                   /* IREXIT1  */
  YYSYMBOL_IREXIT2 = 51,                   /* IREXIT2  */
  YYSYMBOL_IRCAPTURE = 52,                 /* IRCAPTURE  */
  YYSYMBOL_DRPAUSE = 53,                   /* DRPAUSE  */
  YYSYMBOL_DRSHIFT = 54,                   /* DRSHIFT  */
  YYSYMBOL_DRUPDATE = 55,                  /* DRUPDATE  */
  YYSYMBOL_DRSELECT = 56,                  /* DRSELECT  */
  YYSYMBOL_DREXIT1 = 57,                   /* DREXIT1  */
  YYSYMBOL_DREXIT2 = 58,                   /* DREXIT2  */
  YYSYMBOL_DRCAPTURE = 59,                 /* DRCAPTURE  */
  YYSYMBOL_60_ = 60,                       /* ';'  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_line = 64,                      /* line  */
  YYSYMBOL_svf_statement = 65,             /* svf_statement  */
  YYSYMBOL_ths_param_list = 66,            /* ths_param_list  */
  YYSYMBOL_ths_opt_param = 67,             /* ths_opt_param  */
  YYSYMBOL_hexa_num_sequence = 68,         /* hexa_num_sequence  */
  YYSYMBOL_stable_state = 69,              /* stable_state  */
  YYSYMBOL_runtest_run_state_opt = 70,     /* runtest_run_state_opt  */
  YYSYMBOL_runtest_clk_count = 71,         /* runtest_clk_count  */
  YYSYMBOL_runtest_time_opt = 72,          /* runtest_time_opt  */
  YYSYMBOL_runtest_time = 73,              /* runtest_time  */
  YYSYMBOL_runtest_max_time_opt = 74,      /* runtest_max_time_opt  */
  YYSYMBOL_runtest_end_state_opt = 75,     /* runtest_end_state_opt  */
  YYSYMBOL_all_states = 76,                /* all_states  */
  YYSYMBOL_path_states = 77,               /* path_states  */
  YYSYMBOL_piomap_rec = 78,                /* piomap_rec  */
  YYSYMBOL_trst_mode = 79,                 /* trst_mode  */
  YYSYMBOL_direction = 80                  /* direction  */
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
typedef yytype_uint8 yy_state_t;

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
      61,    62,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    97,    98,   110,   115,   120,   125,   130,
     139,   148,   155,   163,   178,   193,   208,   223,   231,   246,
     261,   272,   273,   277,   282,   287,   292,   299,   305,   326,
     327,   328,   329,   333,   334,   341,   347,   356,   361,   365,
     373,   376,   383,   384,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     411,   415,   429,   430,   434,   435,   436,   437,   441,   442,
     443
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
  "SVF_EOF", "error", "\"invalid token\"", "IDENTIFIER", "NUMBER",
  "HEXA_NUM_FRAGMENT", "VECTOR_STRING", "EMPTY", "ENDDR", "ENDIR",
  "FREQUENCY", "HZ", "STATE", "RESET", "IDLE", "TDI", "TDO", "MASK",
  "SMASK", "TRST", "ON", "OFF", "Z", "ABSENT", "HDR", "HIR", "SDR", "SIR",
  "TDR", "TIR", "PIO", "PIOMAP", "IN", "OUT", "INOUT", "H", "L", "U", "D",
  "X", "RUNTEST", "MAXIMUM", "SEC", "TCK", "SCK", "ENDSTATE", "IRPAUSE",
  "IRSHIFT", "IRUPDATE", "IRSELECT", "IREXIT1", "IREXIT2", "IRCAPTURE",
  "DRPAUSE", "DRSHIFT", "DRUPDATE", "DRSELECT", "DREXIT1", "DREXIT2",
  "DRCAPTURE", "';'", "'('", "')'", "$accept", "line", "svf_statement",
  "ths_param_list", "ths_opt_param", "hexa_num_sequence", "stable_state",
  "runtest_run_state_opt", "runtest_clk_count", "runtest_time_opt",
  "runtest_time", "runtest_max_time_opt", "runtest_end_state_opt",
  "all_states", "path_states", "piomap_rec", "trst_mode", "direction", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-33)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      73,     5,   106,   -51,   -51,    42,    42,     2,   -51,    99,
       6,    35,    36,    53,    71,    80,     1,   -50,    42,   -51,
     -51,   -51,   -51,   -51,    26,    27,    82,   -51,    -5,   -51,
     -51,   -51,   -51,    48,   -51,   -51,   -51,   -51,   -51,   -51,
      57,    37,   -51,    92,   -51,   -51,    63,    64,    66,    67,
     -51,   -51,   -51,   -51,   -51,   -51,    68,   -51,   -51,   -51,
     -51,   -51,   -51,    69,   -51,   -51,     3,     8,    12,    16,
      20,    49,   -51,   -51,   -51,   -51,   102,    47,   134,    94,
     -51,   -51,    79,    81,    83,    84,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   100,   -51,   -51,   101,    94,   -51,
      42,    87,   143,   143,   143,   143,    45,   145,   -51,    90,
     -51,   -51,   -51,    -4,    -3,    -2,    -1,    91,   149,   111,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     3,
      29,    30,    32,    31,     0,     0,     0,     7,     0,    64,
      65,    66,    67,     0,    21,    21,    21,    21,    21,    21,
       0,     0,    34,     0,     6,     5,     0,    58,    59,    56,
      52,    55,    50,    53,    54,    51,    57,    46,    49,    44,
      47,    48,    45,     0,    61,    20,     0,     0,     0,     0,
       0,     0,    12,    68,    69,    70,     0,     0,    37,    42,
       8,    17,     0,     0,     0,     0,     9,    22,    10,    15,
      16,    18,    19,    62,    40,    35,    36,     0,    42,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
      43,    14,    27,     0,     0,     0,     0,     0,     0,     0,
      13,    28,    23,    24,    25,    26,    11,    63,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,   -51,   -22,   -51,     7,    -6,   -51,   -51,   -51,
      76,   -51,    58,   -51,   -51,   -51,   -51,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    19,    66,    87,   113,    24,    43,    78,    98,
      79,   108,   101,    64,    28,   106,    33,    76
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   121,   121,   121,   121,     3,    26,    40,    47,    48,
      34,    41,    42,    67,    68,    69,    70,    71,    82,    83,
      84,    85,    63,    82,    83,    84,    85,    82,    83,    84,
      85,    82,    83,    84,    85,    82,    83,    84,    85,    35,
      36,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    20,    21,    37,   122,   123,
     124,   125,    27,    86,    82,    83,    84,    85,    88,    73,
      74,    75,    89,    -2,     1,    38,    90,    73,    74,    75,
      91,    -2,    -2,    -2,    39,    -2,    44,    45,    22,    94,
      95,    96,    -2,    46,   110,    23,    77,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    93,     4,   117,    65,    92,
     114,   115,   116,    -2,     5,     6,     7,    72,     8,    29,
      30,    31,    32,    80,   -29,     9,   -30,   -32,   -31,    81,
      10,    11,    12,    13,    14,    15,    16,    17,    97,   100,
     102,   107,   103,    94,   104,   105,    18,   111,   112,   119,
     120,   126,   127,   128,    99,     0,   109,   118
};

static const yytype_int8 yycheck[] =
{
       6,     5,     5,     5,     5,     0,     4,     6,    13,    14,
       4,    61,    18,    35,    36,    37,    38,    39,    15,    16,
      17,    18,    28,    15,    16,    17,    18,    15,    16,    17,
      18,    15,    16,    17,    18,    15,    16,    17,    18,     4,
       4,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    13,    14,     4,    62,    62,
      62,    62,    60,    60,    15,    16,    17,    18,    60,    32,
      33,    34,    60,     0,     1,     4,    60,    32,    33,    34,
      60,     8,     9,    10,     4,    12,    60,    60,    46,    42,
      43,    44,    19,    11,   100,    53,     4,    24,    25,    26,
      27,    28,    29,    30,    31,     3,     0,    62,    60,    60,
     103,   104,   105,    40,     8,     9,    10,    60,    12,    20,
      21,    22,    23,    60,    60,    19,    60,    60,    60,    60,
      24,    25,    26,    27,    28,    29,    30,    31,     4,    45,
      61,    41,    61,    42,    61,    61,    40,    60,     5,     4,
      60,    60,     3,    42,    78,    -1,    98,   106
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    64,     0,     0,     8,     9,    10,    12,    19,
      24,    25,    26,    27,    28,    29,    30,    31,    40,    65,
      13,    14,    46,    53,    69,    69,     4,    60,    77,    20,
      21,    22,    23,    79,     4,     4,     4,     4,     4,     4,
       6,    61,    69,    70,    60,    60,    11,    13,    14,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    69,    76,    60,    66,    66,    66,    66,
      66,    66,    60,    32,    33,    34,    80,     4,    71,    73,
      60,    60,    15,    16,    17,    18,    60,    67,    60,    60,
      60,    60,    60,     3,    42,    43,    44,     4,    72,    73,
      45,    75,    61,    61,    61,    61,    78,    41,    74,    75,
      69,    60,     5,    68,    68,    68,    68,    62,    80,     4,
      60,     5,    62,    62,    62,    62,    60,     3,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    67,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      74,    74,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    79,    79,    79,    80,    80,
      80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     3,     3,     2,     4,     4,
       4,     7,     3,     6,     5,     4,     4,     4,     4,     4,
       3,     0,     2,     4,     4,     4,     4,     1,     2,     1,
       1,     1,     1,     0,     1,     2,     2,     0,     1,     3,
       0,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1
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
        yyerror (&yylloc, priv_data, chain, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, priv_data, chain); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, urj_svf_parser_priv_t *priv_data, urj_chain_t *chain)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (priv_data);
  YY_USE (chain);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, urj_svf_parser_priv_t *priv_data, urj_chain_t *chain)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, priv_data, chain);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, urj_svf_parser_priv_t *priv_data, urj_chain_t *chain)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), priv_data, chain);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, priv_data, chain); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, urj_svf_parser_priv_t *priv_data, urj_chain_t *chain)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (priv_data);
  YY_USE (chain);
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
yyparse (urj_svf_parser_priv_t *priv_data, urj_chain_t *chain)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, HACK);
    }

  if (yychar <= SVF_EOF)
    {
      yychar = SVF_EOF;
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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* svf_statement: ENDIR stable_state ';'  */
#line 111 "svf_bison.y"
    {
      urj_svf_endxr(priv_data, generic_ir, (yyvsp[-1].token));
    }
#line 1573 "y.tab.c"
    break;

  case 6: /* svf_statement: ENDDR stable_state ';'  */
#line 116 "svf_bison.y"
    {
      urj_svf_endxr(priv_data, generic_dr, (yyvsp[-1].token));
    }
#line 1581 "y.tab.c"
    break;

  case 7: /* svf_statement: FREQUENCY ';'  */
#line 121 "svf_bison.y"
      {
        urj_svf_frequency(chain, 0.0);
      }
#line 1589 "y.tab.c"
    break;

  case 8: /* svf_statement: FREQUENCY NUMBER HZ ';'  */
#line 126 "svf_bison.y"
      {
        urj_svf_frequency(chain, (yyvsp[-2].dvalue));
      }
#line 1597 "y.tab.c"
    break;

  case 9: /* svf_statement: HDR NUMBER ths_param_list ';'  */
#line 131 "svf_bison.y"
      {
        struct ths_params *p = &(priv_data->parser_params.ths_params);

        p->number = (yyvsp[-2].dvalue);
        urj_svf_hxr(generic_dr, p);
        urj_svf_free_ths_params(p);
      }
#line 1609 "y.tab.c"
    break;

  case 10: /* svf_statement: HIR NUMBER ths_param_list ';'  */
#line 140 "svf_bison.y"
      {
        struct ths_params *p = &(priv_data->parser_params.ths_params);

        p->number = (yyvsp[-2].dvalue);
        urj_svf_hxr(generic_ir, p);
        urj_svf_free_ths_params(p);
      }
#line 1621 "y.tab.c"
    break;

  case 11: /* svf_statement: PIOMAP '(' direction IDENTIFIER piomap_rec ')' ';'  */
#line 149 "svf_bison.y"
      {
        urj_log (URJ_LOG_LEVEL_ERROR, "PIOMAP not implemented\n");
        yyerror(&(yyloc), priv_data, chain, "PIOMAP");
        YYERROR;
      }
#line 1631 "y.tab.c"
    break;

  case 12: /* svf_statement: PIO VECTOR_STRING ';'  */
#line 156 "svf_bison.y"
      {
        free((yyvsp[-1].cvalue));
        urj_log (URJ_LOG_LEVEL_ERROR, "PIO not implemented\n");
        yyerror(&(yyloc), priv_data, chain, "PIO");
        YYERROR;
      }
#line 1642 "y.tab.c"
    break;

  case 13: /* svf_statement: RUNTEST runtest_run_state_opt runtest_clk_count runtest_time_opt runtest_end_state_opt ';'  */
#line 164 "svf_bison.y"
      {
        struct runtest *rt = &(priv_data->parser_params.runtest);

        rt->run_state = (yyvsp[-4].token);
        rt->run_count = (yyvsp[-3].tdval).dvalue;
        rt->run_clk   = (yyvsp[-3].tdval).token;
        rt->end_state = (yyvsp[-1].token);

        if (urj_svf_runtest(chain, priv_data, rt) != URJ_STATUS_OK) {
          yyerror(&(yyloc), priv_data, chain, "RUNTEST");
          YYERROR;
        }
      }
#line 1660 "y.tab.c"
    break;

  case 14: /* svf_statement: RUNTEST runtest_run_state_opt runtest_time runtest_end_state_opt ';'  */
#line 179 "svf_bison.y"
      {
        struct runtest *rt = &(priv_data->parser_params.runtest);

        rt->run_state = (yyvsp[-3].token);
        rt->run_count = 0;
        rt->run_clk   = 0;
        rt->end_state = (yyvsp[-1].token);

        if (urj_svf_runtest(chain, priv_data, rt) != URJ_STATUS_OK) {
          yyerror(&(yyloc), priv_data, chain, "RUNTEST");
          YYERROR;
        }
      }
#line 1678 "y.tab.c"
    break;

  case 15: /* svf_statement: SDR NUMBER ths_param_list ';'  */
#line 194 "svf_bison.y"
      {
        struct ths_params *p = &(priv_data->parser_params.ths_params);
        int result;

        p->number = (yyvsp[-2].dvalue);
        result = urj_svf_sxr(chain, priv_data, generic_dr, p, &(yyloc));
        urj_svf_free_ths_params(p);

        if (result != URJ_STATUS_OK) {
          yyerror(&(yyloc), priv_data, chain, "SDR");
          YYERROR;
        }
      }
#line 1696 "y.tab.c"
    break;

  case 16: /* svf_statement: SIR NUMBER ths_param_list ';'  */
#line 209 "svf_bison.y"
      {
        struct ths_params *p = &(priv_data->parser_params.ths_params);
        int result;

        p->number = (yyvsp[-2].dvalue);
        result = urj_svf_sxr(chain, priv_data, generic_ir, p, &(yyloc));
        urj_svf_free_ths_params(p);

        if (result != URJ_STATUS_OK) {
          yyerror(&(yyloc), priv_data, chain, "SIR");
          YYERROR;
        }
      }
#line 1714 "y.tab.c"
    break;

  case 17: /* svf_statement: STATE path_states stable_state ';'  */
#line 224 "svf_bison.y"
      {
        if (urj_svf_state(chain, priv_data, &(priv_data->parser_params.path_states), (yyvsp[-1].token)) != URJ_STATUS_OK) {
          yyerror(&(yyloc), priv_data, chain, "STATE");
          YYERROR;
        }
      }
#line 1725 "y.tab.c"
    break;

  case 18: /* svf_statement: TDR NUMBER ths_param_list ';'  */
#line 232 "svf_bison.y"
      {
        struct ths_params *p = &(priv_data->parser_params.ths_params);
        int result;

        p->number = (yyvsp[-2].dvalue);
        result = urj_svf_txr(generic_dr, p);
        urj_svf_free_ths_params(p);

        if (result != URJ_STATUS_OK) {
          yyerror(&(yyloc), priv_data, chain, "TDR");
          YYERROR;
        }
      }
#line 1743 "y.tab.c"
    break;

  case 19: /* svf_statement: TIR NUMBER ths_param_list ';'  */
#line 247 "svf_bison.y"
      {
        struct ths_params *p = &(priv_data->parser_params.ths_params);
        int result;

        p->number = (yyvsp[-2].dvalue);
        result = urj_svf_txr(generic_ir, p);
        urj_svf_free_ths_params(p);

        if (result != URJ_STATUS_OK) {
          yyerror(&(yyloc), priv_data, chain, "TIR");
          YYERROR;
        }
      }
#line 1761 "y.tab.c"
    break;

  case 20: /* svf_statement: TRST trst_mode ';'  */
#line 262 "svf_bison.y"
    {
      if (urj_svf_trst(chain, priv_data, (yyvsp[-1].token)) != URJ_STATUS_OK) {
        yyerror(&(yyloc), priv_data, chain, "TRST");
        YYERROR;
      }
    }
#line 1772 "y.tab.c"
    break;

  case 23: /* ths_opt_param: TDI '(' hexa_num_sequence ')'  */
#line 278 "svf_bison.y"
              {
                priv_data->parser_params.ths_params.tdi = (yyvsp[-1].hexa_frag).buf;
              }
#line 1780 "y.tab.c"
    break;

  case 24: /* ths_opt_param: TDO '(' hexa_num_sequence ')'  */
#line 283 "svf_bison.y"
              {
                priv_data->parser_params.ths_params.tdo = (yyvsp[-1].hexa_frag).buf;
              }
#line 1788 "y.tab.c"
    break;

  case 25: /* ths_opt_param: MASK '(' hexa_num_sequence ')'  */
#line 288 "svf_bison.y"
              {
                priv_data->parser_params.ths_params.mask = (yyvsp[-1].hexa_frag).buf;
              }
#line 1796 "y.tab.c"
    break;

  case 26: /* ths_opt_param: SMASK '(' hexa_num_sequence ')'  */
#line 293 "svf_bison.y"
              {
                priv_data->parser_params.ths_params.smask = (yyvsp[-1].hexa_frag).buf;
              }
#line 1804 "y.tab.c"
    break;

  case 27: /* hexa_num_sequence: HEXA_NUM_FRAGMENT  */
#line 300 "svf_bison.y"
             {
                 (yyval.hexa_frag).buf    = (yyvsp[0].cvalue);
                 (yyval.hexa_frag).strlen = strlen ((yyvsp[0].cvalue));
                 (yyval.hexa_frag).buflen = (yyval.hexa_frag).strlen + 1;
             }
#line 1814 "y.tab.c"
    break;

  case 28: /* hexa_num_sequence: hexa_num_sequence HEXA_NUM_FRAGMENT  */
#line 306 "svf_bison.y"
             {
#define REALLOC_STEP (1 << 16)
                 size_t frag_len = strlen ((yyvsp[0].cvalue));
                 size_t req_len = (yyvsp[-1].hexa_frag).strlen + frag_len;
                 if ((yyvsp[-1].hexa_frag).buflen <= req_len) {
                     size_t newlen = req_len - (yyvsp[-1].hexa_frag).buflen < REALLOC_STEP ?
                         (yyvsp[-1].hexa_frag).buflen + REALLOC_STEP : req_len + 1;
                     (yyvsp[-1].hexa_frag).buf = (char *)realloc ((yyvsp[-1].hexa_frag).buf, newlen);
                     (yyvsp[-1].hexa_frag).buflen = newlen;
                 }
                 if ((yyvsp[-1].hexa_frag).buf != NULL) {
                     memcpy ((yyvsp[-1].hexa_frag).buf + (yyvsp[-1].hexa_frag).strlen, (yyvsp[0].cvalue), frag_len + 1);
                     (yyvsp[-1].hexa_frag).strlen += frag_len;
                 }
                 free ((yyvsp[0].cvalue));
                 (yyval.hexa_frag) = (yyvsp[-1].hexa_frag);
             }
#line 1836 "y.tab.c"
    break;

  case 33: /* runtest_run_state_opt: %empty  */
#line 333 "svf_bison.y"
              { (yyval.token) = 0; }
#line 1842 "y.tab.c"
    break;

  case 34: /* runtest_run_state_opt: stable_state  */
#line 335 "svf_bison.y"
              {
                (yyval.token) = (yyvsp[0].token);
              }
#line 1850 "y.tab.c"
    break;

  case 35: /* runtest_clk_count: NUMBER TCK  */
#line 342 "svf_bison.y"
              {
                (yyval.tdval).token  = (yyvsp[0].token);
                (yyval.tdval).dvalue = (yyvsp[-1].dvalue);
              }
#line 1859 "y.tab.c"
    break;

  case 36: /* runtest_clk_count: NUMBER SCK  */
#line 348 "svf_bison.y"
              {
                (yyval.tdval).token  = (yyvsp[0].token);
                (yyval.tdval).dvalue = (yyvsp[-1].dvalue);
              }
#line 1868 "y.tab.c"
    break;

  case 37: /* runtest_time_opt: %empty  */
#line 356 "svf_bison.y"
              {
                priv_data->parser_params.runtest.min_time = 0.0;
                priv_data->parser_params.runtest.max_time = 0.0;
              }
#line 1877 "y.tab.c"
    break;

  case 39: /* runtest_time: NUMBER SEC runtest_max_time_opt  */
#line 366 "svf_bison.y"
              {
                priv_data->parser_params.runtest.min_time = (yyvsp[-2].dvalue);
              }
#line 1885 "y.tab.c"
    break;

  case 40: /* runtest_max_time_opt: %empty  */
#line 373 "svf_bison.y"
              {
                priv_data->parser_params.runtest.max_time = 0.0;
              }
#line 1893 "y.tab.c"
    break;

  case 41: /* runtest_max_time_opt: MAXIMUM NUMBER SEC  */
#line 377 "svf_bison.y"
              {
                priv_data->parser_params.runtest.max_time = (yyvsp[-1].dvalue);
              }
#line 1901 "y.tab.c"
    break;

  case 42: /* runtest_end_state_opt: %empty  */
#line 383 "svf_bison.y"
              { (yyval.token) = 0; }
#line 1907 "y.tab.c"
    break;

  case 43: /* runtest_end_state_opt: ENDSTATE stable_state  */
#line 385 "svf_bison.y"
              {
                (yyval.token) = (yyvsp[0].token);
              }
#line 1915 "y.tab.c"
    break;

  case 60: /* path_states: %empty  */
#line 411 "svf_bison.y"
              {
                priv_data->parser_params.path_states.num_states = 0;
              }
#line 1923 "y.tab.c"
    break;

  case 61: /* path_states: path_states all_states  */
#line 416 "svf_bison.y"
              {
                struct path_states *ps = &(priv_data->parser_params.path_states);

                if (ps->num_states < MAX_PATH_STATES) {
                  ps->states[ps->num_states] = (yyvsp[0].token);
                  ps->num_states++;
                } else
                  urj_log (URJ_LOG_LEVEL_ERROR, "Error %s: maximum number of %d path states reached.\n",
                        "svf", MAX_PATH_STATES);
              }
#line 1938 "y.tab.c"
    break;


#line 1942 "y.tab.c"

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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, priv_data, chain, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SVF_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SVF_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, priv_data, chain);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, priv_data, chain);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, priv_data, chain, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, priv_data, chain);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, priv_data, chain);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 446 "svf_bison.y"
 void
yyerror (YYLTYPE *locp, urj_svf_parser_priv_t *priv_data, urj_chain_t *chain,
         const char *error_string)
{
    urj_log (URJ_LOG_LEVEL_ERROR, "Error occurred for SVF command, line %d, column %d-%d:\n %s.\n",
             locp->first_line, locp->first_column, locp->last_column, error_string);
}


static void
urj_svf_free_ths_params (struct ths_params *params)
{
    params->number = 0.0;

    if (params->tdi)
    {
        free (params->tdi);
        params->tdi = NULL;
    }
    if (params->tdo)
    {
        free (params->tdo);
        params->tdo = NULL;
    }
    if (params->mask)
    {
        free (params->mask);
        params->mask = NULL;
    }
    if (params->smask)
    {
        free (params->smask);
        params->smask = NULL;
    }
}


int
urj_svf_bison_init (urj_svf_parser_priv_t *priv_data, FILE *f, int num_lines)
{
    const struct svf_parser_params params = {
        {0.0, NULL, NULL, NULL, NULL},
        {{}, 0},
        {0, 0.0, 0, 0, 0, 0}
    };

    priv_data->parser_params = params;

    if ((priv_data->scanner =
         urj_svf_flex_init (f, num_lines)) == NULL)
        return 0;
    else
        return 1;
}


void
urj_svf_bison_deinit (urj_svf_parser_priv_t *priv_data)
{
    urj_svf_flex_deinit (priv_data->scanner);
}
