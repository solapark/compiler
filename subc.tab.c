/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "subc.y" /* yacc.c:339  */

    /*
     * File Name   : subc.y
     * Description : a skeleton bison input
     */

#include "subc.h"

    int    yylex ();
    int    yyerror (char* s);
    void 	REDUCE(char* s);

    

#line 81 "subc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "subc.tab.h".  */
#ifndef YY_YY_SUBC_TAB_H_INCLUDED
# define YY_YY_SUBC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TYPE = 258,
    VOID = 259,
    STRUCT = 260,
    RETURN = 261,
    IF = 262,
    ELSE = 263,
    WHILE = 264,
    FOR = 265,
    BREAK = 266,
    CONTINUE = 267,
    LOGICAL_OR = 268,
    LOGICAL_AND = 269,
    RELOP = 270,
    EQUOP = 271,
    INCOP = 272,
    DECOP = 273,
    STRUCTOP = 274,
    ID = 275,
    INTEGER_CONST = 276,
    STRING = 277,
    CHAR_CONST = 278,
    IFSIMPLE = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "subc.y" /* yacc.c:355  */

        int		intVal;
        char		*stringVal;
        struct id	*idPtr;
        struct decl	*declPtr;
        struct ste	*stePtr;
        struct node 	*nodePtr;
    

#line 156 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "subc.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,     2,     2,     2,    27,     2,
      34,    35,    30,    28,    25,    29,    36,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    58,    62,    67,    83,    94,    99,   104,
     110,   118,   125,   134,   133,   143,   165,   192,   218,   260,
     266,   272,   281,   293,   315,   334,   339,   343,   358,   368,
     372,   379,   378,   387,   392,   397,   401,   405,   409,   413,
     417,   421,   425,   429,   433,   437,   441,   447,   452,   457,
     463,   467,   473,   479,   483,   489,   495,   499,   505,   509,
     513,   517,   521,   539,   543,   546,   550,   554,   563,   568,
     578,   582,   586,   590,   594,   598,   602,   606,   610,   614,
     618,   622,   628,   632
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE", "VOID", "STRUCT", "RETURN", "IF",
  "ELSE", "WHILE", "FOR", "BREAK", "CONTINUE", "LOGICAL_OR", "LOGICAL_AND",
  "RELOP", "EQUOP", "INCOP", "DECOP", "STRUCTOP", "ID", "INTEGER_CONST",
  "STRING", "CHAR_CONST", "IFSIMPLE", "','", "'='", "'&'", "'+'", "'-'",
  "'*'", "'!'", "'['", "']'", "'('", "')'", "'.'", "';'", "'{'", "'}'",
  "$accept", "program", "ext_def_list", "ext_def", "type_specifier",
  "struct_specifier", "$@1", "func_decl", "pointers", "param_list",
  "param_decl", "def_list", "def", "compound_stmt", "$@2", "local_defs",
  "stmt_list", "stmt", "expr_e", "const_expr", "expr", "or_expr",
  "or_list", "and_expr", "and_list", "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    44,    61,    38,    43,    45,
      42,    33,    91,    93,    40,    41,    46,    59,   123,   125
};
# endif

