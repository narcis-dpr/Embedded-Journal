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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zconfparse
#define yylex           zconflex
#define yyerror         zconferror
#define yydebug         zconfdebug
#define yynerrs         zconfnerrs
#define yylval          zconflval
#define yychar          zconfchar

/* First part of user prologue.  */

/*
 * Copyright (C) 2002 Roman Zippel <zippel@linux-m68k.org>
 * Released under the terms of the GNU GPL v2.0.
 */

#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "lkc.h"

#define printd(mask, fmt...) if (cdebug & (mask)) printf(fmt)

#define PRINTD		0x0001
#define DEBUG_PARSE	0x0002

int cdebug = PRINTD;

extern int zconflex(void);
static void zconfprint(const char *err, ...);
static void zconf_error(const char *err, ...);
static void zconferror(const char *err);
static bool zconf_endtoken(const struct kconf_id *id, int starttoken, int endtoken);

struct symbol *symbol_hash[SYMBOL_HASHSIZE];

static struct menu *current_menu, *current_entry;



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
extern int zconfdebug;
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
    T_MAINMENU = 258,              /* T_MAINMENU  */
    T_MENU = 259,                  /* T_MENU  */
    T_ENDMENU = 260,               /* T_ENDMENU  */
    T_SOURCE = 261,                /* T_SOURCE  */
    T_CHOICE = 262,                /* T_CHOICE  */
    T_ENDCHOICE = 263,             /* T_ENDCHOICE  */
    T_COMMENT = 264,               /* T_COMMENT  */
    T_CONFIG = 265,                /* T_CONFIG  */
    T_MENUCONFIG = 266,            /* T_MENUCONFIG  */
    T_HELP = 267,                  /* T_HELP  */
    T_HELPTEXT = 268,              /* T_HELPTEXT  */
    T_IF = 269,                    /* T_IF  */
    T_ENDIF = 270,                 /* T_ENDIF  */
    T_DEPENDS = 271,               /* T_DEPENDS  */
    T_OPTIONAL = 272,              /* T_OPTIONAL  */
    T_PROMPT = 273,                /* T_PROMPT  */
    T_TYPE = 274,                  /* T_TYPE  */
    T_DEFAULT = 275,               /* T_DEFAULT  */
    T_SELECT = 276,                /* T_SELECT  */
    T_IMPLY = 277,                 /* T_IMPLY  */
    T_RANGE = 278,                 /* T_RANGE  */
    T_VISIBLE = 279,               /* T_VISIBLE  */
    T_OPTION = 280,                /* T_OPTION  */
    T_ON = 281,                    /* T_ON  */
    T_WORD = 282,                  /* T_WORD  */
    T_WORD_QUOTE = 283,            /* T_WORD_QUOTE  */
    T_UNEQUAL = 284,               /* T_UNEQUAL  */
    T_LESS = 285,                  /* T_LESS  */
    T_LESS_EQUAL = 286,            /* T_LESS_EQUAL  */
    T_GREATER = 287,               /* T_GREATER  */
    T_GREATER_EQUAL = 288,         /* T_GREATER_EQUAL  */
    T_CLOSE_PAREN = 289,           /* T_CLOSE_PAREN  */
    T_OPEN_PAREN = 290,            /* T_OPEN_PAREN  */
    T_EOL = 291,                   /* T_EOL  */
    T_OR = 292,                    /* T_OR  */
    T_AND = 293,                   /* T_AND  */
    T_EQUAL = 294,                 /* T_EQUAL  */
    T_NOT = 295                    /* T_NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_MAINMENU 258
#define T_MENU 259
#define T_ENDMENU 260
#define T_SOURCE 261
#define T_CHOICE 262
#define T_ENDCHOICE 263
#define T_COMMENT 264
#define T_CONFIG 265
#define T_MENUCONFIG 266
#define T_HELP 267
#define T_HELPTEXT 268
#define T_IF 269
#define T_ENDIF 270
#define T_DEPENDS 271
#define T_OPTIONAL 272
#define T_PROMPT 273
#define T_TYPE 274
#define T_DEFAULT 275
#define T_SELECT 276
#define T_IMPLY 277
#define T_RANGE 278
#define T_VISIBLE 279
#define T_OPTION 280
#define T_ON 281
#define T_WORD 282
#define T_WORD_QUOTE 283
#define T_UNEQUAL 284
#define T_LESS 285
#define T_LESS_EQUAL 286
#define T_GREATER 287
#define T_GREATER_EQUAL 288
#define T_CLOSE_PAREN 289
#define T_OPEN_PAREN 290
#define T_EOL 291
#define T_OR 292
#define T_AND 293
#define T_EQUAL 294
#define T_NOT 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

	char *string;
	struct file *file;
	struct symbol *symbol;
	struct expr *expr;
	struct menu *menu;
	const struct kconf_id *id;


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zconflval;


int zconfparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_MAINMENU = 3,                 /* T_MAINMENU  */
  YYSYMBOL_T_MENU = 4,                     /* T_MENU  */
  YYSYMBOL_T_ENDMENU = 5,                  /* T_ENDMENU  */
  YYSYMBOL_T_SOURCE = 6,                   /* T_SOURCE  */
  YYSYMBOL_T_CHOICE = 7,                   /* T_CHOICE  */
  YYSYMBOL_T_ENDCHOICE = 8,                /* T_ENDCHOICE  */
  YYSYMBOL_T_COMMENT = 9,                  /* T_COMMENT  */
  YYSYMBOL_T_CONFIG = 10,                  /* T_CONFIG  */
  YYSYMBOL_T_MENUCONFIG = 11,              /* T_MENUCONFIG  */
  YYSYMBOL_T_HELP = 12,                    /* T_HELP  */
  YYSYMBOL_T_HELPTEXT = 13,                /* T_HELPTEXT  */
  YYSYMBOL_T_IF = 14,                      /* T_IF  */
  YYSYMBOL_T_ENDIF = 15,                   /* T_ENDIF  */
  YYSYMBOL_T_DEPENDS = 16,                 /* T_DEPENDS  */
  YYSYMBOL_T_OPTIONAL = 17,                /* T_OPTIONAL  */
  YYSYMBOL_T_PROMPT = 18,                  /* T_PROMPT  */
  YYSYMBOL_T_TYPE = 19,                    /* T_TYPE  */
  YYSYMBOL_T_DEFAULT = 20,                 /* T_DEFAULT  */
  YYSYMBOL_T_SELECT = 21,                  /* T_SELECT  */
  YYSYMBOL_T_IMPLY = 22,                   /* T_IMPLY  */
  YYSYMBOL_T_RANGE = 23,                   /* T_RANGE  */
  YYSYMBOL_T_VISIBLE = 24,                 /* T_VISIBLE  */
  YYSYMBOL_T_OPTION = 25,                  /* T_OPTION  */
  YYSYMBOL_T_ON = 26,                      /* T_ON  */
  YYSYMBOL_T_WORD = 27,                    /* T_WORD  */
  YYSYMBOL_T_WORD_QUOTE = 28,              /* T_WORD_QUOTE  */
  YYSYMBOL_T_UNEQUAL = 29,                 /* T_UNEQUAL  */
  YYSYMBOL_T_LESS = 30,                    /* T_LESS  */
  YYSYMBOL_T_LESS_EQUAL = 31,              /* T_LESS_EQUAL  */
  YYSYMBOL_T_GREATER = 32,                 /* T_GREATER  */
  YYSYMBOL_T_GREATER_EQUAL = 33,           /* T_GREATER_EQUAL  */
  YYSYMBOL_T_CLOSE_PAREN = 34,             /* T_CLOSE_PAREN  */
  YYSYMBOL_T_OPEN_PAREN = 35,              /* T_OPEN_PAREN  */
  YYSYMBOL_T_EOL = 36,                     /* T_EOL  */
  YYSYMBOL_T_OR = 37,                      /* T_OR  */
  YYSYMBOL_T_AND = 38,                     /* T_AND  */
  YYSYMBOL_T_EQUAL = 39,                   /* T_EQUAL  */
  YYSYMBOL_T_NOT = 40,                     /* T_NOT  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_input = 42,                     /* input  */
  YYSYMBOL_start = 43,                     /* start  */
  YYSYMBOL_stmt_list = 44,                 /* stmt_list  */
  YYSYMBOL_option_name = 45,               /* option_name  */
  YYSYMBOL_common_stmt = 46,               /* common_stmt  */
  YYSYMBOL_option_error = 47,              /* option_error  */
  YYSYMBOL_config_entry_start = 48,        /* config_entry_start  */
  YYSYMBOL_config_stmt = 49,               /* config_stmt  */
  YYSYMBOL_menuconfig_entry_start = 50,    /* menuconfig_entry_start  */
  YYSYMBOL_menuconfig_stmt = 51,           /* menuconfig_stmt  */
  YYSYMBOL_config_option_list = 52,        /* config_option_list  */
  YYSYMBOL_config_option = 53,             /* config_option  */
  YYSYMBOL_symbol_option = 54,             /* symbol_option  */
  YYSYMBOL_symbol_option_list = 55,        /* symbol_option_list  */
  YYSYMBOL_symbol_option_arg = 56,         /* symbol_option_arg  */
  YYSYMBOL_choice = 57,                    /* choice  */
  YYSYMBOL_choice_entry = 58,              /* choice_entry  */
  YYSYMBOL_choice_end = 59,                /* choice_end  */
  YYSYMBOL_choice_stmt = 60,               /* choice_stmt  */
  YYSYMBOL_choice_option_list = 61,        /* choice_option_list  */
  YYSYMBOL_choice_option = 62,             /* choice_option  */
  YYSYMBOL_choice_block = 63,              /* choice_block  */
  YYSYMBOL_if_entry = 64,                  /* if_entry  */
  YYSYMBOL_if_end = 65,                    /* if_end  */
  YYSYMBOL_if_stmt = 66,                   /* if_stmt  */
  YYSYMBOL_if_block = 67,                  /* if_block  */
  YYSYMBOL_mainmenu_stmt = 68,             /* mainmenu_stmt  */
  YYSYMBOL_menu = 69,                      /* menu  */
  YYSYMBOL_menu_entry = 70,                /* menu_entry  */
  YYSYMBOL_menu_end = 71,                  /* menu_end  */
  YYSYMBOL_menu_stmt = 72,                 /* menu_stmt  */
  YYSYMBOL_menu_block = 73,                /* menu_block  */
  YYSYMBOL_source_stmt = 74,               /* source_stmt  */
  YYSYMBOL_comment = 75,                   /* comment  */
  YYSYMBOL_comment_stmt = 76,              /* comment_stmt  */
  YYSYMBOL_help_start = 77,                /* help_start  */
  YYSYMBOL_help = 78,                      /* help  */
  YYSYMBOL_depends_list = 79,              /* depends_list  */
  YYSYMBOL_depends = 80,                   /* depends  */
  YYSYMBOL_visibility_list = 81,           /* visibility_list  */
  YYSYMBOL_visible = 82,                   /* visible  */
  YYSYMBOL_prompt_stmt_opt = 83,           /* prompt_stmt_opt  */
  YYSYMBOL_prompt = 84,                    /* prompt  */
  YYSYMBOL_end = 85,                       /* end  */
  YYSYMBOL_nl = 86,                        /* nl  */
  YYSYMBOL_if_expr = 87,                   /* if_expr  */
  YYSYMBOL_expr = 88,                      /* expr  */
  YYSYMBOL_symbol = 89,                    /* symbol  */
  YYSYMBOL_word_opt = 90                   /* word_opt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */

