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

/* Substitute the type names.  */
#define YYSTYPE         URJ_BSDL_STYPE
/* Substitute the variable and function names.  */
#define yyparse         urj_bsdl_parse
#define yylex           urj_bsdl_lex
#define yyerror         urj_bsdl_error
#define yydebug         urj_bsdl_debug
#define yynerrs         urj_bsdl_nerrs

/* First part of user prologue.  */
#line 127 "bsdl_bison.y"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include "bsdl_sysdep.h"

#include "bsdl_types.h"
#include "bsdl_msg.h"

/* interface to flex */
#include "bsdl_bison.tab.h"
#include "bsdl_parser.h"

#ifdef DMALLOC
#include "dmalloc.h"
#endif

#define HACK priv_data->scanner
int yylex (YYSTYPE *, void *);

#if 1
#define ERROR_LIMIT 0
#define BUMP_ERROR \
    do { \
        if (urj_bsdl_flex_postinc_compile_errors (priv_data->scanner) > ERROR_LIMIT) \
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

static void Print_Error (urj_bsdl_parser_priv_t *, const char *);
static void Print_Warning (urj_bsdl_parser_priv_t *, const char *);
static void Give_Up_And_Quit (urj_bsdl_parser_priv_t *);

/* semantic functions */
static void add_instruction (urj_bsdl_parser_priv_t *, char *, char *);
static void ac_set_register (urj_bsdl_parser_priv_t *, char *, int);
static void ac_add_instruction (urj_bsdl_parser_priv_t *, char *);
static void ac_apply_assoc (urj_bsdl_parser_priv_t *);
static void prt_add_name (urj_bsdl_parser_priv_t *, char *);
static void prt_add_bit (urj_bsdl_parser_priv_t *);
static void prt_add_range (urj_bsdl_parser_priv_t *, int, int);
static void ci_no_disable (urj_bsdl_parser_priv_t *);
static void ci_set_cell_spec_disable (urj_bsdl_parser_priv_t *, int, int,
                                      int);
static void ci_set_cell_spec (urj_bsdl_parser_priv_t *, int, char *);
static void ci_append_cell_info (urj_bsdl_parser_priv_t *, int);

void yyerror (urj_bsdl_parser_priv_t *, const char *);

#line 138 "bsdl_bison.tab.c"

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

#include "bsdl_bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONSTANT = 3,                   /* CONSTANT  */
  YYSYMBOL_PIN_MAP = 4,                    /* PIN_MAP  */
  YYSYMBOL_PHYSICAL_PIN_MAP = 5,           /* PHYSICAL_PIN_MAP  */
  YYSYMBOL_PIN_MAP_STRING = 6,             /* PIN_MAP_STRING  */
  YYSYMBOL_TAP_SCAN_IN = 7,                /* TAP_SCAN_IN  */
  YYSYMBOL_TAP_SCAN_OUT = 8,               /* TAP_SCAN_OUT  */
  YYSYMBOL_TAP_SCAN_MODE = 9,              /* TAP_SCAN_MODE  */
  YYSYMBOL_TAP_SCAN_RESET = 10,            /* TAP_SCAN_RESET  */
  YYSYMBOL_TAP_SCAN_CLOCK = 11,            /* TAP_SCAN_CLOCK  */
  YYSYMBOL_INSTRUCTION_LENGTH = 12,        /* INSTRUCTION_LENGTH  */
  YYSYMBOL_INSTRUCTION_OPCODE = 13,        /* INSTRUCTION_OPCODE  */
  YYSYMBOL_INSTRUCTION_CAPTURE = 14,       /* INSTRUCTION_CAPTURE  */
  YYSYMBOL_INSTRUCTION_DISABLE = 15,       /* INSTRUCTION_DISABLE  */
  YYSYMBOL_INSTRUCTION_GUARD = 16,         /* INSTRUCTION_GUARD  */
  YYSYMBOL_INSTRUCTION_PRIVATE = 17,       /* INSTRUCTION_PRIVATE  */
  YYSYMBOL_REGISTER_ACCESS = 18,           /* REGISTER_ACCESS  */
  YYSYMBOL_BOUNDARY_LENGTH = 19,           /* BOUNDARY_LENGTH  */
  YYSYMBOL_BOUNDARY_REGISTER = 20,         /* BOUNDARY_REGISTER  */
  YYSYMBOL_IDCODE_REGISTER = 21,           /* IDCODE_REGISTER  */
  YYSYMBOL_USERCODE_REGISTER = 22,         /* USERCODE_REGISTER  */
  YYSYMBOL_BOUNDARY = 23,                  /* BOUNDARY  */
  YYSYMBOL_DEVICE_ID = 24,                 /* DEVICE_ID  */
  YYSYMBOL_INPUT = 25,                     /* INPUT  */
  YYSYMBOL_OUTPUT2 = 26,                   /* OUTPUT2  */
  YYSYMBOL_OUTPUT3 = 27,                   /* OUTPUT3  */
  YYSYMBOL_CONTROL = 28,                   /* CONTROL  */
  YYSYMBOL_CONTROLR = 29,                  /* CONTROLR  */
  YYSYMBOL_INTERNAL = 30,                  /* INTERNAL  */
  YYSYMBOL_CLOCK = 31,                     /* CLOCK  */
  YYSYMBOL_BIDIR = 32,                     /* BIDIR  */
  YYSYMBOL_BIDIR_IN = 33,                  /* BIDIR_IN  */
  YYSYMBOL_BIDIR_OUT = 34,                 /* BIDIR_OUT  */
  YYSYMBOL_Z = 35,                         /* Z  */
  YYSYMBOL_WEAK0 = 36,                     /* WEAK0  */
  YYSYMBOL_WEAK1 = 37,                     /* WEAK1  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_PULL0 = 39,                     /* PULL0  */
  YYSYMBOL_PULL1 = 40,                     /* PULL1  */
  YYSYMBOL_KEEPER = 41,                    /* KEEPER  */
  YYSYMBOL_DECIMAL_NUMBER = 42,            /* DECIMAL_NUMBER  */
  YYSYMBOL_BINARY_PATTERN = 43,            /* BINARY_PATTERN  */
  YYSYMBOL_BIN_X_PATTERN = 44,             /* BIN_X_PATTERN  */
  YYSYMBOL_COMMA = 45,                     /* COMMA  */
  YYSYMBOL_LPAREN = 46,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 47,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 48,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 49,                  /* RBRACKET  */
  YYSYMBOL_COLON = 50,                     /* COLON  */
  YYSYMBOL_ASTERISK = 51,                  /* ASTERISK  */
  YYSYMBOL_COMPLIANCE_PATTERNS = 52,       /* COMPLIANCE_PATTERNS  */
  YYSYMBOL_OBSERVE_ONLY = 53,              /* OBSERVE_ONLY  */
  YYSYMBOL_BYPASS = 54,                    /* BYPASS  */
  YYSYMBOL_CLAMP = 55,                     /* CLAMP  */
  YYSYMBOL_EXTEST = 56,                    /* EXTEST  */
  YYSYMBOL_HIGHZ = 57,                     /* HIGHZ  */
  YYSYMBOL_IDCODE = 58,                    /* IDCODE  */
  YYSYMBOL_INTEST = 59,                    /* INTEST  */
  YYSYMBOL_PRELOAD = 60,                   /* PRELOAD  */
  YYSYMBOL_RUNBIST = 61,                   /* RUNBIST  */
  YYSYMBOL_SAMPLE = 62,                    /* SAMPLE  */
  YYSYMBOL_USERCODE = 63,                  /* USERCODE  */
  YYSYMBOL_COMPONENT_CONFORMANCE = 64,     /* COMPONENT_CONFORMANCE  */
  YYSYMBOL_STD_1149_1_1990 = 65,           /* STD_1149_1_1990  */
  YYSYMBOL_STD_1149_1_1993 = 66,           /* STD_1149_1_1993  */
  YYSYMBOL_STD_1149_1_2001 = 67,           /* STD_1149_1_2001  */
  YYSYMBOL_ISC_CONFORMANCE = 68,           /* ISC_CONFORMANCE  */
  YYSYMBOL_STD_1532_2001 = 69,             /* STD_1532_2001  */
  YYSYMBOL_STD_1532_2002 = 70,             /* STD_1532_2002  */
  YYSYMBOL_ISC_PIN_BEHAVIOR = 71,          /* ISC_PIN_BEHAVIOR  */
  YYSYMBOL_ISC_FIXED_SYSTEM_PINS = 72,     /* ISC_FIXED_SYSTEM_PINS  */
  YYSYMBOL_ISC_STATUS = 73,                /* ISC_STATUS  */
  YYSYMBOL_IMPLEMENTED = 74,               /* IMPLEMENTED  */
  YYSYMBOL_ISC_BLANK_USERCODE = 75,        /* ISC_BLANK_USERCODE  */
  YYSYMBOL_ISC_SECURITY = 76,              /* ISC_SECURITY  */
  YYSYMBOL_ISC_DISABLE_READ = 77,          /* ISC_DISABLE_READ  */
  YYSYMBOL_ISC_DISABLE_PROGRAM = 78,       /* ISC_DISABLE_PROGRAM  */
  YYSYMBOL_ISC_DISABLE_ERASE = 79,         /* ISC_DISABLE_ERASE  */
  YYSYMBOL_ISC_DISABLE_KEY = 80,           /* ISC_DISABLE_KEY  */
  YYSYMBOL_ISC_FLOW = 81,                  /* ISC_FLOW  */
  YYSYMBOL_UNPROCESSED = 82,               /* UNPROCESSED  */
  YYSYMBOL_EXIT_ON_ERROR = 83,             /* EXIT_ON_ERROR  */
  YYSYMBOL_ARRAY = 84,                     /* ARRAY  */
  YYSYMBOL_SECURITY = 85,                  /* SECURITY  */
  YYSYMBOL_INITIALIZE = 86,                /* INITIALIZE  */
  YYSYMBOL_REPEAT = 87,                    /* REPEAT  */
  YYSYMBOL_TERMINATE = 88,                 /* TERMINATE  */
  YYSYMBOL_LOOP = 89,                      /* LOOP  */
  YYSYMBOL_MIN = 90,                       /* MIN  */
  YYSYMBOL_MAX = 91,                       /* MAX  */
  YYSYMBOL_DOLLAR = 92,                    /* DOLLAR  */
  YYSYMBOL_EQUAL = 93,                     /* EQUAL  */
  YYSYMBOL_HEX_STRING = 94,                /* HEX_STRING  */
  YYSYMBOL_WAIT = 95,                      /* WAIT  */
  YYSYMBOL_REAL_NUMBER = 96,               /* REAL_NUMBER  */
  YYSYMBOL_PLUS = 97,                      /* PLUS  */
  YYSYMBOL_MINUS = 98,                     /* MINUS  */
  YYSYMBOL_SH_RIGHT = 99,                  /* SH_RIGHT  */
  YYSYMBOL_SH_LEFT = 100,                  /* SH_LEFT  */
  YYSYMBOL_TILDE = 101,                    /* TILDE  */
  YYSYMBOL_QUESTION_MARK = 102,            /* QUESTION_MARK  */
  YYSYMBOL_EXCLAMATION_MARK = 103,         /* EXCLAMATION_MARK  */
  YYSYMBOL_QUESTION_EXCLAMATION = 104,     /* QUESTION_EXCLAMATION  */
  YYSYMBOL_CRC = 105,                      /* CRC  */
  YYSYMBOL_OST = 106,                      /* OST  */
  YYSYMBOL_ISC_PROCEDURE = 107,            /* ISC_PROCEDURE  */
  YYSYMBOL_ISC_ACTION = 108,               /* ISC_ACTION  */
  YYSYMBOL_PROPRIETARY = 109,              /* PROPRIETARY  */
  YYSYMBOL_OPTIONAL = 110,                 /* OPTIONAL  */
  YYSYMBOL_RECOMMENDED = 111,              /* RECOMMENDED  */
  YYSYMBOL_ISC_ILLEGAL_EXIT = 112,         /* ISC_ILLEGAL_EXIT  */
  YYSYMBOL_ILLEGAL = 113,                  /* ILLEGAL  */
  YYSYMBOL_YYACCEPT = 114,                 /* $accept  */
  YYSYMBOL_BSDL_Statement = 115,           /* BSDL_Statement  */
  YYSYMBOL_BSDL_Pin_Map = 116,             /* BSDL_Pin_Map  */
  YYSYMBOL_BSDL_Map_String = 117,          /* BSDL_Map_String  */
  YYSYMBOL_Pin_Mapping = 118,              /* Pin_Mapping  */
  YYSYMBOL_Physical_Pin_Desc = 119,        /* Physical_Pin_Desc  */
  YYSYMBOL_Physical_Pin_List = 120,        /* Physical_Pin_List  */
  YYSYMBOL_Physical_Pin = 121,             /* Physical_Pin  */
  YYSYMBOL_BSDL_Tap_Scan_In = 122,         /* BSDL_Tap_Scan_In  */
  YYSYMBOL_BSDL_Tap_Scan_Out = 123,        /* BSDL_Tap_Scan_Out  */
  YYSYMBOL_BSDL_Tap_Scan_Mode = 124,       /* BSDL_Tap_Scan_Mode  */
  YYSYMBOL_BSDL_Tap_Scan_Reset = 125,      /* BSDL_Tap_Scan_Reset  */
  YYSYMBOL_BSDL_Tap_Scan_Clock = 126,      /* BSDL_Tap_Scan_Clock  */
  YYSYMBOL_BSDL_Inst_Length = 127,         /* BSDL_Inst_Length  */
  YYSYMBOL_BSDL_Opcode = 128,              /* BSDL_Opcode  */
  YYSYMBOL_BSDL_Opcode_Table = 129,        /* BSDL_Opcode_Table  */
  YYSYMBOL_Opcode_Desc = 130,              /* Opcode_Desc  */
  YYSYMBOL_Binary_Pattern_List = 131,      /* Binary_Pattern_List  */
  YYSYMBOL_Binary_Pattern = 132,           /* Binary_Pattern  */
  YYSYMBOL_BSDL_Inst_Capture = 133,        /* BSDL_Inst_Capture  */
  YYSYMBOL_BSDL_Inst_Disable = 134,        /* BSDL_Inst_Disable  */
  YYSYMBOL_BSDL_Inst_Guard = 135,          /* BSDL_Inst_Guard  */
  YYSYMBOL_BSDL_Inst_Private = 136,        /* BSDL_Inst_Private  */
  YYSYMBOL_Private_Opcode_List = 137,      /* Private_Opcode_List  */
  YYSYMBOL_Private_Opcode = 138,           /* Private_Opcode  */
  YYSYMBOL_BSDL_Idcode_Register = 139,     /* BSDL_Idcode_Register  */
  YYSYMBOL_BSDL_Usercode_Register = 140,   /* BSDL_Usercode_Register  */
  YYSYMBOL_BSDL_Register_Access = 141,     /* BSDL_Register_Access  */
  YYSYMBOL_Register_String = 142,          /* Register_String  */
  YYSYMBOL_Register_Assoc = 143,           /* Register_Assoc  */
  YYSYMBOL_Register_Decl = 144,            /* Register_Decl  */
  YYSYMBOL_Standard_Reg = 145,             /* Standard_Reg  */
  YYSYMBOL_Reg_Opcode_List = 146,          /* Reg_Opcode_List  */
  YYSYMBOL_Instruction_Name = 147,         /* Instruction_Name  */
  YYSYMBOL_Reg_Opcode = 148,               /* Reg_Opcode  */
  YYSYMBOL_BSDL_Boundary_Length = 149,     /* BSDL_Boundary_Length  */
  YYSYMBOL_BSDL_Boundary_Register = 150,   /* BSDL_Boundary_Register  */
  YYSYMBOL_BSDL_Cell_Table = 151,          /* BSDL_Cell_Table  */
  YYSYMBOL_Cell_Entry = 152,               /* Cell_Entry  */
  YYSYMBOL_Cell_Info = 153,                /* Cell_Info  */
  YYSYMBOL_Cell_Spec = 154,                /* Cell_Spec  */
  YYSYMBOL_Port_Name = 155,                /* Port_Name  */
  YYSYMBOL_Cell_Function = 156,            /* Cell_Function  */
  YYSYMBOL_Safe_Value = 157,               /* Safe_Value  */
  YYSYMBOL_Disable_Spec = 158,             /* Disable_Spec  */
  YYSYMBOL_Disable_Value = 159,            /* Disable_Value  */
  YYSYMBOL_BSDL_Compliance_Patterns = 160, /* BSDL_Compliance_Patterns  */
  YYSYMBOL_BSDL_Compliance_Pattern = 161,  /* BSDL_Compliance_Pattern  */
  YYSYMBOL_162_1 = 162,                    /* $@1  */
  YYSYMBOL_Bin_X_Pattern_List = 163,       /* Bin_X_Pattern_List  */
  YYSYMBOL_BSDL_Component_Conformance = 164, /* BSDL_Component_Conformance  */
  YYSYMBOL_ISC_Extension = 165,            /* ISC_Extension  */
  YYSYMBOL_ISC_Conformance = 166,          /* ISC_Conformance  */
  YYSYMBOL_ISC_Pin_Behavior = 167,         /* ISC_Pin_Behavior  */
  YYSYMBOL_Pin_Behavior_Option = 168,      /* Pin_Behavior_Option  */
  YYSYMBOL_ISC_Fixed_System_Pins = 169,    /* ISC_Fixed_System_Pins  */
  YYSYMBOL_Fixed_Pin_List = 170,           /* Fixed_Pin_List  */
  YYSYMBOL_Port_Id = 171,                  /* Port_Id  */
  YYSYMBOL_ISC_Status = 172,               /* ISC_Status  */
  YYSYMBOL_Status_Modifier = 173,          /* Status_Modifier  */
  YYSYMBOL_ISC_Blank_Usercode = 174,       /* ISC_Blank_Usercode  */
  YYSYMBOL_ISC_Security = 175,             /* ISC_Security  */
  YYSYMBOL_Protection_Spec = 176,          /* Protection_Spec  */
  YYSYMBOL_Read_Spec = 177,                /* Read_Spec  */
  YYSYMBOL_Program_Spec = 178,             /* Program_Spec  */
  YYSYMBOL_Erase_Spec = 179,               /* Erase_Spec  */
  YYSYMBOL_Key_Spec = 180,                 /* Key_Spec  */
  YYSYMBOL_Bit_Spec = 181,                 /* Bit_Spec  */
  YYSYMBOL_Bit_Range = 182,                /* Bit_Range  */
  YYSYMBOL_ISC_Flow = 183,                 /* ISC_Flow  */
  YYSYMBOL_Flow_Definition_List = 184,     /* Flow_Definition_List  */
  YYSYMBOL_Flow_Definition = 185,          /* Flow_Definition  */
  YYSYMBOL_Flow_Descriptor = 186,          /* Flow_Descriptor  */
  YYSYMBOL_Data_Name = 187,                /* Data_Name  */
  YYSYMBOL_Standard_Data_Name = 188,       /* Standard_Data_Name  */
  YYSYMBOL_Initialize_Block = 189,         /* Initialize_Block  */
  YYSYMBOL_Repeat_Block = 190,             /* Repeat_Block  */
  YYSYMBOL_Terminate_Block = 191,          /* Terminate_Block  */
  YYSYMBOL_Activity_List = 192,            /* Activity_List  */
  YYSYMBOL_Activity_Element = 193,         /* Activity_Element  */
  YYSYMBOL_Loop_Block = 194,               /* Loop_Block  */
  YYSYMBOL_Loop_Min_Spec = 195,            /* Loop_Min_Spec  */
  YYSYMBOL_Loop_Max_Spec = 196,            /* Loop_Max_Spec  */
  YYSYMBOL_Loop_Activity_List = 197,       /* Loop_Activity_List  */
  YYSYMBOL_Activity = 198,                 /* Activity  */
  YYSYMBOL_Update_Field_List = 199,        /* Update_Field_List  */
  YYSYMBOL_Update_Field = 200,             /* Update_Field  */
  YYSYMBOL_201_2 = 201,                    /* $@2  */
  YYSYMBOL_Data_Expression = 202,          /* Data_Expression  */
  YYSYMBOL_Variable_Expression = 203,      /* Variable_Expression  */
  YYSYMBOL_Variable_Assignment = 204,      /* Variable_Assignment  */
  YYSYMBOL_205_3 = 205,                    /* $@3  */
  YYSYMBOL_Variable_Update = 206,          /* Variable_Update  */
  YYSYMBOL_Input_Specifier = 207,          /* Input_Specifier  */
  YYSYMBOL_Capture_Field_List = 208,       /* Capture_Field_List  */
  YYSYMBOL_Capture_Field = 209,            /* Capture_Field  */
  YYSYMBOL_210_4 = 210,                    /* $@4  */
  YYSYMBOL_Capture_Field_Rest = 211,       /* Capture_Field_Rest  */
  YYSYMBOL_Capture_Specification = 212,    /* Capture_Specification  */
  YYSYMBOL_Expected_Data = 213,            /* Expected_Data  */
  YYSYMBOL_Compare_Mask = 214,             /* Compare_Mask  */
  YYSYMBOL_Wait_Specification = 215,       /* Wait_Specification  */
  YYSYMBOL_Duration_Specification = 216,   /* Duration_Specification  */
  YYSYMBOL_Clock_Cycles = 217,             /* Clock_Cycles  */
  YYSYMBOL_Variable = 218,                 /* Variable  */
  YYSYMBOL_Binary_Operator = 219,          /* Binary_Operator  */
  YYSYMBOL_Complement_Operator = 220,      /* Complement_Operator  */
  YYSYMBOL_Input_Operator = 221,           /* Input_Operator  */
  YYSYMBOL_Output_Operator = 222,          /* Output_Operator  */
  YYSYMBOL_IO_Operator = 223,              /* IO_Operator  */
  YYSYMBOL_CRC_Tag = 224,                  /* CRC_Tag  */
  YYSYMBOL_OST_Tag = 225,                  /* OST_Tag  */
  YYSYMBOL_ISC_Procedure = 226,            /* ISC_Procedure  */
  YYSYMBOL_Procedure_List = 227,           /* Procedure_List  */
  YYSYMBOL_Procedure = 228,                /* Procedure  */
  YYSYMBOL_Flow_Descriptor_List = 229,     /* Flow_Descriptor_List  */
  YYSYMBOL_ISC_Action = 230,               /* ISC_Action  */
  YYSYMBOL_Action_List = 231,              /* Action_List  */
  YYSYMBOL_Action = 232,                   /* Action  */
  YYSYMBOL_Action_Specification_List = 233, /* Action_Specification_List  */
  YYSYMBOL_Action_Specification = 234,     /* Action_Specification  */
  YYSYMBOL_Option_Specification = 235,     /* Option_Specification  */
  YYSYMBOL_ISC_Illegal_Exit = 236,         /* ISC_Illegal_Exit  */
  YYSYMBOL_Exit_Instruction_List = 237     /* Exit_Instruction_List  */
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
         || (defined URJ_BSDL_STYPE_IS_TRIVIAL && URJ_BSDL_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  138
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  285
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  441

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   368


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113
};

#if URJ_BSDL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   247,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   277,   281,   282,   284,   287,   288,
     290,   291,   293,   295,   297,   301,   305,   309,   313,   317,
     321,   326,   328,   329,   330,   338,   341,   343,   351,   356,
     361,   366,   371,   373,   374,   375,   382,   387,   392,   397,
     399,   400,   402,   405,   407,   410,   412,   414,   416,   418,
     421,   422,   424,   426,   428,   430,   432,   434,   436,   438,
     440,   442,   444,   447,   453,   458,   460,   461,   462,   466,
     469,   471,   473,   480,   485,   490,   496,   498,   500,   502,
     504,   506,   508,   510,   512,   515,   517,   527,   530,   532,
     534,   536,   538,   540,   545,   548,   547,   551,   553,   558,
     560,   562,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   578,   579,   582,   584,   585,   586,   594,   596,
     597,   598,   605,   607,   611,   613,   614,   618,   622,   624,
     625,   632,   634,   636,   638,   640,   641,   643,   644,   647,
     649,   650,   652,   653,   654,   655,   656,   657,   658,   659,
     666,   668,   670,   672,   674,   676,   678,   681,   682,   685,
     685,   685,   685,   685,   687,   689,   691,   693,   694,   696,
     697,   699,   701,   702,   704,   706,   707,   709,   711,   713,
     715,   718,   719,   721,   723,   722,   727,   729,   730,   732,
     733,   734,   737,   736,   743,   745,   746,   748,   749,   751,
     752,   755,   754,   759,   760,   761,   762,   764,   765,   767,
     768,   769,   770,   772,   773,   774,   775,   777,   778,   779,
     781,   782,   784,   787,   789,   792,   794,   796,   798,   801,
     803,   805,   807,   809,   811,   814,   816,   817,   819,   821,
     823,   830,   831,   834,   836,   837,   839,   841,   843,   845,
     847,   854,   855,   857,   859,   861,   863,   865,   867,   869,
     871,   874,   874,   877,   879,   881
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if URJ_BSDL_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CONSTANT", "PIN_MAP",
  "PHYSICAL_PIN_MAP", "PIN_MAP_STRING", "TAP_SCAN_IN", "TAP_SCAN_OUT",
  "TAP_SCAN_MODE", "TAP_SCAN_RESET", "TAP_SCAN_CLOCK",
  "INSTRUCTION_LENGTH", "INSTRUCTION_OPCODE", "INSTRUCTION_CAPTURE",
  "INSTRUCTION_DISABLE", "INSTRUCTION_GUARD", "INSTRUCTION_PRIVATE",
  "REGISTER_ACCESS", "BOUNDARY_LENGTH", "BOUNDARY_REGISTER",
  "IDCODE_REGISTER", "USERCODE_REGISTER", "BOUNDARY", "DEVICE_ID", "INPUT",
  "OUTPUT2", "OUTPUT3", "CONTROL", "CONTROLR", "INTERNAL", "CLOCK",
  "BIDIR", "BIDIR_IN", "BIDIR_OUT", "Z", "WEAK0", "WEAK1", "IDENTIFIER",
  "PULL0", "PULL1", "KEEPER", "DECIMAL_NUMBER", "BINARY_PATTERN",
  "BIN_X_PATTERN", "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "COLON", "ASTERISK", "COMPLIANCE_PATTERNS", "OBSERVE_ONLY", "BYPASS",
  "CLAMP", "EXTEST", "HIGHZ", "IDCODE", "INTEST", "PRELOAD", "RUNBIST",
  "SAMPLE", "USERCODE", "COMPONENT_CONFORMANCE", "STD_1149_1_1990",
  "STD_1149_1_1993", "STD_1149_1_2001", "ISC_CONFORMANCE", "STD_1532_2001",
  "STD_1532_2002", "ISC_PIN_BEHAVIOR", "ISC_FIXED_SYSTEM_PINS",
  "ISC_STATUS", "IMPLEMENTED", "ISC_BLANK_USERCODE", "ISC_SECURITY",
  "ISC_DISABLE_READ", "ISC_DISABLE_PROGRAM", "ISC_DISABLE_ERASE",
  "ISC_DISABLE_KEY", "ISC_FLOW", "UNPROCESSED", "EXIT_ON_ERROR", "ARRAY",
  "SECURITY", "INITIALIZE", "REPEAT", "TERMINATE", "LOOP", "MIN", "MAX",
  "DOLLAR", "EQUAL", "HEX_STRING", "WAIT", "REAL_NUMBER", "PLUS", "MINUS",
  "SH_RIGHT", "SH_LEFT", "TILDE", "QUESTION_MARK", "EXCLAMATION_MARK",
  "QUESTION_EXCLAMATION", "CRC", "OST", "ISC_PROCEDURE", "ISC_ACTION",
  "PROPRIETARY", "OPTIONAL", "RECOMMENDED", "ISC_ILLEGAL_EXIT", "ILLEGAL",
  "$accept", "BSDL_Statement", "BSDL_Pin_Map", "BSDL_Map_String",
  "Pin_Mapping", "Physical_Pin_Desc", "Physical_Pin_List", "Physical_Pin",
  "BSDL_Tap_Scan_In", "BSDL_Tap_Scan_Out", "BSDL_Tap_Scan_Mode",
  "BSDL_Tap_Scan_Reset", "BSDL_Tap_Scan_Clock", "BSDL_Inst_Length",
  "BSDL_Opcode", "BSDL_Opcode_Table", "Opcode_Desc", "Binary_Pattern_List",
  "Binary_Pattern", "BSDL_Inst_Capture", "BSDL_Inst_Disable",
  "BSDL_Inst_Guard", "BSDL_Inst_Private", "Private_Opcode_List",
  "Private_Opcode", "BSDL_Idcode_Register", "BSDL_Usercode_Register",
  "BSDL_Register_Access", "Register_String", "Register_Assoc",
  "Register_Decl", "Standard_Reg", "Reg_Opcode_List", "Instruction_Name",
  "Reg_Opcode", "BSDL_Boundary_Length", "BSDL_Boundary_Register",
  "BSDL_Cell_Table", "Cell_Entry", "Cell_Info", "Cell_Spec", "Port_Name",
  "Cell_Function", "Safe_Value", "Disable_Spec", "Disable_Value",
  "BSDL_Compliance_Patterns", "BSDL_Compliance_Pattern", "$@1",
  "Bin_X_Pattern_List", "BSDL_Component_Conformance", "ISC_Extension",
  "ISC_Conformance", "ISC_Pin_Behavior", "Pin_Behavior_Option",
  "ISC_Fixed_System_Pins", "Fixed_Pin_List", "Port_Id", "ISC_Status",
  "Status_Modifier", "ISC_Blank_Usercode", "ISC_Security",
  "Protection_Spec", "Read_Spec", "Program_Spec", "Erase_Spec", "Key_Spec",
  "Bit_Spec", "Bit_Range", "ISC_Flow", "Flow_Definition_List",
  "Flow_Definition", "Flow_Descriptor", "Data_Name", "Standard_Data_Name",
  "Initialize_Block", "Repeat_Block", "Terminate_Block", "Activity_List",
  "Activity_Element", "Loop_Block", "Loop_Min_Spec", "Loop_Max_Spec",
  "Loop_Activity_List", "Activity", "Update_Field_List", "Update_Field",
  "$@2", "Data_Expression", "Variable_Expression", "Variable_Assignment",
  "$@3", "Variable_Update", "Input_Specifier", "Capture_Field_List",
  "Capture_Field", "$@4", "Capture_Field_Rest", "Capture_Specification",
  "Expected_Data", "Compare_Mask", "Wait_Specification",
  "Duration_Specification", "Clock_Cycles", "Variable", "Binary_Operator",
  "Complement_Operator", "Input_Operator", "Output_Operator",
  "IO_Operator", "CRC_Tag", "OST_Tag", "ISC_Procedure", "Procedure_List",
  "Procedure", "Flow_Descriptor_List", "ISC_Action", "Action_List",
  "Action", "Action_Specification_List", "Action_Specification",
  "Option_Specification", "ISC_Illegal_Exit", "Exit_Instruction_List", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-326)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,  -326,   125,    97,    96,   138,   142,   150,   155,   180,
      66,   183,   186,   190,    69,    87,   187,    29,   188,   189,
     184,   -24,    74,    28,   101,   193,   191,     2,   111,   114,
     115,   196,   236,  -326,   192,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,   194,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,   195,   197,  -326,  -326,  -326,  -326,
    -326,  -326,   198,  -326,  -326,  -326,   199,  -326,  -326,  -326,
     200,  -326,   202,  -326,  -326,  -326,   203,   201,  -326,  -326,
    -326,    20,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,   204,   206,  -326,  -326,   166,  -326,  -326,
      -4,  -326,   207,  -326,    17,   208,  -326,    60,  -326,     3,
     209,  -326,  -326,   -15,   210,  -326,  -326,   211,  -326,    97,
      91,   214,   220,   221,   218,    87,   113,   223,   222,   216,
    -326,    72,  -326,   224,   225,  -326,  -326,  -326,  -326,   205,
      43,   182,  -326,   185,   111,   -14,   226,   -14,   151,   181,
    -326,   227,   146,   114,   228,   177,   -58,   115,   233,  -326,
      20,  -326,  -326,  -326,   136,  -326,  -326,  -326,   229,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,   156,  -326,  -326,   230,   232,   231,  -326,   235,    20,
    -326,   234,  -326,    -4,   237,   238,  -326,  -326,  -326,  -326,
    -326,   239,  -326,   212,  -326,   113,   213,   -14,  -326,  -326,
    -326,   -14,   -14,   181,  -326,   242,   241,  -326,   246,   243,
     244,   179,  -326,  -326,   157,   214,  -326,  -326,   113,  -326,
      -1,  -326,   249,   245,  -326,   247,  -326,  -326,   215,  -326,
    -326,  -326,    -8,   254,   217,  -326,   -14,  -326,  -326,   160,
     242,   -21,   161,  -326,   246,   246,   251,  -326,  -326,  -326,
     252,  -326,   255,   256,  -326,  -326,   258,    -4,   259,   257,
     -12,    -9,  -326,    -2,  -326,   263,   253,   242,  -326,   164,
     -50,  -326,  -326,    68,  -326,   246,  -326,   165,   168,   246,
     264,   132,   267,  -326,   169,  -326,   240,  -326,  -326,   268,
     248,   266,   270,    10,   265,  -326,   172,  -326,  -326,   271,
    -326,  -326,  -326,   -50,  -326,  -326,  -326,  -326,   173,   269,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,   273,
     274,   277,  -326,    -3,  -326,    30,  -326,   272,   250,  -326,
    -326,   176,  -326,   281,  -326,   119,  -326,  -326,  -326,  -326,
      98,   159,  -326,   260,  -326,  -326,   275,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,    89,  -326,  -326,   -12,  -326,
    -326,   -48,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,   282,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,   283,  -326,   261,  -326,  -326,  -326,
     276,   278,    30,  -326,   262,  -326,  -326,   120,   280,  -326,
     -48,  -326,  -326,  -326,  -326,  -326,   279,  -326,  -326,    30,
    -326
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    24,     0,    25,    35,    36,    37,
      38,    39,    40,    44,     0,    41,    42,    49,    50,    51,
      55,    56,    52,    53,    65,    69,     0,    66,    67,    68,
      59,    60,     0,    63,    84,    88,     0,    85,    86,    57,
      58,     0,   114,   119,   120,   121,   132,   133,   137,   136,
     135,   134,   141,   142,   138,   139,   146,     0,   147,   150,
       0,   148,     0,   169,   170,   159,   160,   162,   260,     0,
     255,   256,   270,     0,   263,   264,   284,   283,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      34,     0,    30,     0,     0,   144,   156,   155,   151,     0,
       0,   174,   176,   171,     0,     0,     0,     0,   163,   166,
     168,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,    28,    48,     0,    46,    43,    54,     0,    61,
      82,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,     0,    83,    70,     0,     0,    90,    87,     0,     0,
     115,     0,   140,     0,     0,     0,   182,   183,   180,   179,
     181,     0,   175,   172,   161,     0,   192,   184,   187,   190,
     189,     0,   186,   164,   167,     0,     0,   257,     0,     0,
       0,     0,   265,   285,     0,     0,    45,    64,     0,    62,
       0,    89,     0,     0,    31,     0,   143,   152,     0,   178,
     177,   173,     0,     0,     0,   188,   185,   165,   261,     0,
       0,   273,     0,   271,     0,     0,     0,    29,    47,    71,
      93,    95,     0,     0,    91,    33,     0,     0,     0,   203,
       0,     0,   201,     0,   193,     0,     0,     0,   258,     0,
     278,   281,   282,   274,   280,     0,   266,     0,     0,     0,
       0,     0,     0,   117,     0,   153,     0,   204,   241,     0,
     237,   240,     0,     0,     0,   197,     0,   219,   194,     0,
     262,   259,   279,   275,   276,   272,   268,   267,     0,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     0,
       0,     0,   116,     0,   149,     0,   243,   238,     0,   202,
     198,     0,   221,     0,   199,     0,   195,   277,   269,    94,
       0,     0,   118,     0,   157,   154,     0,   206,   250,   252,
     205,   208,   210,   211,   207,   209,   217,   218,     0,   242,
     200,   229,   220,   191,   196,   105,   106,    92,   108,   109,
     110,   111,   112,   113,   107,     0,   244,   212,   245,   246,
     247,   248,   249,   214,     0,   215,     0,   251,   232,   222,
     223,   227,   230,   158,     0,   216,   239,     0,   224,   226,
     233,   228,   231,   213,   253,   254,     0,   225,   236,   234,
     235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -326,  -326,  -326,  -326,   149,  -326,   134,  -116,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,   219,  -326,    82,  -326,
    -326,  -326,  -326,  -326,   284,  -326,  -326,  -326,  -326,   285,
    -326,  -326,  -326,   103,    83,  -326,  -326,  -326,   286,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,   -23,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -207,  -326,  -326,
    -326,   170,  -202,  -129,  -326,  -326,   167,  -142,  -139,  -168,
    -326,  -326,  -326,  -326,  -211,  -326,    11,  -326,  -325,  -326,
    -326,  -326,  -326,   -53,    13,   -26,  -326,  -326,  -326,  -326,
    -326,    48,   -47,  -326,  -326,  -326,  -326,  -326,   -90,  -326,
    -326,   -86,  -326,  -326,   171,    73,  -326,  -326,   174,  -154,
      40,  -177,  -326,  -326
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    32,    33,    34,    66,   181,   151,   152,    35,    36,
      37,    38,    39,    40,    41,    75,    76,   184,   185,    42,
      43,    44,    45,    82,    83,    46,    47,    48,    90,    91,
      92,    93,   201,   202,   203,    49,    50,    97,    98,   205,
     206,   282,   349,   397,   284,   404,    51,   102,   255,   314,
      52,    53,    54,    55,   111,    56,   114,   319,    57,   117,
      58,    59,   121,   122,   214,   288,   354,   158,   375,    60,
     125,   126,   127,   163,   221,   168,   169,   170,   227,   228,
     229,   264,   296,   365,   230,   291,   292,   355,   380,   381,
     382,   424,   383,   384,   326,   327,   391,   419,   420,   421,
     431,   293,   320,   321,   385,   414,   415,   386,   422,   387,
     428,   429,    61,   130,   131,   269,    62,   134,   135,   272,
     273,   304,    63,   137
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     172,   115,     1,   119,   176,     2,   257,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   182,   160,   113,   234,   232,   108,
      95,   160,   225,   268,   289,   240,   322,   280,   156,   373,
     324,   103,   104,   105,   376,   325,   377,   157,   374,   160,
     281,   241,   324,    20,   378,   417,   379,   360,   149,   265,
     301,   302,   150,   160,   265,    21,   418,    73,   268,    22,
      80,    96,    23,    24,    25,   226,    26,    27,   174,   120,
     315,   215,    28,   109,   318,   110,   290,   290,   300,   301,
     302,   267,   266,   254,   175,   330,   171,   432,   265,   161,
     162,   216,   112,   217,    74,   438,   218,    81,    29,    30,
      84,    85,   123,    31,   440,   128,   132,   209,   366,   210,
     307,   308,   376,   332,   377,    86,   334,   219,   220,   149,
      64,   212,   378,   150,   379,    65,   395,   180,    67,   113,
     396,    87,   303,   106,   107,    88,   165,   166,   167,   124,
      89,   190,   129,   133,   394,   338,   367,   340,   341,   342,
     343,   344,   345,   346,   347,   225,   393,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   333,   301,   302,
      68,   245,   407,   246,    69,   348,   408,   409,   410,   411,
     412,   378,    70,   379,   398,   399,   400,    71,   401,   402,
     403,   248,   209,   249,   277,   297,   305,   298,   306,   297,
     305,   331,   336,   305,   351,   337,   352,   363,   305,   364,
     368,   363,    72,   390,    78,   434,   435,    77,    79,    94,
     101,   116,    99,   100,   136,   118,   138,   139,   166,   236,
     155,   141,   142,   143,   140,   145,   148,   144,   146,   147,
     153,   154,   159,   164,   173,   177,   178,   183,    74,    81,
     188,   204,   208,   113,    96,   222,   211,   223,   231,   167,
     239,   243,   276,   235,   238,   250,   252,   253,   247,   251,
     124,   256,   258,   213,   271,   259,   260,   270,   179,   274,
     275,   283,   285,   286,   287,   261,   294,   309,   310,   329,
     311,   312,   313,   263,   316,   328,   339,   317,   295,   350,
     356,   358,   289,   406,   244,   362,   369,   225,   370,   371,
     353,   372,   388,   324,   423,   425,   427,   278,   262,   430,
     436,   279,   413,   359,   224,   233,   361,   392,   357,   323,
     439,   416,   437,   299,   237,   335,   389,     0,     0,     0,
       0,   242,   426,     0,     0,     0,   433,     0,   405,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   435,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
     189,     0,     0,     0,   207
};