#define YYPACT_NINF -122

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -122,    17,    43,  -122,  -122,  -122,     0,  -122,    13,  -122,
      20,   -15,  -122,  -122,    22,  -122,  -122,  -122,   130,    43,
    -122,  -122,   202,    10,  -122,    67,    24,  -122,    53,     1,
     202,   202,  -122,  -122,  -122,  -122,   202,   202,   202,   202,
     202,    36,  -122,  -122,    68,  -122,    88,    80,   155,    59,
    -122,    76,    -9,  -122,  -122,    99,  -122,     7,    93,    94,
      95,    85,    96,  -122,  -122,  -122,  -122,  -122,   101,  -122,
     175,   175,   175,   175,   175,   175,   104,    81,   103,   202,
     202,   202,   202,   202,   202,  -122,  -122,   122,   202,   202,
     183,   126,  -122,   127,    43,  -122,   165,  -122,   112,   202,
     202,   202,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
     175,    80,    82,    57,  -122,  -122,  -122,  -122,   117,  -122,
    -122,    14,  -122,   124,  -122,   202,  -122,  -122,   128,   141,
     143,  -122,  -122,  -122,   202,  -122,   202,   150,   148,   148,
     202,   114,  -122,   151,   153,   180,  -122,   158,  -122,  -122,
    -122,   148,   202,  -122,   161,   148,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    10,    11,     0,     3,    20,    12,
       0,    15,    19,     8,     0,     7,    26,    13,     0,    33,
      35,    26,     0,     0,     5,    20,     0,    25,     0,     0,
       0,     0,    67,    65,    68,    66,     0,     0,     0,     0,
       0,     0,    49,    51,    52,    54,    55,    57,    62,    11,
      16,    20,     0,    21,    29,     0,    30,     0,     0,     0,
       0,     0,     0,    40,    31,     9,    37,    34,     0,    14,
      73,    74,    75,    69,    76,    70,     0,    62,     0,     0,
       0,     0,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,    17,     0,     0,    18,     0,    38,     0,     0,
       0,    48,    45,    46,    26,    36,    63,    64,     6,    53,
      62,    56,    58,    59,    60,    61,    79,    50,     0,    81,
      82,     0,    78,    23,    22,     0,    27,    39,     0,     0,
       0,    47,    35,    77,     0,    80,     0,     0,     0,     0,
      48,     0,    83,     0,     0,    41,    43,     0,    32,    24,
      28,     0,    48,    42,     0,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,    -1,  -122,  -122,   159,   -18,  -122,
     121,   177,  -122,  -122,  -122,   123,    84,   -50,  -121,  -104,
     -22,  -122,  -122,   129,  -122,   157,   -28,  -122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    25,     9,    21,    26,    14,    52,
      53,    19,    27,    66,   104,    20,    28,    67,   130,    41,
      68,    43,    44,    45,    46,    47,    48,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      42,     8,    70,    71,     4,     5,     6,    55,    72,    73,
      74,    75,    77,     4,    49,     6,    94,     3,    76,   147,
      11,   137,    51,    17,    30,    31,    95,    32,    33,    34,
      35,   154,   143,    93,    36,    98,    37,    38,    39,   134,
      69,    40,    18,    12,    97,    50,     4,     5,     6,   135,
      13,   110,   110,   110,   110,   110,   110,    15,    16,    57,
      58,    56,    59,    60,    61,    62,   117,   118,   120,    78,
      30,    31,    81,    32,    33,    34,    35,   128,   129,   131,
      36,    79,    37,    38,    39,    83,    84,    40,   145,   146,
      63,    64,    65,    51,    92,    81,    82,    12,    85,    86,
      87,   153,    80,    42,    54,   156,    12,    88,    83,    84,
      83,    84,   142,    89,    42,    90,   107,    91,   131,    96,
      57,    58,   102,    59,    60,    61,    62,    99,   100,   101,
     131,    30,    31,   103,    32,    33,    34,    35,   105,   106,
     108,    36,   116,    37,    38,    39,   122,   123,    40,   127,
     133,    63,    64,   148,    57,    58,   136,    59,    60,    61,
      62,    10,    22,   138,    23,    30,    31,    24,    32,    33,
      34,    35,    85,    86,    87,    36,   139,    37,    38,    39,
     140,    88,    40,   144,   149,    63,    64,    89,   151,    90,
     150,    91,    85,    86,    87,   152,   155,   125,    29,    23,
      30,    31,   126,    32,    33,    34,    35,    89,   109,    90,
      36,    91,    37,    38,    39,   124,   141,    40,   119,    30,
      31,     0,    32,    33,    34,    35,     0,   132,     0,    36,
       0,    37,    38,    39,     0,     0,    40,   111,   112,   113,
     114,   115
};