/* Include zconf_id.c here so it can see the token constants. */
#include "kconf_id.c"



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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   301

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   109,   111,   111,   113,   115,   116,   117,
     118,   119,   120,   124,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   132,   133,   134,   135,   136,   137,   141,
     142,   148,   156,   162,   170,   180,   182,   183,   184,   185,
     186,   187,   190,   198,   204,   214,   220,   226,   232,   235,
     237,   248,   249,   254,   263,   268,   276,   279,   281,   282,
     283,   284,   285,   288,   294,   305,   311,   321,   323,   328,
     336,   344,   347,   349,   350,   351,   356,   363,   370,   375,
     383,   386,   388,   389,   390,   393,   401,   408,   415,   421,
     428,   430,   431,   432,   435,   443,   445,   446,   449,   456,
     458,   463,   464,   467,   468,   469,   473,   474,   477,   478,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   494,   495,   498,   499
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
  "\"end of file\"", "error", "\"invalid token\"", "T_MAINMENU", "T_MENU",
  "T_ENDMENU", "T_SOURCE", "T_CHOICE", "T_ENDCHOICE", "T_COMMENT",
  "T_CONFIG", "T_MENUCONFIG", "T_HELP", "T_HELPTEXT", "T_IF", "T_ENDIF",
  "T_DEPENDS", "T_OPTIONAL", "T_PROMPT", "T_TYPE", "T_DEFAULT", "T_SELECT",
  "T_IMPLY", "T_RANGE", "T_VISIBLE", "T_OPTION", "T_ON", "T_WORD",
  "T_WORD_QUOTE", "T_UNEQUAL", "T_LESS", "T_LESS_EQUAL", "T_GREATER",
  "T_GREATER_EQUAL", "T_CLOSE_PAREN", "T_OPEN_PAREN", "T_EOL", "T_OR",
  "T_AND", "T_EQUAL", "T_NOT", "$accept", "input", "start", "stmt_list",
  "option_name", "common_stmt", "option_error", "config_entry_start",
  "config_stmt", "menuconfig_entry_start", "menuconfig_stmt",
  "config_option_list", "config_option", "symbol_option",
  "symbol_option_list", "symbol_option_arg", "choice", "choice_entry",
  "choice_end", "choice_stmt", "choice_option_list", "choice_option",
  "choice_block", "if_entry", "if_end", "if_stmt", "if_block",
  "mainmenu_stmt", "menu", "menu_entry", "menu_end", "menu_stmt",
  "menu_block", "source_stmt", "comment", "comment_stmt", "help_start",
  "help", "depends_list", "depends", "visibility_list", "visible",
  "prompt_stmt_opt", "prompt", "end", "nl", "if_expr", "expr", "symbol",
  "word_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,    41,   -92,    15,   -92,   150,   -92,    19,   -92,   -92,
     -13,   -92,    28,    41,    38,    41,    50,    47,    41,    79,
      82,    44,    76,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   118,   -92,   129,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   184,   -92,   -92,   107,   -92,   111,   -92,   113,
     -92,   116,   -92,   139,   140,   151,   -92,   -92,    44,    44,
     142,   256,   -92,   160,   173,    27,   117,    80,    51,   255,
     -15,   255,   217,   -92,   -92,   -92,   -92,   -92,   -92,    -8,
     -92,    44,    44,   107,    87,    87,    87,    87,    87,    87,
     -92,   -92,   174,   176,   187,    41,    41,    44,   188,   189,
      87,   -92,   213,   -92,   -92,   -92,   -92,   206,   -92,   -92,
     193,    41,    41,   203,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   229,   -92,   241,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     216,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
      44,   229,   222,   229,    64,   229,   229,    87,    31,   231,
     -92,   -92,   229,   236,   229,    44,   -92,   145,   242,   -92,
     -92,   243,   244,   245,   229,   251,   -92,   -92,   247,   -92,
     257,   125,   -92,   -92,   -92,   -92,   -92,   260,    41,   -92,
     -92,   -92,   -92,   -92
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,   106,     0,     3,     0,     6,     6,   101,   102,
       0,     1,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,    14,    19,    15,    16,    21,    17,    18,
      20,    22,     0,    23,     0,     7,    35,    26,    35,    27,
      57,    67,     8,    72,    24,    95,    81,     9,    28,    90,
      25,    10,     0,   107,     2,    76,    13,     0,   103,     0,
     124,     0,   104,     0,     0,     0,   121,   122,     0,     0,
       0,   110,   105,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,    77,    85,    53,    86,    31,    33,     0,
     118,     0,     0,    69,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    99,     0,     0,     0,
       0,    49,     0,    41,    40,    36,    37,     0,    39,    38,
       0,     0,    99,     0,    61,    62,    58,    60,    59,    68,
      56,    55,    73,    75,    71,    74,    70,   108,    97,     0,
      96,    82,    84,    80,    83,    79,    92,    93,    91,   117,
     119,   120,   116,   111,   112,   113,   114,   115,    30,    88,
       0,   108,     0,   108,   108,   108,   108,     0,     0,     0,
      89,    65,   108,     0,   108,     0,    98,     0,     0,    42,
     100,     0,     0,     0,   108,    51,    48,    29,     0,    64,
       0,   109,    94,    43,    44,    45,    46,     0,     0,    50,
      63,    66,    47,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   285,   291,   -92,    32,   -66,   -92,   -92,   -92,
     -92,   261,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     1,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,    24,   -92,   -92,   -92,   -92,   -92,   221,   220,   -64,
     -92,   -92,   179,    -1,    67,     0,   110,   -67,   -91,   -92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    34,    35,   114,    36,    37,    38,
      39,    75,   115,   116,   168,   199,    40,    41,   130,    42,
      77,   126,    78,    43,   134,    44,    79,     6,    45,    46,
     143,    47,    81,    48,    49,    50,   117,   118,    82,   119,
      80,   140,   162,   163,    51,     7,   176,    70,    71,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    89,    90,   152,   153,   154,   155,   156,   157,   137,
      55,   125,    57,   128,    59,    11,   147,    63,   148,   167,
       1,   138,     1,     2,   150,   151,   149,   -32,   102,    91,
      92,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   103,
     164,   -32,   -32,   104,   -32,   105,   106,   107,   108,   109,
     110,   -32,   111,     2,   112,    53,    14,    15,   185,    17,
      18,    19,    20,   113,    56,    21,    22,   186,     8,     9,
      93,    66,    67,   147,    58,   148,   184,    60,   175,    68,
     133,   102,   142,    62,    69,   -54,   -54,    33,   -54,   -54,
     -54,   -54,   103,   177,   -54,   -54,   104,   120,   121,   122,
     123,    91,    92,   135,   161,   144,    64,   112,   191,    65,
     129,   132,    72,   141,    66,    67,   124,   -34,   102,    73,
     172,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   103,
      74,   -34,   -34,   104,   -34,   105,   106,   107,   108,   109,
     110,   -34,   111,    53,   112,   131,   136,    83,   145,    84,
      -5,    12,    85,   113,    13,    14,    15,    16,    17,    18,
      19,    20,    91,    92,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    86,    87,    32,     2,    91,
      92,   192,    91,    92,    -4,    12,    33,    88,    13,    14,
      15,    16,    17,    18,    19,    20,   100,   203,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   101,
     158,    32,   159,   160,   169,   165,   166,   -87,   102,   170,
      33,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   171,
     174,   -87,   -87,   104,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   102,   175,   112,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   146,    92,   -78,   -78,   104,   179,    13,
      14,    15,    16,    17,    18,    19,    20,   187,   112,    21,
      22,   178,   189,   180,   181,   182,   183,   146,   193,   194,
     195,   196,   188,   200,   190,    94,    95,    96,    97,    98,
     198,    33,    54,   201,   197,    99,   202,    52,   127,    76,
     139,   173
};

