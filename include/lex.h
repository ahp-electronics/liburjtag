/*
 * A little glue to keep generated lex code warning free
 */

#ifndef _LEX_H
#define _LEX_H

#ifdef  __cplusplus
extern "C" {
#endif

#include "ansidecl.h"

/* Fix up warnings from generated lex code */
static int input (yyscan_t) ATTRIBUTE_UNUSED;
static void yyunput (int, char *, yyscan_t) ATTRIBUTE_UNUSED;
int lex_get_column (yyscan_t);
void lex_set_column (int, yyscan_t);

#ifdef  __cplusplus
}
#endif

#endif