static const yytype_int16 yycheck[] =
{
     129,    24,     1,     1,   133,     4,   213,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   140,    46,    38,   169,   167,     1,
       1,    46,    46,   235,    42,    93,    45,    38,    42,    42,
      42,    65,    66,    67,    92,    47,    94,    51,    51,    46,
      51,   109,    42,    52,   102,   103,   104,    47,    38,   227,
     110,   111,    42,    46,   232,    64,   391,     1,   270,    68,
       1,    42,    71,    72,    73,    89,    75,    76,    93,    77,
     287,    38,    81,    55,    96,    57,    95,    95,   109,   110,
     111,   233,   231,   209,   109,   297,    93,   422,   266,    82,
      83,    58,     1,    60,    38,   430,    63,    38,   107,   108,
      23,    24,     1,   112,   439,     1,     1,    45,   329,    47,
     274,   275,    92,   300,    94,    38,   303,    84,    85,    38,
       5,   154,   102,    42,   104,    38,    38,    46,    42,    38,
      42,    54,   271,    69,    70,    58,    86,    87,    88,    38,
      63,    38,    38,    38,   365,   309,   333,    25,    26,    27,
      28,    29,    30,    31,    32,    46,    47,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,   109,   110,   111,
      42,    45,    93,    47,    42,    53,    97,    98,    99,   100,
     101,   102,    42,   104,    35,    36,    37,    42,    39,    40,
      41,    45,    45,    47,    47,    45,    45,    47,    47,    45,
      45,    47,    47,    45,    45,    47,    47,    45,    45,    47,
      47,    45,    42,    47,    38,   105,   106,    44,    38,    42,
      46,    38,    44,    44,    38,    44,     0,    45,    87,    93,
      74,    46,    45,    45,    50,    45,    45,    48,    46,    46,
      46,    45,    45,    45,    45,    45,    45,    43,    38,    38,
      42,    38,    46,    38,    42,    83,    42,    82,    42,    88,
      93,    38,    93,    46,    46,    45,    45,    42,    49,    47,
      38,    47,    45,    78,    38,    47,    47,    46,   139,    46,
      46,    42,    47,    46,    79,    83,    42,    46,    46,    46,
      45,    45,    44,    90,    45,    42,    42,    50,    91,    42,
      42,    45,    42,    38,   180,    50,    47,    46,    45,    45,
      80,    44,    50,    42,    42,    42,    50,   245,   225,    51,
      50,   248,   385,   322,   164,   168,   323,   363,    90,   291,
     430,   388,   428,   270,   173,   305,    96,    -1,    -1,    -1,
      -1,   177,    91,    -1,    -1,    -1,    94,    -1,    98,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,
     145,    -1,    -1,    -1,   148
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      52,    64,    68,    71,    72,    73,    75,    76,    81,   107,
     108,   112,   115,   116,   117,   122,   123,   124,   125,   126,
     127,   128,   133,   134,   135,   136,   139,   140,   141,   149,
     150,   160,   164,   165,   166,   167,   169,   172,   174,   175,
     183,   226,   230,   236,     5,    38,   118,    42,    42,    42,
      42,    42,    42,     1,    38,   129,   130,    44,    38,    38,
       1,    38,   137,   138,    23,    24,    38,    54,    58,    63,
     142,   143,   144,   145,    42,     1,    42,   151,   152,    44,
      44,    46,   161,    65,    66,    67,    69,    70,     1,    55,
      57,   168,     1,    38,   170,   171,    38,   173,    44,     1,
      77,   176,   177,     1,    38,   184,   185,   186,     1,    38,
     227,   228,     1,    38,   231,   232,    38,   237,     0,    45,
      50,    46,    45,    45,    48,    45,    46,    46,    45,    38,
      42,   120,   121,    46,    45,    74,    42,    51,   181,    45,
      46,    82,    83,   187,    45,    86,    87,    88,   189,   190,
     191,    93,   187,    45,    93,   109,   187,    45,    45,   118,
      46,   119,   121,    43,   131,   132,   130,   138,    42,   143,
      38,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,   146,   147,   148,    38,   153,   154,   152,    46,    45,
      47,    42,   171,    78,   178,    38,    58,    60,    63,    84,
      85,   188,    83,    82,   185,    46,    89,   192,   193,   194,
     198,    42,   192,   190,   191,    46,    93,   228,    46,    93,
      93,   109,   232,    38,   120,    45,    47,    49,    45,    47,
      45,    47,    45,    42,   121,   162,    47,   181,    45,    47,
      47,    83,   147,    90,   195,   193,   192,   191,   186,   229,
      46,    38,   233,   234,    46,    46,    93,    47,   132,   148,
      38,    51,   155,    42,   158,    47,    46,    79,   179,    42,
      95,   199,   200,   215,    42,    91,   196,    45,    47,   229,
     109,   110,   111,   187,   235,    45,    47,   233,   233,    46,
      46,    45,    45,    44,   163,   181,    45,    50,    96,   171,
     216,   217,    45,   215,    42,    47,   208,   209,    42,    46,
     186,    47,   235,   109,   235,   234,    47,    47,   233,    42,
      25,    26,    27,    28,    29,    30,    31,    32,    53,   156,
      42,    45,    47,    80,   180,   201,    42,    90,    45,   200,
      47,   208,    50,    45,    47,   197,   198,   235,    47,    47,
      45,    45,    44,    42,    51,   182,    92,    94,   102,   104,
     202,   203,   204,   206,   207,   218,   221,   223,    50,    96,
      47,   210,   209,    47,   198,    38,    42,   157,    35,    36,
      37,    39,    40,    41,   159,    98,    38,    93,    97,    98,
      99,   100,   101,   207,   219,   220,   216,   103,   202,   211,
     212,   213,   222,    42,   205,    42,    91,    50,   224,   225,
      51,   214,   202,    94,   105,   106,    50,   225,   202,   222,
     202
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   117,   117,   118,   119,   119,
     120,   120,   121,   121,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   129,   129,   130,   131,   131,   132,   133,
     134,   135,   136,   137,   137,   137,   138,   139,   140,   141,
     142,   142,   143,   144,   144,   145,   145,   145,   145,   145,
     146,   146,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   149,   150,   151,   151,   151,   152,
     153,   153,   154,   155,   155,   155,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   157,   157,   158,   159,   159,
     159,   159,   159,   159,   160,   162,   161,   163,   163,   164,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   167,   168,   168,   168,   169,   170,
     170,   170,   171,   171,   172,   173,   173,   174,   175,   176,
     176,   177,   178,   179,   180,   181,   181,   182,   182,   183,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   188,
     188,   188,   188,   188,   189,   190,   191,   192,   192,   193,
     193,   194,   195,   195,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   201,   200,   202,   202,   202,   203,
     203,   203,   205,   204,   204,   206,   206,   207,   207,   208,
     208,   210,   209,   211,   211,   211,   211,   212,   212,   213,
     213,   213,   213,   214,   214,   214,   214,   215,   215,   215,
     216,   216,   216,   217,   218,   219,   219,   219,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   227,   228,   228,
     228,   229,   229,   230,   231,   231,   232,   232,   232,   232,
     232,   233,   233,   234,   234,   234,   234,   234,   234,   234,
     234,   235,   235,   236,   237,   237
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     3,
       1,     3,     1,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     4,     1,     3,     1,     2,
       2,     2,     2,     1,     3,     1,     1,     2,     2,     2,
       1,     3,     4,     1,     4,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     3,     1,     4,
       1,     3,     7,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     1,
       1,     1,     1,     1,     2,     0,     7,     1,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     2,     1,
       3,     1,     1,     4,     3,     0,     1,     2,     2,     7,
       1,     2,     2,     2,     2,     1,     1,     1,     3,     2,
       1,     3,     1,     2,     3,     4,     2,     3,     2,     1,
       1,     2,     3,     4,     2,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     2,     3,     2,     1,     2,     1,
       1,     6,     0,     2,     2,     1,     2,     4,     5,     5,
       6,     1,     3,     1,     0,     4,     1,     1,     1,     1,
       1,     1,     0,     4,     2,     2,     3,     1,     1,     1,
       3,     0,     4,     1,     2,     3,     2,     1,     2,     0,
       1,     2,     1,     1,     2,     3,     2,     2,     3,     6,
       1,     1,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     3,     5,     6,
       1,     1,     3,     2,     1,     3,     5,     6,     6,     7,
       1,     1,     3,     1,     2,     3,     3,     4,     2,     3,
       2,     1,     1,     2,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = URJ_BSDL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == URJ_BSDL_EMPTY)                                        \
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
   Use URJ_BSDL_error or URJ_BSDL_UNDEF. */