static const yytype_int16 yycheck[] =
{
      22,     2,    30,    31,     3,     4,     5,    25,    36,    37,
      38,    39,    40,     3,     4,     5,    25,     0,    40,   140,
      20,   125,    23,    38,    17,    18,    35,    20,    21,    22,
      23,   152,   136,    51,    27,    57,    29,    30,    31,    25,
      39,    34,    20,    30,    37,    35,     3,     4,     5,    35,
      37,    79,    80,    81,    82,    83,    84,    37,    38,     6,
       7,    37,     9,    10,    11,    12,    88,    89,    90,    33,
      17,    18,    15,    20,    21,    22,    23,    99,   100,   101,
      27,    13,    29,    30,    31,    28,    29,    34,   138,   139,
      37,    38,    39,    94,    35,    15,    16,    30,    17,    18,
      19,   151,    14,   125,    37,   155,    30,    26,    28,    29,
      28,    29,   134,    32,   136,    34,    35,    36,   140,    20,
       6,     7,    37,     9,    10,    11,    12,    34,    34,    34,
     152,    17,    18,    37,    20,    21,    22,    23,    37,    35,
      37,    27,    20,    29,    30,    31,    20,    20,    34,    37,
      33,    37,    38,    39,     6,     7,    32,     9,    10,    11,
      12,     2,    32,    35,    34,    17,    18,    37,    20,    21,
      22,    23,    17,    18,    19,    27,    35,    29,    30,    31,
      37,    26,    34,    33,    33,    37,    38,    32,     8,    34,
      37,    36,    17,    18,    19,    37,    35,    32,    21,    34,
      17,    18,    37,    20,    21,    22,    23,    32,    79,    34,
      27,    36,    29,    30,    31,    94,   132,    34,    35,    17,
      18,    -1,    20,    21,    22,    23,    -1,   104,    -1,    27,
      -1,    29,    30,    31,    -1,    -1,    34,    80,    81,    82,
      83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,     3,     4,     5,    43,    44,    45,
      47,    20,    30,    37,    48,    37,    38,    38,    20,    51,
      55,    46,    32,    34,    37,    44,    47,    52,    56,    51,
      17,    18,    20,    21,    22,    23,    27,    29,    30,    31,
      34,    59,    60,    61,    62,    63,    64,    65,    66,     4,
      35,    44,    49,    50,    37,    48,    37,     6,     7,     9,
      10,    11,    12,    37,    38,    39,    53,    57,    60,    39,
      66,    66,    66,    66,    66,    66,    60,    66,    33,    13,
      14,    15,    16,    28,    29,    17,    18,    19,    26,    32,
      34,    36,    35,    48,    25,    35,    20,    37,    60,    34,
      34,    34,    37,    37,    54,    37,    35,    35,    37,    63,
      66,    65,    65,    65,    65,    65,    20,    60,    60,    35,
      60,    67,    20,    20,    50,    32,    37,    37,    60,    60,
      58,    60,    55,    33,    25,    35,    32,    59,    35,    35,
      37,    56,    60,    59,    33,    57,    57,    58,    39,    33,
      37,     8,    37,    57,    58,    35,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    44,    46,    45,    45,    47,    47,    47,    48,
      48,    49,    49,    50,    50,    51,    51,    52,    52,    52,
      52,    54,    53,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    59,
      60,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     5,
       1,     1,     1,     0,     6,     2,     5,     6,     6,     1,
       0,     1,     3,     3,     6,     2,     0,     4,     7,     2,
       2,     0,     5,     1,     2,     0,     2,     1,     2,     3,
       1,     5,     7,     5,     9,     2,     2,     1,     0,     1,
       3,     1,     1,     3,     1,     1,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     3,     3,
       4,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 53 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("program->ext_def_list");
}
#line 1374 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def_list->ext_def_list ext_def");
}
#line 1382 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 62 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def_list->epsilon");
}
#line 1390 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 68 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def->type_specifier pointers ID ';' ");
    if((yyvsp[-3].declPtr) !=NULL){
        int errNum;
        //1. TYPE *ID; 
        if((yyvsp[-2].intVal) == 1){
            errNum = declare((yyvsp[-1].idPtr), makeVarDecl(makePtrDecl((yyvsp[-3].declPtr))));
        }
        //2. TYPE ID;
        else{
            errNum =declare((yyvsp[-1].idPtr), makeVarDecl((yyvsp[-3].declPtr)));
        }	
        semErr(errNum);
    }
}
#line 1410 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 84 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
    int errNum;
    if((yyvsp[-5].intVal) == 1){
        errNum = declare((yyvsp[-4].idPtr), makeVarDecl(makePtrDecl((yyvsp[-6].declPtr))));
    }else{
        errNum = declare((yyvsp[-4].idPtr), makeConstDecl(makeArrDecl((yyvsp[-2].declPtr), makeVarDecl((yyvsp[-6].declPtr))),0));
    }
    semErr(errNum);
}
#line 1425 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def->func_decl ';' ");
    //do nothing
}
#line 1434 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 100 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def->type_specifier ';' ");
    //do nothing
}
#line 1443 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 105 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def->func_decl '{' local_defs stmt_list '}'");
}
#line 1451 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 111 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("type_specifier->TYPE");
    //find ste for TYPE.
    //struct decl * curDecl = findDeclByStr($1);
    //printf("%d\n", curDecl->typeClass);
    (yyval.declPtr) = findDeclByStr((yyvsp[0].stringVal));	
}
#line 1463 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 119 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("type_specifier->VOID");
    //find ste for VOID.
    //save type decl ptr.
    (yyval.declPtr) = findDeclByStr("void");	
}
#line 1474 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 126 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("type_specifier->struct_specifier");
    //save struct decl ptr.
    (yyval.declPtr) = (yyvsp[0].declPtr);
}
#line 1484 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 134 "subc.y" /* yacc.c:1646  */
    {
    pushScope();
}
#line 1492 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 138 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
    struct ste *fields = popScope();
    declare((yyvsp[-4].idPtr), ((yyval.declPtr) = makeStructDecl(fields)));      
}
#line 1502 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 144 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("struct_specifier->STRUCT ID ");
    //1. find decl
    struct decl *curDecl = findDecl((yyvsp[0].idPtr));
    if(curDecl == NULL){
        semErr(NOT_DECLARED);
        (yyval.declPtr) =NULL;
    }else{
        //2. check is struct.
        int err = checkIsStruct(curDecl); 
        if(err != SUCCESS){
            semErr(err);
            (yyval.declPtr) = NULL;
        }else{
            (yyval.declPtr) = curDecl;
        }

    }
}
#line 1526 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("funct_decl->type_specifier pointers ID '(' ')'");
    //1. push fucndecl in symbol table.
    struct decl* funcDecl = makeFuncDecl();
    int errNum = declare((yyvsp[-2].idPtr), funcDecl);
    if(errNum == SUCCESS){
        //2. push scope to collect formal list.
        pushScope();
        //3. push returnid to symbole table.
        struct id* returnId = enter(0, "returnId", 8);
        struct decl* returnType=(yyvsp[-4].declPtr); 
        if((yyvsp[-3].intVal) == 1){
            returnType = makePtrDecl((yyvsp[-4].declPtr));
        }
        declare(returnId, returnType);
        //5. save formals list
        struct ste *formals = popScope();
        //6. save return type.
        funcDecl->returnType = formals->decl;
        (yyval.declPtr) = formals;
    }else{	
        semErr(errNum);
        (yyval.declPtr) = NULL;	
    }      

}
#line 1557 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 193 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("funct_decl->type_specifier pointers ID '(' VOID ')'");
    //1. push fucndecl in symbol table.
    struct decl* funcDecl = makeFuncDecl();
    int errNum = declare((yyvsp[-3].idPtr), funcDecl);
    if(errNum == SUCCESS){
        //2. push scope to collect formal list.
        pushScope();
        //3. push returnid to symbole table.
        struct id* returnId = enter(0, "returnId", 8);
        struct decl* returnType=(yyvsp[-5].declPtr); 
        if((yyvsp[-4].intVal) == 1){
            returnType = makePtrDecl((yyvsp[-5].declPtr));
        }
        declare(returnId, returnType);
        //5. save formals list
        struct ste *formals = popScope();
        //6. save return type.
        funcDecl->returnType = formals->decl;
        (yyval.declPtr) = formals;
    }else{	
        semErr(errNum);
        (yyval.declPtr) = NULL;	
    }      
}
#line 1587 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 219 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("funct_decl->type_specifier pointers ID '(' param_list ')'");
    if((yyvsp[-5].declPtr) == NULL || (yyvsp[-1].stePtr) == NULL){
        (yyval.declPtr) = NULL;
    }else{
        //1. push fucndecl in symbol table.
        struct decl* funcDecl = makeFuncDecl();
        int errNum = declare((yyvsp[-3].idPtr), funcDecl);
        if(errNum == SUCCESS){
            //2. push scope to collect formal list.
            pushScope();
            //3. push returnid to symbole table.
            struct id* returnId = enter(0, "returnId", 8);
            struct decl* returnType=(yyvsp[-5].declPtr); 
            if((yyvsp[-4].intVal) == 1){
                returnType = makePtrDecl((yyvsp[-5].declPtr));
            }
            declare(returnId, returnType);

            //4. push param list to symbol table.
            errNum = pushSteList((yyvsp[-1].stePtr));
            //5. save formals list
            struct ste *formals = popScope();
            if(errNum !=SUCCESS){
                semErr(errNum);
                removeTopSte();
                (yyval.declPtr) = NULL;
            }else{
                //6. save return type.
                funcDecl->returnType = formals->decl;
                funcDecl->formals = formals->prev;
                (yyval.declPtr) = formals;	
            }
        }else{	
            semErr(errNum);
            (yyval.declPtr) = NULL;	
        }	
    }
}
#line 1631 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 261 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("pointers->'*'");
    (yyval.intVal) = 1;
}
#line 1640 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 266 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("pointers->epsilon");
    (yyval.intVal) = 0;
}
#line 1649 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 273 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("param_list->param_decl");
    if((yyvsp[0].stePtr) == NULL){
        (yyval.stePtr) = NULL;
    }else{
        (yyval.stePtr) = (yyvsp[0].stePtr);
    }
}
#line 1662 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 282 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("param_list->param_list ',' param_decl");
    if((yyvsp[-2].stePtr) == NULL || (yyvsp[0].stePtr) == NULL){
        (yyval.stePtr) = NULL;
    }else{
        (yyvsp[-2].stePtr)->prev = (yyvsp[0].stePtr);
        (yyval.stePtr) = (yyvsp[-2].stePtr);
    }
}
#line 1676 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 294 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("param_decl -> type_specifier pointers ID");
    if((yyvsp[-2].declPtr) != NULL){
        //1. TYPE *ID; 
        //int errNum;
        if((yyvsp[-1].intVal) == 1){
            (yyval.stePtr) = makeSte((yyvsp[0].idPtr), makeVarDecl(makePtrDecl((yyvsp[-2].declPtr))));
            //errNum = declare($3, makeVarDecl(makePtrDecl($1)));
        }

        //2. TYPE ID;
        else{
            (yyval.stePtr) = makeSte((yyvsp[0].idPtr), makeVarDecl((yyvsp[-2].declPtr)));
            //errNum = declare($3, makeVarDecl($1));
        }       
        //check redeclaration
        //semErr(errNum);
    }else{
        (yyval.stePtr) =NULL;
    }
}
#line 1702 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 316 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("param_decl -> type_specifier pointers ID '[' const_expr ']'	");
    if((yyvsp[-5].declPtr) != NULL){
        //int errNum;
        if((yyvsp[-4].intVal) == 1){
            (yyval.stePtr) = makeSte((yyvsp[-3].idPtr), makeVarDecl(makePtrDecl((yyvsp[-5].declPtr))));
            //errNum = declare($3, makeVarDecl(makePtrDecl($1)));
        }else{
            (yyval.stePtr) = makeSte((yyvsp[-3].idPtr), makeConstDecl(makeArrDecl((yyvsp[-1].declPtr), makeVarDecl((yyvsp[-5].declPtr))),0));
            //errNum = declare($3, makeConstDecl(makeArrDecl($5, makeVarDecl($1)),0));
        }
        //semErr(errNum);
    }else{
        (yyval.stePtr) =NULL;
    }
}
#line 1723 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 335 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def_list->def_list def");
}
#line 1731 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 339 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def_list->epsilon");
}
#line 1739 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 344 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->type_specifier pointers ID ';'	");
    if((yyvsp[-3].declPtr) != NULL){
        //1. TYPE *ID; 
        int errNum;
        if((yyvsp[-2].intVal) == 1){
            errNum = declare((yyvsp[-1].idPtr), makeVarDecl(makePtrDecl((yyvsp[-3].declPtr))));
        }
        //2. TYPE ID;
        else{
            errNum = declare((yyvsp[-1].idPtr), makeVarDecl((yyvsp[-3].declPtr)));
        }       
        semErr(errNum);
    }
}
#line 1759 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 358 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
    int errNum;
    if((yyvsp[-5].intVal) == 1){
        errNum = declare((yyvsp[-4].idPtr), makeVarDecl(makePtrDecl((yyvsp[-6].declPtr))));
    }else{
        errNum = declare((yyvsp[-4].idPtr), makeConstDecl(makeArrDecl((yyvsp[-2].declPtr), makeVarDecl((yyvsp[-6].declPtr))),0));
    }
    semErr(errNum);
}
#line 1774 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 369 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->type_specifier ';'");
}
#line 1782 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 373 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->func_decl ';'	");
}
#line 1790 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 379 "subc.y" /* yacc.c:1646  */
    {
    pushScope();
}
#line 1798 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 381 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
    popScope();
}
#line 1807 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 388 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("local_defs->def_list");
}
#line 1815 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 393 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt_list->stmt_list stmt");
}
#line 1823 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 397 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt_list->epsilon");
}
#line 1831 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 402 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->expr ';'");
}
#line 1839 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 406 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->compound_stmt");
}
#line 1847 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 410 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->RETURN ';'");
}
#line 1855 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 414 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->RETURN expr ';'");
}
#line 1863 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 418 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->';'");
}
#line 1871 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 422 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->IF '(' expr ')' stmt	");
}
#line 1879 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 426 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
}
#line 1887 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 430 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->WHILE '(' expr ')' stmt");
}
#line 1895 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 434 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
}
#line 1903 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 438 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->BREAK ';'");
}
#line 1911 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 442 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->CONTINUE ';'");
}
#line 1919 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 448 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("test->expr");
}
#line 1927 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 452 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("test->epsilon");
}
#line 1935 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 458 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("const_expr->expr");
}
#line 1943 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 464 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("expr->unary '=' expr");
}
#line 1951 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 468 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("expr->or_expr");
}
#line 1959 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 474 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("or_expr->or_list");
}
#line 1967 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 480 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("or_list->or_list LOGICAL_OR and_expr");
}
#line 1975 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 484 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("or_list->and_expr");
}
#line 1983 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 490 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("and_expr->and_list");
}
#line 1991 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 496 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("and_list->and_list LOGICAL_AND binary");
}
#line 1999 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 500 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("and_list->binary");
}
#line 2007 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 506 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary RELOP binary");
}
#line 2015 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 510 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary EQUOP binary");
}
#line 2023 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 514 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary '+' binary");
}
#line 2031 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 518 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary '-' binary");
}
#line 2039 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 522 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->unary");
    if((yyvsp[0].declPtr)){                     
        int isConst = checkIsConst((yyvsp[0].declPtr));     
        int isVar = checkIsVar((yyvsp[0].declPtr));          
        if(isConst == SUCCESS || isVar ==SUCCESS ){
            (yyval.declPtr) = (yyvsp[0].declPtr) -> type;
        }else{ 	                       
            semErr(RHS_NOT_VAR_CONST);
            (yyval.declPtr) = NULL;                                            	        	                                               
        }                            
    }else{                                              
        (yyval.declPtr) = NULL;                                    
    }    
}
#line 2059 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 539 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->'(' expr ')'");

            }