static const yytype_uint8 yycheck[] =
{
       1,    68,    69,    94,    95,    96,    97,    98,    99,    24,
      10,    77,    13,    77,    15,     0,    82,    18,    82,   110,
       3,    36,     3,    36,    91,    92,    34,     0,     1,    37,
      38,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     107,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    36,    27,    36,     5,     6,    27,     8,
       9,    10,    11,    36,    36,    14,    15,    36,    27,    28,
      70,    27,    28,   139,    36,   139,   167,    27,    14,    35,
      79,     1,    81,    36,    40,     5,     6,    36,     8,     9,
      10,    11,    12,   160,    14,    15,    16,    17,    18,    19,
      20,    37,    38,    79,   105,    81,    27,    27,   175,    27,
      78,    79,    36,    81,    27,    28,    36,     0,     1,     1,
     121,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    36,    27,    78,    79,    36,    81,    36,
       0,     1,    36,    36,     4,     5,     6,     7,     8,     9,
      10,    11,    37,    38,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    36,    36,    27,    36,    37,
      38,    36,    37,    38,     0,     1,    36,    36,     4,     5,
       6,     7,     8,     9,    10,    11,    36,   198,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    36,
      36,    27,    36,    26,     1,    27,    27,     0,     1,    13,
      36,     4,     5,     6,     7,     8,     9,    10,    11,    36,
      27,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     1,    14,    27,     4,     5,     6,     7,     8,
       9,    10,    11,    36,    38,    14,    15,    16,    36,     4,
       5,     6,     7,     8,     9,    10,    11,    36,    27,    14,
      15,   161,    36,   163,   164,   165,   166,    36,    36,    36,
      36,    36,   172,    36,   174,    29,    30,    31,    32,    33,
      39,    36,     7,    36,   184,    39,    36,     6,    77,    38,
      80,   122
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    36,    42,    43,    44,    68,    86,    27,    28,
      84,     0,     1,     4,     5,     6,     7,     8,     9,    10,
      11,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    27,    36,    45,    46,    48,    49,    50,    51,
      57,    58,    60,    64,    66,    69,    70,    72,    74,    75,
      76,    85,    44,    36,    43,    86,    36,    84,    36,    84,
      27,    90,    36,    84,    27,    27,    27,    28,    35,    40,
      88,    89,    36,     1,     1,    52,    52,    61,    63,    67,
      81,    73,    79,    36,    36,    36,    36,    36,    36,    88,
      88,    37,    38,    86,    29,    30,    31,    32,    33,    39,
      36,    36,     1,    12,    16,    18,    19,    20,    21,    22,
      23,    25,    27,    36,    47,    53,    54,    77,    78,    80,
      17,    18,    19,    20,    36,    47,    62,    78,    80,    46,
      59,    85,    46,    60,    65,    72,    85,    24,    36,    79,
      82,    46,    60,    71,    72,    85,    36,    47,    80,    34,
      88,    88,    89,    89,    89,    89,    89,    89,    36,    36,
      26,    84,    83,    84,    88,    27,    27,    89,    55,     1,
      13,    36,    84,    83,    27,    14,    87,    88,    87,    36,
      87,    87,    87,    87,    89,    27,    36,    36,    87,    36,
      87,    88,    36,    36,    36,    36,    36,    87,    39,    56,
      36,    36,    36,    84
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    44,    44,    44,    44,
      44,    44,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    46,    46,    46,    46,    46,    46,    47,
      47,    48,    49,    50,    51,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    53,    53,    53,    54,    55,
      55,    56,    56,    57,    58,    59,    60,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    63,    63,    64,
      65,    66,    67,    67,    67,    67,    68,    69,    70,    71,
      72,    73,    73,    73,    73,    74,    75,    76,    77,    78,
      79,    79,    79,    79,    80,    81,    81,    81,    82,    83,
      83,    84,    84,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     0,     2,     2,     2,
       2,     4,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     2,     3,     2,     0,     2,     2,     2,     2,
       2,     2,     3,     4,     4,     4,     4,     5,     3,     0,
       3,     0,     2,     3,     2,     1,     3,     0,     2,     2,
       2,     2,     2,     4,     3,     2,     4,     0,     2,     3,
       1,     3,     0,     2,     2,     2,     3,     3,     3,     1,
       3,     0,     2,     2,     2,     3,     3,     2,     2,     2,
       0,     2,     2,     2,     4,     0,     2,     2,     2,     0,
       2,     1,     1,     2,     2,     2,     1,     2,     0,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     1,     1,     0,     1
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
        yyerror (YY_("syntax error: cannot back up")); \
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
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_choice_entry: /* choice_entry  */
            {
	fprintf(stderr, "%s:%d: missing end statement for this entry\n",
		((*yyvaluep).menu)->file->name, ((*yyvaluep).menu)->lineno);
	if (current_menu == ((*yyvaluep).menu))
		menu_end_menu();
}
        break;

    case YYSYMBOL_if_entry: /* if_entry  */
            {
	fprintf(stderr, "%s:%d: missing end statement for this entry\n",
		((*yyvaluep).menu)->file->name, ((*yyvaluep).menu)->lineno);
	if (current_menu == ((*yyvaluep).menu))
		menu_end_menu();
}
        break;

    case YYSYMBOL_menu_entry: /* menu_entry  */
            {
	fprintf(stderr, "%s:%d: missing end statement for this entry\n",
		((*yyvaluep).menu)->file->name, ((*yyvaluep).menu)->lineno);
	if (current_menu == ((*yyvaluep).menu))
		menu_end_menu();
}
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
  case 10: /* stmt_list: stmt_list end  */
                                        { zconf_error("unexpected end statement"); }
    break;

  case 11: /* stmt_list: stmt_list T_WORD error T_EOL  */
                                        { zconf_error("unknown statement \"%s\"", (yyvsp[-2].string)); }
    break;

  case 12: /* stmt_list: stmt_list option_name error T_EOL  */
{
	zconf_error("unexpected option \"%s\"", (yyvsp[-2].id)->name);
}
    break;

  case 13: /* stmt_list: stmt_list error T_EOL  */
                                        { zconf_error("invalid statement"); }
    break;

  case 29: /* option_error: T_WORD error T_EOL  */
                                        { zconf_error("unknown option \"%s\"", (yyvsp[-2].string)); }
    break;

  case 30: /* option_error: error T_EOL  */
                                        { zconf_error("invalid option"); }
    break;

  case 31: /* config_entry_start: T_CONFIG T_WORD T_EOL  */
{
	struct symbol *sym = sym_lookup((yyvsp[-1].string), 0);
	sym->flags |= SYMBOL_OPTIONAL;
	menu_add_entry(sym);
	printd(DEBUG_PARSE, "%s:%d:config %s\n", zconf_curname(), zconf_lineno(), (yyvsp[-1].string));
}
    break;

  case 32: /* config_stmt: config_entry_start config_option_list  */
{
	menu_end_entry();
	printd(DEBUG_PARSE, "%s:%d:endconfig\n", zconf_curname(), zconf_lineno());
}
    break;

  case 33: /* menuconfig_entry_start: T_MENUCONFIG T_WORD T_EOL  */
{
	struct symbol *sym = sym_lookup((yyvsp[-1].string), 0);
	sym->flags |= SYMBOL_OPTIONAL;
	menu_add_entry(sym);
	printd(DEBUG_PARSE, "%s:%d:menuconfig %s\n", zconf_curname(), zconf_lineno(), (yyvsp[-1].string));
}
    break;

  case 34: /* menuconfig_stmt: menuconfig_entry_start config_option_list  */
{
	if (current_entry->prompt)
		current_entry->prompt->type = P_MENU;
	else
		zconfprint("warning: menuconfig statement without prompt");
	menu_end_entry();
	printd(DEBUG_PARSE, "%s:%d:endconfig\n", zconf_curname(), zconf_lineno());
}
    break;

  case 42: /* config_option: T_TYPE prompt_stmt_opt T_EOL  */
{
	menu_set_type((yyvsp[-2].id)->stype);
	printd(DEBUG_PARSE, "%s:%d:type(%u)\n",
		zconf_curname(), zconf_lineno(),
		(yyvsp[-2].id)->stype);
}
    break;

  case 43: /* config_option: T_PROMPT prompt if_expr T_EOL  */
{
	menu_add_prompt(P_PROMPT, (yyvsp[-2].string), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:prompt\n", zconf_curname(), zconf_lineno());
}
    break;

  case 44: /* config_option: T_DEFAULT expr if_expr T_EOL  */
{
	menu_add_expr(P_DEFAULT, (yyvsp[-2].expr), (yyvsp[-1].expr));
	if ((yyvsp[-3].id)->stype != S_UNKNOWN)
		menu_set_type((yyvsp[-3].id)->stype);
	printd(DEBUG_PARSE, "%s:%d:default(%u)\n",
		zconf_curname(), zconf_lineno(),
		(yyvsp[-3].id)->stype);
}
    break;

  case 45: /* config_option: T_SELECT T_WORD if_expr T_EOL  */
{
	menu_add_symbol(P_SELECT, sym_lookup((yyvsp[-2].string), 0), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:select\n", zconf_curname(), zconf_lineno());
}
    break;

  case 46: /* config_option: T_IMPLY T_WORD if_expr T_EOL  */
{
	menu_add_symbol(P_IMPLY, sym_lookup((yyvsp[-2].string), 0), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:imply\n", zconf_curname(), zconf_lineno());
}
    break;

  case 47: /* config_option: T_RANGE symbol symbol if_expr T_EOL  */
{
	menu_add_expr(P_RANGE, expr_alloc_comp(E_RANGE,(yyvsp[-3].symbol), (yyvsp[-2].symbol)), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:range\n", zconf_curname(), zconf_lineno());
}
    break;

  case 50: /* symbol_option_list: symbol_option_list T_WORD symbol_option_arg  */
{
	const struct kconf_id *id = kconf_id_lookup((yyvsp[-1].string), strlen((yyvsp[-1].string)));
	if (id && id->flags & TF_OPTION)
		menu_add_option(id->token, (yyvsp[0].string));
	else
		zconfprint("warning: ignoring unknown option %s", (yyvsp[-1].string));
	free((yyvsp[-1].string));
}
    break;

  case 51: /* symbol_option_arg: %empty  */
                                { (yyval.string) = NULL; }
    break;

  case 52: /* symbol_option_arg: T_EQUAL prompt  */
                                { (yyval.string) = (yyvsp[0].string); }
    break;

  case 53: /* choice: T_CHOICE word_opt T_EOL  */
{
	struct symbol *sym = sym_lookup((yyvsp[-1].string), SYMBOL_CHOICE);
	sym->flags |= SYMBOL_AUTO;
	menu_add_entry(sym);
	menu_add_expr(P_CHOICE, NULL, NULL);
	printd(DEBUG_PARSE, "%s:%d:choice\n", zconf_curname(), zconf_lineno());
}
    break;

  case 54: /* choice_entry: choice choice_option_list  */
{
	(yyval.menu) = menu_add_menu();
}
    break;

  case 55: /* choice_end: end  */
{
	if (zconf_endtoken((yyvsp[0].id), T_CHOICE, T_ENDCHOICE)) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endchoice\n", zconf_curname(), zconf_lineno());
	}
}
    break;

  case 63: /* choice_option: T_PROMPT prompt if_expr T_EOL  */
{
	menu_add_prompt(P_PROMPT, (yyvsp[-2].string), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:prompt\n", zconf_curname(), zconf_lineno());
}
    break;

  case 64: /* choice_option: T_TYPE prompt_stmt_opt T_EOL  */
{
	if ((yyvsp[-2].id)->stype == S_BOOLEAN || (yyvsp[-2].id)->stype == S_TRISTATE) {
		menu_set_type((yyvsp[-2].id)->stype);
		printd(DEBUG_PARSE, "%s:%d:type(%u)\n",
			zconf_curname(), zconf_lineno(),
			(yyvsp[-2].id)->stype);
	} else
		YYERROR;
}
    break;

  case 65: /* choice_option: T_OPTIONAL T_EOL  */
{
	current_entry->sym->flags |= SYMBOL_OPTIONAL;
	printd(DEBUG_PARSE, "%s:%d:optional\n", zconf_curname(), zconf_lineno());
}
    break;

  case 66: /* choice_option: T_DEFAULT T_WORD if_expr T_EOL  */
{
	if ((yyvsp[-3].id)->stype == S_UNKNOWN) {
		menu_add_symbol(P_DEFAULT, sym_lookup((yyvsp[-2].string), 0), (yyvsp[-1].expr));
		printd(DEBUG_PARSE, "%s:%d:default\n",
			zconf_curname(), zconf_lineno());
	} else
		YYERROR;
}
    break;

  case 69: /* if_entry: T_IF expr nl  */
{
	printd(DEBUG_PARSE, "%s:%d:if\n", zconf_curname(), zconf_lineno());
	menu_add_entry(NULL);
	menu_add_dep((yyvsp[-1].expr));
	(yyval.menu) = menu_add_menu();
}
    break;

  case 70: /* if_end: end  */
{
	if (zconf_endtoken((yyvsp[0].id), T_IF, T_ENDIF)) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endif\n", zconf_curname(), zconf_lineno());
	}
}
    break;

  case 76: /* mainmenu_stmt: T_MAINMENU prompt nl  */
{
	menu_add_prompt(P_MENU, (yyvsp[-1].string), NULL);
}
    break;

  case 77: /* menu: T_MENU prompt T_EOL  */
{
	menu_add_entry(NULL);
	menu_add_prompt(P_MENU, (yyvsp[-1].string), NULL);
	printd(DEBUG_PARSE, "%s:%d:menu\n", zconf_curname(), zconf_lineno());
}
    break;

  case 78: /* menu_entry: menu visibility_list depends_list  */
{
	(yyval.menu) = menu_add_menu();
}
    break;

  case 79: /* menu_end: end  */
{
	if (zconf_endtoken((yyvsp[0].id), T_MENU, T_ENDMENU)) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endmenu\n", zconf_curname(), zconf_lineno());
	}
}
    break;

  case 85: /* source_stmt: T_SOURCE prompt T_EOL  */
{
	printd(DEBUG_PARSE, "%s:%d:source %s\n", zconf_curname(), zconf_lineno(), (yyvsp[-1].string));
	zconf_nextfile((yyvsp[-1].string));
}
    break;

  case 86: /* comment: T_COMMENT prompt T_EOL  */
{
	menu_add_entry(NULL);
	menu_add_prompt(P_COMMENT, (yyvsp[-1].string), NULL);
	printd(DEBUG_PARSE, "%s:%d:comment\n", zconf_curname(), zconf_lineno());
}
    break;

  case 87: /* comment_stmt: comment depends_list  */
{
	menu_end_entry();
}
    break;

  case 88: /* help_start: T_HELP T_EOL  */
{
	printd(DEBUG_PARSE, "%s:%d:help\n", zconf_curname(), zconf_lineno());
	zconf_starthelp();
}
    break;

  case 89: /* help: help_start T_HELPTEXT  */
{
	current_entry->help = (yyvsp[0].string);
}
    break;

  case 94: /* depends: T_DEPENDS T_ON expr T_EOL  */
{
	menu_add_dep((yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:depends on\n", zconf_curname(), zconf_lineno());
}
    break;

  case 98: /* visible: T_VISIBLE if_expr  */
{
	menu_add_visibility((yyvsp[0].expr));
}
    break;

  case 100: /* prompt_stmt_opt: prompt if_expr  */
{
	menu_add_prompt(P_PROMPT, (yyvsp[-1].string), (yyvsp[0].expr));
}
    break;

  case 103: /* end: T_ENDMENU T_EOL  */
                                { (yyval.id) = (yyvsp[-1].id); }
    break;

  case 104: /* end: T_ENDCHOICE T_EOL  */
                                { (yyval.id) = (yyvsp[-1].id); }
    break;

  case 105: /* end: T_ENDIF T_EOL  */
                                { (yyval.id) = (yyvsp[-1].id); }
    break;

  case 108: /* if_expr: %empty  */
                                        { (yyval.expr) = NULL; }
    break;

  case 109: /* if_expr: T_IF expr  */
                                        { (yyval.expr) = (yyvsp[0].expr); }
    break;

  case 110: /* expr: symbol  */
                                                { (yyval.expr) = expr_alloc_symbol((yyvsp[0].symbol)); }
    break;

  case 111: /* expr: symbol T_LESS symbol  */
                                                { (yyval.expr) = expr_alloc_comp(E_LTH, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
    break;

  case 112: /* expr: symbol T_LESS_EQUAL symbol  */
                                                { (yyval.expr) = expr_alloc_comp(E_LEQ, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
    break;

  case 113: /* expr: symbol T_GREATER symbol  */
                                                { (yyval.expr) = expr_alloc_comp(E_GTH, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
    break;

  case 114: /* expr: symbol T_GREATER_EQUAL symbol  */
                                                { (yyval.expr) = expr_alloc_comp(E_GEQ, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
    break;

  case 115: /* expr: symbol T_EQUAL symbol  */
                                                { (yyval.expr) = expr_alloc_comp(E_EQUAL, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
    break;

  case 116: /* expr: symbol T_UNEQUAL symbol  */
                                                { (yyval.expr) = expr_alloc_comp(E_UNEQUAL, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
    break;

  case 117: /* expr: T_OPEN_PAREN expr T_CLOSE_PAREN  */
                                                { (yyval.expr) = (yyvsp[-1].expr); }
    break;

  case 118: /* expr: T_NOT expr  */
                                                { (yyval.expr) = expr_alloc_one(E_NOT, (yyvsp[0].expr)); }
    break;

  case 119: /* expr: expr T_OR expr  */
                                                { (yyval.expr) = expr_alloc_two(E_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 120: /* expr: expr T_AND expr  */
                                                { (yyval.expr) = expr_alloc_two(E_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 121: /* symbol: T_WORD  */
                        { (yyval.symbol) = sym_lookup((yyvsp[0].string), 0); free((yyvsp[0].string)); }
    break;

  case 122: /* symbol: T_WORD_QUOTE  */
                        { (yyval.symbol) = sym_lookup((yyvsp[0].string), SYMBOL_CONST); free((yyvsp[0].string)); }
    break;

  case 123: /* word_opt: %empty  */
                                        { (yyval.string) = NULL; }
    break;



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
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}



void conf_parse(const char *name)
{
	struct symbol *sym;
	int i;

	zconf_initscan(name);

	sym_init();
	_menu_init();
	rootmenu.prompt = menu_add_prompt(P_MENU, "Crosstool-NG Configuration", NULL);

#if YYDEBUG
	if (getenv("ZCONF_DEBUG"))
		zconfdebug = 1;
#endif
	zconfparse();
	if (zconfnerrs)
		exit(1);
	if (!modules_sym)
		modules_sym = sym_find( "n" );

	rootmenu.prompt->text = _(rootmenu.prompt->text);
	rootmenu.prompt->text = sym_expand_string_value(rootmenu.prompt->text);

	menu_finalize(&rootmenu);
	for_all_symbols(i, sym) {
		if (sym_check_deps(sym))
			zconfnerrs++;
	}
	if (zconfnerrs)
		exit(1);
	sym_set_change_count(1);
}

static const char *zconf_tokenname(int token)
{
	switch (token) {
	case T_MENU:		return "menu";
	case T_ENDMENU:		return "endmenu";
	case T_CHOICE:		return "choice";
	case T_ENDCHOICE:	return "endchoice";
	case T_IF:		return "if";
	case T_ENDIF:		return "endif";
	case T_DEPENDS:		return "depends";
	case T_VISIBLE:		return "visible";
	}
	return "<token>";
}

static bool zconf_endtoken(const struct kconf_id *id, int starttoken, int endtoken)
{
	if (id->token != endtoken) {
		zconf_error("unexpected '%s' within %s block",
			id->name, zconf_tokenname(starttoken));
		zconfnerrs++;
		return false;
	}
	if (current_menu->file != current_file) {
		zconf_error("'%s' in different file than '%s'",
			id->name, zconf_tokenname(starttoken));
		fprintf(stderr, "%s:%d: location of the '%s'\n",
			current_menu->file->name, current_menu->lineno,
			zconf_tokenname(starttoken));
		zconfnerrs++;
		return false;
	}
	return true;
}

static void zconfprint(const char *err, ...)
{
	va_list ap;

	fprintf(stderr, "%s:%d: ", zconf_curname(), zconf_lineno());
	va_start(ap, err);
	vfprintf(stderr, err, ap);
	va_end(ap);
	fprintf(stderr, "\n");
}

static void zconf_error(const char *err, ...)
{
	va_list ap;

	zconfnerrs++;
	fprintf(stderr, "%s:%d: ", zconf_curname(), zconf_lineno());
	va_start(ap, err);
	vfprintf(stderr, err, ap);
	va_end(ap);
	fprintf(stderr, "\n");
}

static void zconferror(const char *err)
{
	fprintf(stderr, "%s:%d: %s\n", zconf_curname(), zconf_lineno() + 1, err);
}

static void print_quoted_string(FILE *out, const char *str)
{
	const char *p;
	int len;

	putc('"', out);
	while ((p = strchr(str, '"'))) {
		len = p - str;
		if (len)
			fprintf(out, "%.*s", len, str);
		fputs("\\\"", out);
		str = p + 1;
	}
	fputs(str, out);
	putc('"', out);
}

static void print_symbol(FILE *out, struct menu *menu)
{
	struct symbol *sym = menu->sym;
	struct property *prop;

	if (sym_is_choice(sym))
		fprintf(out, "\nchoice\n");
	else
		fprintf(out, "\nconfig %s\n", sym->name);
	switch (sym->type) {
	case S_BOOLEAN:
		fputs("  boolean\n", out);
		break;
	case S_TRISTATE:
		fputs("  tristate\n", out);
		break;
	case S_STRING:
		fputs("  string\n", out);
		break;
	case S_INT:
		fputs("  integer\n", out);
		break;
	case S_HEX:
		fputs("  hex\n", out);
		break;
	default:
		fputs("  ???\n", out);
		break;
	}
	for (prop = sym->prop; prop; prop = prop->next) {
		if (prop->menu != menu)
			continue;
		switch (prop->type) {
		case P_PROMPT:
			fputs("  prompt ", out);
			print_quoted_string(out, prop->text);
			if (!expr_is_yes(prop->visible.expr)) {
				fputs(" if ", out);
				expr_fprint(prop->visible.expr, out);
			}
			fputc('\n', out);
			break;
		case P_DEFAULT:
			fputs( "  default ", out);
			expr_fprint(prop->expr, out);
			if (!expr_is_yes(prop->visible.expr)) {
				fputs(" if ", out);
				expr_fprint(prop->visible.expr, out);
			}
			fputc('\n', out);
			break;
		case P_CHOICE:
			fputs("  #choice value\n", out);
			break;
		case P_SELECT:
			fputs( "  select ", out);
			expr_fprint(prop->expr, out);
			fputc('\n', out);
			break;
		case P_IMPLY:
			fputs( "  imply ", out);
			expr_fprint(prop->expr, out);
			fputc('\n', out);
			break;
		case P_RANGE:
			fputs( "  range ", out);
			expr_fprint(prop->expr, out);
			fputc('\n', out);
			break;
		case P_MENU:
			fputs( "  menu ", out);
			print_quoted_string(out, prop->text);
			fputc('\n', out);
			break;
		default:
			fprintf(out, "  unknown prop %d!\n", prop->type);
			break;
		}
	}
	if (menu->help) {
		int len = strlen(menu->help);
		while (menu->help[--len] == '\n')
			menu->help[len] = 0;
		fprintf(out, "  help\n%s\n", menu->help);
	}
}

void zconfdump(FILE *out)
{
	struct property *prop;
	struct symbol *sym;
	struct menu *menu;

	menu = rootmenu.list;
	while (menu) {
		if ((sym = menu->sym))
			print_symbol(out, menu);
		else if ((prop = menu->prompt)) {
			switch (prop->type) {
			case P_COMMENT:
				fputs("\ncomment ", out);
				print_quoted_string(out, prop->text);
				fputs("\n", out);
				break;
			case P_MENU:
				fputs("\nmenu ", out);
				print_quoted_string(out, prop->text);
				fputs("\n", out);
				break;
			default:
				;
			}
			if (!expr_is_yes(prop->visible.expr)) {
				fputs("  depends ", out);
				expr_fprint(prop->visible.expr, out);
				fputc('\n', out);
			}
		}

		if (menu->list)
			menu = menu->list;
		else if (menu->next)
			menu = menu->next;
		else while ((menu = menu->parent)) {
			if (menu->prompt && menu->prompt->type == P_MENU)
				fputs("\nendmenu\n", out);
			if (menu->next) {
				menu = menu->next;
				break;
			}
		}
	}
}

#include "zconf.lex.c"
#include "util.c"
#include "confdata.c"
#include "expr.c"
#include "symbol.c"
#include "menu.c"