#define YYERRCODE URJ_BSDL_UNDEF


/* Enable debugging if requested.  */
#if URJ_BSDL_DEBUG

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
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, urj_bsdl_parser_priv_t *priv_data)
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, urj_bsdl_parser_priv_t *priv_data)
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
                 int yyrule, urj_bsdl_parser_priv_t *priv_data)
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
#else /* !URJ_BSDL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !URJ_BSDL_DEBUG */


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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, urj_bsdl_parser_priv_t *priv_data)
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
yyparse (urj_bsdl_parser_priv_t *priv_data)
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

  yychar = URJ_BSDL_EMPTY; /* Cause a token to be read.  */

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
  if (yychar == URJ_BSDL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, HACK);
    }

  if (yychar <= URJ_BSDL_EOF)
    {
      yychar = URJ_BSDL_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == URJ_BSDL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = URJ_BSDL_UNDEF;
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
  yychar = URJ_BSDL_EMPTY;
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
  case 23: /* BSDL_Statement: error  */
#line 269 "bsdl_bison.y"
                   {
                     Print_Error (priv_data, _("Unsupported BSDL construct found"));
                     BUMP_ERROR;
                     YYABORT;
                   }
#line 1753 "bsdl_bison.tab.c"
    break;

  case 27: /* Pin_Mapping: IDENTIFIER COLON Physical_Pin_Desc  */
#line 285 "bsdl_bison.y"
                    { free ((yyvsp[-2].str)); }
#line 1759 "bsdl_bison.tab.c"
    break;

  case 32: /* Physical_Pin: IDENTIFIER  */
#line 294 "bsdl_bison.y"
                    { free ((yyvsp[0].str)); }
#line 1765 "bsdl_bison.tab.c"
    break;

  case 33: /* Physical_Pin: IDENTIFIER LPAREN DECIMAL_NUMBER RPAREN  */
#line 296 "bsdl_bison.y"
                    { free ((yyvsp[-3].str)); }
#line 1771 "bsdl_bison.tab.c"
    break;

  case 40: /* BSDL_Inst_Length: INSTRUCTION_LENGTH DECIMAL_NUMBER  */
#line 322 "bsdl_bison.y"
                   { priv_data->jtag_ctrl->instr_len = (yyvsp[0].integer); }
#line 1777 "bsdl_bison.tab.c"
    break;

  case 44: /* BSDL_Opcode_Table: error  */
#line 331 "bsdl_bison.y"
                      {
                        Print_Error (priv_data,
                                     _("Error in Instruction_Opcode attribute statement"));
                        BUMP_ERROR;
                        YYABORT;
                      }
#line 1788 "bsdl_bison.tab.c"
    break;

  case 45: /* Opcode_Desc: IDENTIFIER LPAREN Binary_Pattern_List RPAREN  */
#line 339 "bsdl_bison.y"
                      { add_instruction (priv_data, (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1794 "bsdl_bison.tab.c"
    break;

  case 46: /* Binary_Pattern_List: Binary_Pattern  */
#line 342 "bsdl_bison.y"
                      { (yyval.str) = (yyvsp[0].str); }
#line 1800 "bsdl_bison.tab.c"
    break;

  case 47: /* Binary_Pattern_List: Binary_Pattern_List COMMA Binary_Pattern  */
#line 344 "bsdl_bison.y"
                      {
                        Print_Warning (priv_data,
                                       _("Multiple opcode patterns are not supported, first pattern will be used"));
                        (yyval.str) = (yyvsp[-2].str);
                        free ((yyvsp[0].str));
                      }
#line 1811 "bsdl_bison.tab.c"
    break;

  case 48: /* Binary_Pattern: BINARY_PATTERN  */
#line 352 "bsdl_bison.y"
                      { (yyval.str) = (yyvsp[0].str); }
#line 1817 "bsdl_bison.tab.c"
    break;

  case 49: /* BSDL_Inst_Capture: INSTRUCTION_CAPTURE BIN_X_PATTERN  */
#line 357 "bsdl_bison.y"
                    { free ((yyvsp[0].str)); }
#line 1823 "bsdl_bison.tab.c"
    break;

  case 50: /* BSDL_Inst_Disable: INSTRUCTION_DISABLE IDENTIFIER  */
#line 362 "bsdl_bison.y"
                    { free ((yyvsp[0].str)); }
#line 1829 "bsdl_bison.tab.c"
    break;

  case 51: /* BSDL_Inst_Guard: INSTRUCTION_GUARD IDENTIFIER  */
#line 367 "bsdl_bison.y"
                  { free ((yyvsp[0].str)); }
#line 1835 "bsdl_bison.tab.c"
    break;

  case 55: /* Private_Opcode_List: error  */
#line 376 "bsdl_bison.y"
                      {
                        Print_Error (priv_data, _("Error in Opcode List"));
                        BUMP_ERROR;
                        YYABORT;
                      }
#line 1845 "bsdl_bison.tab.c"
    break;

  case 56: /* Private_Opcode: IDENTIFIER  */
#line 383 "bsdl_bison.y"
                      { free ((yyvsp[0].str)); }
#line 1851 "bsdl_bison.tab.c"
    break;

  case 57: /* BSDL_Idcode_Register: IDCODE_REGISTER BIN_X_PATTERN  */
#line 388 "bsdl_bison.y"
                       { priv_data->jtag_ctrl->idcode = (yyvsp[0].str); }
#line 1857 "bsdl_bison.tab.c"
    break;

  case 58: /* BSDL_Usercode_Register: USERCODE_REGISTER BIN_X_PATTERN  */
#line 393 "bsdl_bison.y"
                         { priv_data->jtag_ctrl->usercode = (yyvsp[0].str); }
#line 1863 "bsdl_bison.tab.c"
    break;

  case 62: /* Register_Assoc: Register_Decl LPAREN Reg_Opcode_List RPAREN  */
#line 403 "bsdl_bison.y"
                       { ac_apply_assoc (priv_data); }
#line 1869 "bsdl_bison.tab.c"
    break;

  case 63: /* Register_Decl: Standard_Reg  */
#line 406 "bsdl_bison.y"
                       { ac_set_register (priv_data, (yyvsp[0].str), 0); }
#line 1875 "bsdl_bison.tab.c"
    break;

  case 64: /* Register_Decl: IDENTIFIER LBRACKET DECIMAL_NUMBER RBRACKET  */
#line 408 "bsdl_bison.y"
                       { ac_set_register (priv_data, (yyvsp[-3].str), (yyvsp[-1].integer)); }
#line 1881 "bsdl_bison.tab.c"
    break;

  case 65: /* Standard_Reg: BOUNDARY  */
#line 411 "bsdl_bison.y"
                       { (yyval.str) = strdup ("BOUNDARY"); }
#line 1887 "bsdl_bison.tab.c"
    break;

  case 66: /* Standard_Reg: BYPASS  */
#line 413 "bsdl_bison.y"
                       { (yyval.str) = strdup ("BYPASS"); }
#line 1893 "bsdl_bison.tab.c"
    break;

  case 67: /* Standard_Reg: IDCODE  */
#line 415 "bsdl_bison.y"
                       { (yyval.str) = strdup ("IDCODE"); }
#line 1899 "bsdl_bison.tab.c"
    break;

  case 68: /* Standard_Reg: USERCODE  */
#line 417 "bsdl_bison.y"
                       { (yyval.str) = strdup ("USERCODE"); }
#line 1905 "bsdl_bison.tab.c"
    break;

  case 69: /* Standard_Reg: DEVICE_ID  */
#line 419 "bsdl_bison.y"
                       { (yyval.str) = strdup ("DEVICE_ID"); }
#line 1911 "bsdl_bison.tab.c"
    break;

  case 72: /* Instruction_Name: BYPASS  */
#line 425 "bsdl_bison.y"
                       { (yyval.str) = strdup ("BYPASS"); }
#line 1917 "bsdl_bison.tab.c"
    break;

  case 73: /* Instruction_Name: CLAMP  */
#line 427 "bsdl_bison.y"
                       { (yyval.str) = strdup ("CLAMP"); }
#line 1923 "bsdl_bison.tab.c"
    break;

  case 74: /* Instruction_Name: EXTEST  */
#line 429 "bsdl_bison.y"
                       { (yyval.str) = strdup ("EXTEST"); }
#line 1929 "bsdl_bison.tab.c"
    break;

  case 75: /* Instruction_Name: HIGHZ  */
#line 431 "bsdl_bison.y"
                       { (yyval.str) = strdup ("HIGHZ"); }
#line 1935 "bsdl_bison.tab.c"
    break;

  case 76: /* Instruction_Name: IDCODE  */
#line 433 "bsdl_bison.y"
                       { (yyval.str) = strdup ("IDCODE"); }
#line 1941 "bsdl_bison.tab.c"
    break;

  case 77: /* Instruction_Name: INTEST  */
#line 435 "bsdl_bison.y"
                       { (yyval.str) = strdup ("INTEST"); }
#line 1947 "bsdl_bison.tab.c"
    break;

  case 78: /* Instruction_Name: PRELOAD  */
#line 437 "bsdl_bison.y"
                       { (yyval.str) = strdup ("PRELOAD"); }
#line 1953 "bsdl_bison.tab.c"
    break;

  case 79: /* Instruction_Name: RUNBIST  */
#line 439 "bsdl_bison.y"
                       { (yyval.str) = strdup ("RUNBIST"); }
#line 1959 "bsdl_bison.tab.c"
    break;

  case 80: /* Instruction_Name: SAMPLE  */
#line 441 "bsdl_bison.y"
                       { (yyval.str) = strdup ("SAMPLE"); }
#line 1965 "bsdl_bison.tab.c"
    break;

  case 81: /* Instruction_Name: USERCODE  */
#line 443 "bsdl_bison.y"
                       { (yyval.str) = strdup ("USERCODE"); }
#line 1971 "bsdl_bison.tab.c"
    break;

  case 82: /* Instruction_Name: IDENTIFIER  */
#line 445 "bsdl_bison.y"
                       { (yyval.str) = (yyvsp[0].str); }
#line 1977 "bsdl_bison.tab.c"
    break;

  case 83: /* Reg_Opcode: Instruction_Name  */
#line 448 "bsdl_bison.y"
                       { ac_add_instruction (priv_data, (yyvsp[0].str)); }
#line 1983 "bsdl_bison.tab.c"
    break;

  case 84: /* BSDL_Boundary_Length: BOUNDARY_LENGTH DECIMAL_NUMBER  */
#line 454 "bsdl_bison.y"
                       { priv_data->jtag_ctrl->bsr_len = (yyvsp[0].integer); }
#line 1989 "bsdl_bison.tab.c"
    break;

  case 88: /* BSDL_Cell_Table: error  */
#line 463 "bsdl_bison.y"
                  {Print_Error (priv_data, _("Error in Boundary Cell description"));
                   BUMP_ERROR; YYABORT; }
#line 1996 "bsdl_bison.tab.c"
    break;

  case 89: /* Cell_Entry: DECIMAL_NUMBER LPAREN Cell_Info RPAREN  */
#line 467 "bsdl_bison.y"
                  { ci_append_cell_info (priv_data, (yyvsp[-3].integer)); }
#line 2002 "bsdl_bison.tab.c"
    break;

  case 90: /* Cell_Info: Cell_Spec  */
#line 470 "bsdl_bison.y"
                  { ci_no_disable (priv_data); }
#line 2008 "bsdl_bison.tab.c"
    break;

  case 92: /* Cell_Spec: IDENTIFIER COMMA Port_Name COMMA Cell_Function COMMA Safe_Value  */
#line 475 "bsdl_bison.y"
                  {
                    free ((yyvsp[-6].str));
                    ci_set_cell_spec (priv_data, (yyvsp[-2].integer), (yyvsp[0].str));
                  }
#line 2017 "bsdl_bison.tab.c"
    break;

  case 93: /* Port_Name: IDENTIFIER  */
#line 481 "bsdl_bison.y"
                  {
                    prt_add_name (priv_data, (yyvsp[0].str));
                    prt_add_bit (priv_data);
                  }
#line 2026 "bsdl_bison.tab.c"
    break;

  case 94: /* Port_Name: IDENTIFIER LPAREN DECIMAL_NUMBER RPAREN  */
#line 486 "bsdl_bison.y"
                  {
                    prt_add_name (priv_data, (yyvsp[-3].str));
                    prt_add_range (priv_data, (yyvsp[-1].integer), (yyvsp[-1].integer));
                  }
#line 2035 "bsdl_bison.tab.c"
    break;

  case 95: /* Port_Name: ASTERISK  */
#line 491 "bsdl_bison.y"
                  {
                    prt_add_name (priv_data, strdup ("*"));
                    prt_add_bit (priv_data);
                  }
#line 2044 "bsdl_bison.tab.c"
    break;

  case 96: /* Cell_Function: INPUT  */
#line 497 "bsdl_bison.y"
                  { (yyval.integer) = INPUT; }
#line 2050 "bsdl_bison.tab.c"
    break;

  case 97: /* Cell_Function: OUTPUT2  */
#line 499 "bsdl_bison.y"
                  { (yyval.integer) = OUTPUT2; }
#line 2056 "bsdl_bison.tab.c"
    break;

  case 98: /* Cell_Function: OUTPUT3  */
#line 501 "bsdl_bison.y"
                  { (yyval.integer) = OUTPUT3; }
#line 2062 "bsdl_bison.tab.c"
    break;

  case 99: /* Cell_Function: CONTROL  */
#line 503 "bsdl_bison.y"
                  { (yyval.integer) = CONTROL; }
#line 2068 "bsdl_bison.tab.c"
    break;

  case 100: /* Cell_Function: CONTROLR  */
#line 505 "bsdl_bison.y"
                  { (yyval.integer) = CONTROLR; }
#line 2074 "bsdl_bison.tab.c"
    break;

  case 101: /* Cell_Function: INTERNAL  */
#line 507 "bsdl_bison.y"
                  { (yyval.integer) = INTERNAL; }
#line 2080 "bsdl_bison.tab.c"
    break;

  case 102: /* Cell_Function: CLOCK  */
#line 509 "bsdl_bison.y"
                  { (yyval.integer) = CLOCK; }
#line 2086 "bsdl_bison.tab.c"
    break;

  case 103: /* Cell_Function: BIDIR  */
#line 511 "bsdl_bison.y"
                  { (yyval.integer) = BIDIR; }
#line 2092 "bsdl_bison.tab.c"
    break;

  case 104: /* Cell_Function: OBSERVE_ONLY  */
#line 513 "bsdl_bison.y"
                  { (yyval.integer) = OBSERVE_ONLY; }
#line 2098 "bsdl_bison.tab.c"
    break;

  case 105: /* Safe_Value: IDENTIFIER  */
#line 516 "bsdl_bison.y"
                  { (yyval.str) = (yyvsp[0].str); }
#line 2104 "bsdl_bison.tab.c"
    break;

  case 106: /* Safe_Value: DECIMAL_NUMBER  */
#line 518 "bsdl_bison.y"
                  {
                    char *tmp;
                    /* @@@@ RFHH check malloc result */
                    tmp = malloc (2);
                    snprintf (tmp, 2, "%i", (yyvsp[0].integer));
                    tmp[1] = '\0';
                    (yyval.str) = tmp;
                  }
#line 2117 "bsdl_bison.tab.c"
    break;

  case 107: /* Disable_Spec: DECIMAL_NUMBER COMMA DECIMAL_NUMBER COMMA Disable_Value  */
#line 528 "bsdl_bison.y"
                  { ci_set_cell_spec_disable (priv_data, (yyvsp[-4].integer), (yyvsp[-2].integer), (yyvsp[0].integer)); }
#line 2123 "bsdl_bison.tab.c"
    break;

  case 108: /* Disable_Value: Z  */
#line 531 "bsdl_bison.y"
                  { (yyval.integer) = Z; }
#line 2129 "bsdl_bison.tab.c"
    break;

  case 109: /* Disable_Value: WEAK0  */
#line 533 "bsdl_bison.y"
                  { (yyval.integer) = WEAK0; }
#line 2135 "bsdl_bison.tab.c"
    break;

  case 110: /* Disable_Value: WEAK1  */
#line 535 "bsdl_bison.y"
                  { (yyval.integer) = WEAK1; }
#line 2141 "bsdl_bison.tab.c"
    break;

  case 111: /* Disable_Value: PULL0  */
#line 537 "bsdl_bison.y"
                  { (yyval.integer) = PULL0; }
#line 2147 "bsdl_bison.tab.c"
    break;

  case 112: /* Disable_Value: PULL1  */
#line 539 "bsdl_bison.y"
                  { (yyval.integer) = PULL1; }
#line 2153 "bsdl_bison.tab.c"
    break;

  case 113: /* Disable_Value: KEEPER  */
#line 541 "bsdl_bison.y"
                  { (yyval.integer) = KEEPER; }
#line 2159 "bsdl_bison.tab.c"
    break;

  case 115: /* $@1: %empty  */
#line 548 "bsdl_bison.y"
                          { urj_bsdl_flex_set_bin_x (priv_data->scanner); }
#line 2165 "bsdl_bison.tab.c"
    break;

  case 117: /* Bin_X_Pattern_List: BIN_X_PATTERN  */
#line 552 "bsdl_bison.y"
                     { free ((yyvsp[0].str)); }
#line 2171 "bsdl_bison.tab.c"
    break;

  case 118: /* Bin_X_Pattern_List: Bin_X_Pattern_List COMMA BIN_X_PATTERN  */
#line 554 "bsdl_bison.y"
                     { free ((yyvsp[0].str)); }
#line 2177 "bsdl_bison.tab.c"
    break;

  case 119: /* BSDL_Component_Conformance: COMPONENT_CONFORMANCE STD_1149_1_1990  */
#line 559 "bsdl_bison.y"
                             { priv_data->jtag_ctrl->conformance = URJ_BSDL_CONF_1990; }
#line 2183 "bsdl_bison.tab.c"
    break;

  case 120: /* BSDL_Component_Conformance: COMPONENT_CONFORMANCE STD_1149_1_1993  */
#line 561 "bsdl_bison.y"
                             { priv_data->jtag_ctrl->conformance = URJ_BSDL_CONF_1993; }
#line 2189 "bsdl_bison.tab.c"
    break;

  case 121: /* BSDL_Component_Conformance: COMPONENT_CONFORMANCE STD_1149_1_2001  */
#line 563 "bsdl_bison.y"
                             { priv_data->jtag_ctrl->conformance = URJ_BSDL_CONF_2001; }
#line 2195 "bsdl_bison.tab.c"
    break;

  case 137: /* Pin_Behavior_Option: error  */
#line 587 "bsdl_bison.y"
                      {
                        Print_Error (priv_data, _("Error in ISC_Pin_Behavior Definition"));
                        BUMP_ERROR;
                        YYABORT;
                      }
#line 2205 "bsdl_bison.tab.c"
    break;

  case 141: /* Fixed_Pin_List: error  */
#line 599 "bsdl_bison.y"
                        {
                          Print_Error (priv_data, _("Error in ISC_Fixed_System_Pins Definition"));
                          BUMP_ERROR;
                          YYABORT;
                        }
#line 2215 "bsdl_bison.tab.c"
    break;

  case 142: /* Port_Id: IDENTIFIER  */
#line 606 "bsdl_bison.y"
                        { free ((yyvsp[0].str)); }
#line 2221 "bsdl_bison.tab.c"
    break;

  case 143: /* Port_Id: IDENTIFIER LPAREN DECIMAL_NUMBER RPAREN  */
#line 608 "bsdl_bison.y"
                        { free ((yyvsp[-3].str)); }
#line 2227 "bsdl_bison.tab.c"
    break;

  case 146: /* Status_Modifier: IDENTIFIER  */
#line 615 "bsdl_bison.y"
                  { free ((yyvsp[0].str)); }
#line 2233 "bsdl_bison.tab.c"
    break;

  case 147: /* ISC_Blank_Usercode: ISC_BLANK_USERCODE BIN_X_PATTERN  */
#line 619 "bsdl_bison.y"
                     { free ((yyvsp[0].str)); }
#line 2239 "bsdl_bison.tab.c"
    break;

  case 150: /* Protection_Spec: error  */
#line 626 "bsdl_bison.y"
                  {
                    Print_Error (priv_data, _("Error in ISC_Security Definition"));
                    BUMP_ERROR;
                    YYABORT;
                  }
#line 2249 "bsdl_bison.tab.c"
    break;

  case 169: /* Flow_Definition: error  */
#line 660 "bsdl_bison.y"
                         {
                           Print_Error (priv_data, _("Error in ISC_Flow Definition"));
                           BUMP_ERROR;
                           YYABORT;
                         }
#line 2259 "bsdl_bison.tab.c"
    break;

  case 170: /* Flow_Descriptor: IDENTIFIER  */
#line 667 "bsdl_bison.y"
                         { free ((yyvsp[0].str)); }
#line 2265 "bsdl_bison.tab.c"
    break;

  case 171: /* Flow_Descriptor: IDENTIFIER Data_Name  */
#line 669 "bsdl_bison.y"
                         { free ((yyvsp[-1].str)); }
#line 2271 "bsdl_bison.tab.c"
    break;

  case 172: /* Flow_Descriptor: IDENTIFIER Data_Name UNPROCESSED  */
#line 671 "bsdl_bison.y"
                         { free ((yyvsp[-2].str)); }
#line 2277 "bsdl_bison.tab.c"
    break;

  case 173: /* Flow_Descriptor: IDENTIFIER Data_Name UNPROCESSED EXIT_ON_ERROR  */
#line 673 "bsdl_bison.y"
                         { free ((yyvsp[-3].str)); }
#line 2283 "bsdl_bison.tab.c"
    break;

  case 174: /* Flow_Descriptor: IDENTIFIER UNPROCESSED  */
#line 675 "bsdl_bison.y"
                         { free ((yyvsp[-1].str)); }
#line 2289 "bsdl_bison.tab.c"
    break;

  case 175: /* Flow_Descriptor: IDENTIFIER UNPROCESSED EXIT_ON_ERROR  */
#line 677 "bsdl_bison.y"
                         { free ((yyvsp[-2].str)); }
#line 2295 "bsdl_bison.tab.c"
    break;

  case 176: /* Flow_Descriptor: IDENTIFIER EXIT_ON_ERROR  */
#line 679 "bsdl_bison.y"
                         { free ((yyvsp[-1].str)); }
#line 2301 "bsdl_bison.tab.c"
    break;

  case 178: /* Data_Name: LPAREN IDENTIFIER RPAREN  */
#line 683 "bsdl_bison.y"
                         { free ((yyvsp[-1].str)); }
#line 2307 "bsdl_bison.tab.c"
    break;

  case 197: /* Activity: LPAREN Instruction_Name Wait_Specification RPAREN  */
#line 710 "bsdl_bison.y"
                         { free ((yyvsp[-2].str)); }
#line 2313 "bsdl_bison.tab.c"
    break;

  case 198: /* Activity: LPAREN Instruction_Name Update_Field_List Wait_Specification RPAREN  */
#line 712 "bsdl_bison.y"
                         { free ((yyvsp[-3].str)); }
#line 2319 "bsdl_bison.tab.c"
    break;

  case 199: /* Activity: LPAREN Instruction_Name Wait_Specification Capture_Field_List RPAREN  */
#line 714 "bsdl_bison.y"
                         { free ((yyvsp[-3].str)); }
#line 2325 "bsdl_bison.tab.c"
    break;

  case 200: /* Activity: LPAREN Instruction_Name Update_Field_List Wait_Specification Capture_Field_List RPAREN  */
#line 716 "bsdl_bison.y"
                         { free ((yyvsp[-4].str)); }
#line 2331 "bsdl_bison.tab.c"
    break;

  case 204: /* $@2: %empty  */
#line 723 "bsdl_bison.y"
                         { urj_bsdl_flex_set_hex (priv_data->scanner); }
#line 2337 "bsdl_bison.tab.c"
    break;

  case 205: /* Update_Field: DECIMAL_NUMBER COLON $@2 Data_Expression  */
#line 725 "bsdl_bison.y"
                         { urj_bsdl_flex_set_decimal (priv_data->scanner); }
#line 2343 "bsdl_bison.tab.c"
    break;

  case 206: /* Data_Expression: HEX_STRING  */
#line 728 "bsdl_bison.y"
                         { free ((yyvsp[0].str)); }
#line 2349 "bsdl_bison.tab.c"
    break;

  case 212: /* $@3: %empty  */
#line 737 "bsdl_bison.y"
                         { urj_bsdl_flex_set_hex (priv_data->scanner); }
#line 2355 "bsdl_bison.tab.c"
    break;

  case 213: /* Variable_Assignment: Variable EQUAL $@3 HEX_STRING  */
#line 739 "bsdl_bison.y"
                         {
                           free ((yyvsp[0].str));
                           urj_bsdl_flex_set_decimal (priv_data->scanner);
                         }
#line 2364 "bsdl_bison.tab.c"
    break;

  case 221: /* $@4: %empty  */
#line 755 "bsdl_bison.y"
                         { urj_bsdl_flex_set_hex (priv_data->scanner); }
#line 2370 "bsdl_bison.tab.c"
    break;

  case 222: /* Capture_Field: DECIMAL_NUMBER COLON $@4 Capture_Field_Rest  */
#line 757 "bsdl_bison.y"
                         { urj_bsdl_flex_set_decimal (priv_data->scanner); }
#line 2376 "bsdl_bison.tab.c"
    break;

  case 241: /* Duration_Specification: REAL_NUMBER  */
#line 783 "bsdl_bison.y"
                         { free ((yyvsp[0].str)); }
#line 2382 "bsdl_bison.tab.c"
    break;

  case 242: /* Duration_Specification: Clock_Cycles COMMA REAL_NUMBER  */
#line 785 "bsdl_bison.y"
                         { free ((yyvsp[0].str)); }
#line 2388 "bsdl_bison.tab.c"
    break;

  case 244: /* Variable: DOLLAR IDENTIFIER  */
#line 790 "bsdl_bison.y"
                         { free ((yyvsp[0].str)); }
#line 2394 "bsdl_bison.tab.c"
    break;

  case 245: /* Binary_Operator: PLUS  */
#line 793 "bsdl_bison.y"
                         { urj_bsdl_flex_set_decimal (priv_data->scanner); }
#line 2400 "bsdl_bison.tab.c"
    break;

  case 246: /* Binary_Operator: MINUS  */
#line 795 "bsdl_bison.y"
                         { urj_bsdl_flex_set_decimal (priv_data->scanner); }
#line 2406 "bsdl_bison.tab.c"
    break;

  case 247: /* Binary_Operator: SH_RIGHT  */
#line 797 "bsdl_bison.y"
                         { urj_bsdl_flex_set_decimal (priv_data->scanner); }
#line 2412 "bsdl_bison.tab.c"
    break;

  case 248: /* Binary_Operator: SH_LEFT  */
#line 799 "bsdl_bison.y"
                         { urj_bsdl_flex_set_decimal (priv_data->scanner); }
#line 2418 "bsdl_bison.tab.c"
    break;

  case 258: /* Procedure: IDENTIFIER EQUAL LPAREN Flow_Descriptor_List RPAREN  */
#line 820 "bsdl_bison.y"
                       { free ((yyvsp[-4].str)); }
#line 2424 "bsdl_bison.tab.c"
    break;

  case 259: /* Procedure: IDENTIFIER Data_Name EQUAL LPAREN Flow_Descriptor_List RPAREN  */
#line 822 "bsdl_bison.y"
                       { free ((yyvsp[-5].str)); }
#line 2430 "bsdl_bison.tab.c"
    break;

  case 260: /* Procedure: error  */
#line 824 "bsdl_bison.y"
                       {
                         Print_Error (priv_data, _("Error in ISC_Procedure Definition"));
                         BUMP_ERROR;
                         YYABORT;
                       }
#line 2440 "bsdl_bison.tab.c"
    break;

  case 266: /* Action: IDENTIFIER EQUAL LPAREN Action_Specification_List RPAREN  */
#line 840 "bsdl_bison.y"
                            { free ((yyvsp[-4].str)); }
#line 2446 "bsdl_bison.tab.c"
    break;

  case 267: /* Action: IDENTIFIER Data_Name EQUAL LPAREN Action_Specification_List RPAREN  */
#line 842 "bsdl_bison.y"
                            { free ((yyvsp[-5].str)); }
#line 2452 "bsdl_bison.tab.c"
    break;

  case 268: /* Action: IDENTIFIER PROPRIETARY EQUAL LPAREN Action_Specification_List RPAREN  */
#line 844 "bsdl_bison.y"
                            { free ((yyvsp[-5].str)); }
#line 2458 "bsdl_bison.tab.c"
    break;

  case 269: /* Action: IDENTIFIER Data_Name PROPRIETARY EQUAL LPAREN Action_Specification_List RPAREN  */
#line 846 "bsdl_bison.y"
                            { free ((yyvsp[-6].str)); }
#line 2464 "bsdl_bison.tab.c"
    break;

  case 270: /* Action: error  */
#line 848 "bsdl_bison.y"
                            {
                              Print_Error (priv_data, _("Error in ISC_Action Definition"));
                              BUMP_ERROR;
                              YYABORT;
                            }
#line 2474 "bsdl_bison.tab.c"
    break;

  case 273: /* Action_Specification: IDENTIFIER  */
#line 858 "bsdl_bison.y"
                            { free ((yyvsp[0].str)); }
#line 2480 "bsdl_bison.tab.c"
    break;

  case 274: /* Action_Specification: IDENTIFIER Data_Name  */
#line 860 "bsdl_bison.y"
                            { free ((yyvsp[-1].str)); }
#line 2486 "bsdl_bison.tab.c"
    break;

  case 275: /* Action_Specification: IDENTIFIER Data_Name PROPRIETARY  */
#line 862 "bsdl_bison.y"
                            { free ((yyvsp[-2].str)); }
#line 2492 "bsdl_bison.tab.c"
    break;

  case 276: /* Action_Specification: IDENTIFIER Data_Name Option_Specification  */
#line 864 "bsdl_bison.y"
                            { free ((yyvsp[-2].str)); }
#line 2498 "bsdl_bison.tab.c"
    break;

  case 277: /* Action_Specification: IDENTIFIER Data_Name PROPRIETARY Option_Specification  */
#line 866 "bsdl_bison.y"
                            { free ((yyvsp[-3].str)); }
#line 2504 "bsdl_bison.tab.c"
    break;

  case 278: /* Action_Specification: IDENTIFIER PROPRIETARY  */
#line 868 "bsdl_bison.y"
                            { free ((yyvsp[-1].str)); }
#line 2510 "bsdl_bison.tab.c"
    break;

  case 279: /* Action_Specification: IDENTIFIER PROPRIETARY Option_Specification  */
#line 870 "bsdl_bison.y"
                            { free ((yyvsp[-2].str)); }
#line 2516 "bsdl_bison.tab.c"
    break;

  case 280: /* Action_Specification: IDENTIFIER Option_Specification  */
#line 872 "bsdl_bison.y"
                            { free ((yyvsp[-1].str)); }
#line 2522 "bsdl_bison.tab.c"
    break;

  case 284: /* Exit_Instruction_List: IDENTIFIER  */
#line 880 "bsdl_bison.y"
                        { free ((yyvsp[0].str)); }
#line 2528 "bsdl_bison.tab.c"
    break;

  case 285: /* Exit_Instruction_List: Exit_Instruction_List COMMA IDENTIFIER  */
#line 882 "bsdl_bison.y"
                        { free ((yyvsp[0].str)); }
#line 2534 "bsdl_bison.tab.c"
    break;


#line 2538 "bsdl_bison.tab.c"

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
  yytoken = yychar == URJ_BSDL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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

      if (yychar <= URJ_BSDL_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == URJ_BSDL_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, priv_data);
          yychar = URJ_BSDL_EMPTY;
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
  if (yychar != URJ_BSDL_EMPTY)
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

#line 885 "bsdl_bison.y"
  /* End rules, begin programs  */

/*----------------------------------------------------------------------*/
static void
Print_Error (urj_bsdl_parser_priv_t *priv_data, const char *Errmess)
{
    urj_bsdl_err (priv_data->jtag_ctrl->proc_mode,
                  _("Line %d, %s.\n"), priv_data->lineno, Errmess);

    /* set an error if nothing else is pending */
    if (urj_error_get () == URJ_ERROR_OK)
        urj_bsdl_err_set (priv_data->jtag_ctrl->proc_mode,
                          URJ_ERROR_BSDL_BSDL,
                          "Parser error, see log for details");
}

/*----------------------------------------------------------------------*/
static void
Print_Warning (urj_bsdl_parser_priv_t *priv_data, const char *Warnmess)
{
    urj_bsdl_warn (priv_data->jtag_ctrl->proc_mode,
                   _("Line %d, %s.\n"), priv_data->lineno, Warnmess);
}

/*----------------------------------------------------------------------*/
static void
Give_Up_And_Quit (urj_bsdl_parser_priv_t *priv_data)
{
    //Print_Error( priv_data, "Too many errors" );
    urj_bsdl_flex_stop_buffer (priv_data->scanner);
}

/*----------------------------------------------------------------------*/
void
yyerror (urj_bsdl_parser_priv_t *priv_data, const char *error_string)
{
}


/*****************************************************************************
 * void urj_bsdl_sem_init( urj_bsdl_parser_priv_t *priv )
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
urj_bsdl_sem_init (urj_bsdl_parser_priv_t *priv)
{
    urj_bsdl_jtag_ctrl_t *jc = priv->jtag_ctrl;

    jc->instr_len = -1;
    jc->bsr_len = -1;
    jc->conformance = URJ_BSDL_CONF_UNKNOWN;
    jc->idcode = NULL;
    jc->usercode = NULL;

    jc->instr_list = NULL;

    priv->ainfo.next = NULL;
    priv->ainfo.reg = NULL;
    priv->ainfo.instr_list = NULL;
    jc->ainfo_list = NULL;

    priv->tmp_cell_info.next = NULL;
    priv->tmp_cell_info.port_name = NULL;
    priv->tmp_cell_info.basic_safe_value = NULL;
    jc->cell_info_first = NULL;
    jc->cell_info_last = NULL;

    priv->tmp_port_desc.names_list = NULL;
    priv->tmp_port_desc.next = NULL;
}


/*****************************************************************************
 * void free_instr_list( struct instr_elem *il )
 *
 * Deallocates the given list of instr_elem.
 *
 * Parameters
 *   il : first instr_elem to deallocate
 *
 * Returns
 *   void
 ****************************************************************************/
static void
free_instr_list (urj_bsdl_instr_elem_t *il)
{
    if (il)
    {
        if (il->instr)
            free (il->instr);
        if (il->opcode)
            free (il->opcode);
        free_instr_list (il->next);
        free (il);
    }
}


/*****************************************************************************
 * void free_ainfo_list( urj_bsdl_types_ainfo_elem_t *ai, int free_me )
 *
 * Deallocates the given list of ainfo_elem.
 *
 * Parameters
 *  ai      : first ainfo_elem to deallocate
 *  free_me : set to 1 to free memory for ai as well
 *
 * Returns
 *  void
 ****************************************************************************/
static void
free_ainfo_list (urj_bsdl_types_ainfo_elem_t *ai, int free_me)
{
    if (ai)
    {
        if (ai->reg)
            free (ai->reg);

        free_instr_list (ai->instr_list);
        free_ainfo_list (ai->next, 1);

        if (free_me)
            free (ai);
    }
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
 * void free_c_list( urj_bsdl_cell_info_t *ci, int free_me )
 *
 * Deallocates the given list of cell_info items.
 *
 * Parameters
 *  ci      : first cell_info item to deallocate
 *  free_me : 1 -> free memory for *ci as well
 *            0 -> don't free *ci memory
 *
 * Returns
 *  void
 ****************************************************************************/
static void
free_ci_list (urj_bsdl_cell_info_t *ci, int free_me)
{
    if (ci)
    {
        free_ci_list (ci->next, 1);

        if (ci->port_name)
            free (ci->port_name);

        if (ci->basic_safe_value)
            free (ci->basic_safe_value);

        if (free_me)
            free (ci);
    }
}


/*****************************************************************************
 * void urj_bsdl_sem_deinit( urj_bsdl_parser_priv_t *priv )
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
urj_bsdl_sem_deinit (urj_bsdl_parser_priv_t *priv)
{
    urj_bsdl_jtag_ctrl_t *jc = priv->jtag_ctrl;

    if (jc->idcode)
    {
        free (jc->idcode);
        jc->idcode = NULL;
    }

    if (jc->usercode)
    {
        free (jc->usercode);
        jc->usercode = NULL;
    }

    /* free cell_info list */
    free_ci_list (jc->cell_info_first, 1);
    jc->cell_info_first = jc->cell_info_last = NULL;
    free_ci_list (&(priv->tmp_cell_info), 0);

    /* free instr_list */
    free_instr_list (jc->instr_list);
    jc->instr_list = NULL;

    /* free ainfo_list */
    free_ainfo_list (jc->ainfo_list, 1);
    jc->ainfo_list = NULL;
    free_ainfo_list (&(priv->ainfo), 0);

    /* free string list in temporary port descritor */
    free_string_list (priv->tmp_port_desc.names_list);
    priv->tmp_port_desc.names_list = NULL;
}


/*****************************************************************************
 * urj_bsdl_parser_priv_t *urj_bsdl_parser_init( urj_bsdl_jtag_ctrl_t *jtag_ctrl )
 *
 * Initializes storage elements in the private parser structure that are
 * used for parser maintenance purposes.
 * Subsequently calls initializer functions for the scanner and the semantic
 * parts.
 *
 * Parameters
 *   jtag_ctrl : pointer to jtag control structure
 *
 * Returns
 *   pointer to private parser structure
 ****************************************************************************/
urj_bsdl_parser_priv_t *
urj_bsdl_parser_init (urj_bsdl_jtag_ctrl_t *jtag_ctrl)
{
    urj_bsdl_parser_priv_t *new_priv;

    if (!(new_priv = malloc (sizeof (urj_bsdl_parser_priv_t))))
    {
        urj_bsdl_ftl_set (jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
        return NULL;
    }

    new_priv->jtag_ctrl = jtag_ctrl;

    if (!(new_priv->scanner = urj_bsdl_flex_init (jtag_ctrl->proc_mode)))
    {
        free (new_priv);
        new_priv = NULL;
    }

    urj_bsdl_sem_init (new_priv);

    return new_priv;
}


/*****************************************************************************
 * void urj_bsdl_parser_deinit( urj_bsdl_parser_priv_t *priv )
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
urj_bsdl_parser_deinit (urj_bsdl_parser_priv_t *priv_data)
{
    urj_bsdl_sem_deinit (priv_data);
    urj_bsdl_flex_deinit (priv_data->scanner);
    free (priv_data);
}


/*****************************************************************************
 * void add_instruction( urj_bsdl_parser_priv_t *priv, char *instr, char *opcode )
 *
 * Converts the instruction specification into a member of the main
 * list of instructions at priv->jtag_ctrl->instr_list.
 *
 * Parameters
 *   priv   : private data container for parser related tasks
 *   instr  : instruction name
 *   opcode : instruction opcode
 *
 * Returns
 *   void
 ****************************************************************************/
static void
add_instruction (urj_bsdl_parser_priv_t *priv, char *instr, char *opcode)
{
    urj_bsdl_instr_elem_t *new_instr;

    new_instr = malloc (sizeof (urj_bsdl_instr_elem_t));
    if (new_instr)
    {
        new_instr->next = priv->jtag_ctrl->instr_list;
        new_instr->instr = instr;
        new_instr->opcode = opcode;

        priv->jtag_ctrl->instr_list = new_instr;
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}


/*****************************************************************************
 * void ac_set_register( urj_bsdl_parser_priv_t *priv, char *reg, int reg_len )
 * Register Access management function
 *
 * Stores the register specification values for the current register access
 * specification in the temporary storage region for later usage.
 *
 * Parameters
 *   priv    : private data container for parser related tasks
 *   reg     : register name
 *   reg_len : optional register length
 *
 * Returns
 *   void
 ****************************************************************************/
static void
ac_set_register (urj_bsdl_parser_priv_t *priv, char *reg, int reg_len)
{
    urj_bsdl_types_ainfo_elem_t *tmp_ai = &(priv->ainfo);

    tmp_ai->reg = reg;
    tmp_ai->reg_len = reg_len;
}


/*****************************************************************************
 * void ac_add_instruction( urj_bsdl_parser_priv_t *priv, char *instr )
 * Register Access management function
 *
 * Appends the specified instruction to the list of instructions for the
 * current register access specification in the temporary storage region
 * for later usage.
 *
 * Parameters
 *   priv  : private data container for parser related tasks
 *   instr : instruction name
 *
 * Returns
 *   void
 ****************************************************************************/
static void
ac_add_instruction (urj_bsdl_parser_priv_t *priv, char *instr)
{
    urj_bsdl_types_ainfo_elem_t *tmp_ai = &(priv->ainfo);
    urj_bsdl_instr_elem_t *new_instr;

    new_instr = malloc (sizeof (urj_bsdl_instr_elem_t));
    if (new_instr)
    {
        new_instr->next = tmp_ai->instr_list;
        new_instr->instr = instr;
        new_instr->opcode = NULL;

        tmp_ai->instr_list = new_instr;
    }
    else
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}


/*****************************************************************************
 * void ac_apply_assoc( urj_bsdl_parser_priv_t *priv )
 * Register Access management function
 *
 * Appends the collected register access specification from the temporary
 * storage region to the main ainfo list.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
static void
ac_apply_assoc (urj_bsdl_parser_priv_t *priv)
{
    urj_bsdl_jtag_ctrl_t *jc = priv->jtag_ctrl;
    urj_bsdl_types_ainfo_elem_t *tmp_ai = &(priv->ainfo);
    urj_bsdl_types_ainfo_elem_t *new_ai;

    new_ai = malloc (sizeof (urj_bsdl_types_ainfo_elem_t));
    if (new_ai)
    {
        new_ai->next = jc->ainfo_list;
        new_ai->reg = tmp_ai->reg;
        new_ai->reg_len = tmp_ai->reg_len;
        new_ai->instr_list = tmp_ai->instr_list;

        jc->ainfo_list = new_ai;
    }
    else
        urj_bsdl_ftl_set (jc->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");

    /* clean up obsolete temporary entries */
    tmp_ai->reg = NULL;
    tmp_ai->reg_len = 0;
    tmp_ai->instr_list = NULL;
}


/*****************************************************************************
 * void prt_add_name( urj_bsdl_parser_priv_t *priv, char *name )
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
prt_add_name (urj_bsdl_parser_priv_t *priv, char *name)
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
 * void prt_add_bit( urj_bsdl_parser_priv_t *priv )
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
prt_add_bit (urj_bsdl_parser_priv_t *priv)
{
    urj_bsdl_port_desc_t *pd = &(priv->tmp_port_desc);

    pd->is_vector = 0;
    pd->low_idx = 0;
    pd->high_idx = 0;
}


/*****************************************************************************
 * void prt_add_range( urj_bsdl_parser_priv_t *priv, int low, int high )
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
prt_add_range (urj_bsdl_parser_priv_t *priv, int low, int high)
{
    urj_bsdl_port_desc_t *pd = &(priv->tmp_port_desc);

    pd->is_vector = 1;
    pd->low_idx = low;
    pd->high_idx = high;
}


/*****************************************************************************
 * void ci_no_disable( urj_bsdl_parser_priv_t *priv )
 * Cell Info management function
 *
 * Tracks that there is no disable term for the current cell info.
 *
 * Parameters
 *   priv : private data container for parser related tasks
 *
 * Returns
 *   void
 ****************************************************************************/
static void
ci_no_disable (urj_bsdl_parser_priv_t *priv)
{
    priv->tmp_cell_info.ctrl_bit_num = -1;
}


/*****************************************************************************
 * void ci_set_cell_spec_disable( urj_bsdl_parser_priv_t *priv, int ctrl_bit_num,
 *                                int safe_value, int disable_value )
 * Cell Info management function
 *
 * Applies the disable specification of the current cell spec to the variables
 * for temporary storage of these information elements.
 *
 * Parameters
 *   priv          : private data container for parser related tasks
 *   ctrl_bit_num  : bit number of related control cell
 *   safe_value    : safe value for initialization of this cell
 *   disable_value : currently ignored
 *
 * Returns
 *   void
 ****************************************************************************/
static void
ci_set_cell_spec_disable (urj_bsdl_parser_priv_t *priv, int ctrl_bit_num,
                          int safe_value, int disable_value)
{
    urj_bsdl_cell_info_t *ci = &(priv->tmp_cell_info);

    ci->ctrl_bit_num = ctrl_bit_num;
    ci->disable_safe_value = safe_value;
    /* disable value is ignored at the moment */
}


/*****************************************************************************
 * void ci_set_cell_spec( urj_bsdl_parser_priv_t *priv,
 *                        int function, char *safe_value )
 * Cell Info management function
 *
 * Sets the specified values of the current cell_spec (without disable term)
 * to the variables for temporary storage of these information elements.
 * The name of the related port is taken from the port_desc structure that
 * was filled in previously by the rule Port_Name.
 *
 * Parameters
 *   priv       : private data container for parser related tasks
 *   function   : cell function indentificator
 *   safe_value : safe value for initialization of this cell
 *
 * Returns
 *   void
 ****************************************************************************/
static void
ci_set_cell_spec (urj_bsdl_parser_priv_t *priv,
                  int function, char *safe_value)
{
    urj_bsdl_cell_info_t *ci = &(priv->tmp_cell_info);
    urj_bsdl_port_desc_t *pd = &(priv->tmp_port_desc);
    urj_bsdl_string_elem_t *name = priv->tmp_port_desc.names_list;
    char *port_string;
    size_t str_len, name_len;

    ci->cell_function = function;
    ci->basic_safe_value = safe_value;

    /* handle indexed port name:
       - names of scalar ports are simply copied from the port_desc structure
       to the final string that goes into ci
       - names of vectored ports are expanded with their decimal index as
       collected earlier earlier in rule Port_Name
     */
    name_len = strlen (name->string);
    str_len = name_len + 1 + 10 + 1 + 1;
    if ((port_string = malloc (str_len)) != NULL)
    {
        if (pd->is_vector)
            snprintf (port_string, str_len - 1, "%s(%d)", name->string,
                      pd->low_idx);
        else
            strncpy (port_string, name->string, str_len - 1);
        port_string[str_len - 1] = '\0';

        ci->port_name = port_string;
    }
    else
    {
        urj_bsdl_ftl_set (priv->jtag_ctrl->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
        ci->port_name = NULL;
    }

    free_string_list (priv->tmp_port_desc.names_list);
    priv->tmp_port_desc.names_list = NULL;
}


/*****************************************************************************
 * void ci_append_cell_info( urj_bsdl_parser_priv_t *priv, int bit_num )
 * Cell Info management function
 *
 * Appends the temporary cell info to the global list of cell infos.
 *
 * Parameters
 *   priv    : private data container for parser related tasks
 *   bit_num : bit number of current cell
 *
 * Returns
 *   void
 ****************************************************************************/
static void
ci_append_cell_info (urj_bsdl_parser_priv_t *priv, int bit_num)
{
    urj_bsdl_cell_info_t *tmp_ci = &(priv->tmp_cell_info);
    urj_bsdl_cell_info_t *ci;
    urj_bsdl_jtag_ctrl_t *jc = priv->jtag_ctrl;

    ci = malloc (sizeof (urj_bsdl_cell_info_t));
    if (ci)
    {
        ci->next = NULL;
        if (jc->cell_info_last)
            jc->cell_info_last->next = ci;
        else
            jc->cell_info_first = ci;
        jc->cell_info_last = ci;

        ci->bit_num = bit_num;
        ci->port_name = tmp_ci->port_name;
        ci->cell_function = tmp_ci->cell_function;
        ci->basic_safe_value = tmp_ci->basic_safe_value;
        ci->ctrl_bit_num = tmp_ci->ctrl_bit_num;
        ci->disable_safe_value = tmp_ci->disable_safe_value;

        tmp_ci->port_name = NULL;
        tmp_ci->basic_safe_value = NULL;
    }
    else
        urj_bsdl_ftl_set (jc->proc_mode, URJ_ERROR_OUT_OF_MEMORY,
                          "No memory");
}


/*
 Local Variables:
 mode:C
 c-default-style:java
 indent-tabs-mode:nil
 End:
*/