#line 2068 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 543 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'(' unary ')'");
}
#line 2076 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 546 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->INTEGER_CONST");
    (yyval.declPtr) = makeConstDecl(NULL, (yyvsp[0].intVal));	
}
#line 2085 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 550 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->CHAR_CONST");
    (yyval.declPtr) = makeCharConstDecl((yyvsp[0].stringVal));	
}
#line 2094 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 554 "subc.y" /* yacc.c:1646  */
    {
    //printf("unary->ID %s \n", $1);
    REDUCE("unary->ID");
    (yyval.declPtr) = findDecl((yyvsp[0].idPtr));
    if((yyval.declPtr) == NULL){
        semErr(NOT_DECLARED);
    }

}
#line 2108 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 563 "subc.y" /* yacc.c:1646  */
    {
    //printf("unary->STRING %s \n", $1);
    REDUCE("unary->STRING");
    (yyval.declPtr) = makeCharConstDecl((yyvsp[0].stringVal));	
}
#line 2118 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 568 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'-' unary");
    if( checkIsVar((yyvsp[0].declPtr)) == SUCCESS){
        semErr(checkIsInt((yyvsp[0].declPtr)->type));
    }else{
        semErr(checkIsVar((yyvsp[0].declPtr)));
    }
    (yyval.declPtr) = (yyvsp[0].declPtr);
    ;
}
#line 2133 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 579 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'!' unary");
}
#line 2141 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 583 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary INCOP");
}
#line 2149 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 587 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary DECOP");
}
#line 2157 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 591 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->INCOP unary ");
}
#line 2165 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 595 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->DECOP unary ");
}
#line 2173 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 599 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'&' unary");
}
#line 2181 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 603 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'*' unary");
}
#line 2189 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 607 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '[' expr ']'");
}
#line 2197 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 611 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '.' ID");
}
#line 2205 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 615 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary STRUCTOP ID");
}
#line 2213 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 619 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '(' args ')'");
}
#line 2221 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 623 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '(' ')'");
}
#line 2229 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 629 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("args->expr");
}
#line 2237 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 633 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("args->args ',' expr");
}
#line 2245 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2249 "subc.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 637 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes 
    Implemnt REDUCE function here */

int    yyerror (char* s)
{
    printf ("lineNo : %d\n", read_line()); 
    fprintf (stderr, "%s\n", s);
}

void 	REDUCE( char* s)
{
    printf("%s\n",s);
}

