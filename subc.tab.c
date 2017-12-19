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
#include "asm.h"
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
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

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
       2,     2,     2,    33,     2,     2,     2,    32,    27,     2,
      36,    37,    30,    28,    25,    29,    38,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
       0,    52,    52,    58,    62,    69,    88,   104,   121,   127,
     140,   126,   167,   175,   182,   195,   194,   211,   233,   265,
     296,   338,   344,   350,   359,   371,   393,   408,   413,   417,
     436,   450,   454,   461,   460,   469,   474,   479,   483,   487,
     491,   498,   497,   519,   523,   527,   531,   535,   539,   543,
     549,   554,   559,   576,   575,   604,   615,   626,   640,   651,
     662,   676,   687,   702,   716,   731,   746,   761,   779,   794,
     818,   828,   836,   845,   851,   889,   894,   909,   923,   938,
     956,   971,   986,  1000,  1018,  1037,  1057,  1083,  1113,  1143,
    1153
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
  "'*'", "'/'", "'%'", "'!'", "'['", "']'", "'('", "')'", "'.'", "';'",
  "'{'", "'}'", "$accept", "program", "ext_def_list", "ext_def", "$@1",
  "$@2", "type_specifier", "struct_specifier", "$@3", "func_decl",
  "pointers", "param_list", "param_decl", "def_list", "def",
  "compound_stmt", "$@4", "local_defs", "stmt_list", "stmt", "$@5",
  "expr_e", "const_expr", "expr", "$@6", "or_expr", "or_list", "and_expr",
  "and_list", "binary", "unary", "args", YY_NULLPTR
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
      42,    47,    37,    33,    91,    93,    40,    41,    46,    59,
     123,   125
};
# endif

#define YYPACT_NINF -135

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-135)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -135,    21,    75,  -135,  -135,  -135,     6,  -135,   -15,  -135,
      49,    -4,  -135,  -135,    18,  -135,  -135,  -135,   -14,  -135,
    -135,   217,     0,  -135,    75,  -135,     9,   217,   217,  -135,
    -135,  -135,  -135,   217,   217,   217,   217,   217,    17,  -135,
    -135,    56,  -135,    48,    70,   174,    36,  -135,    61,    -8,
    -135,    29,    53,  -135,  -135,  -135,    15,    15,    15,    15,
      15,    15,    59,   169,    58,   217,   217,   217,   217,   217,
     217,   217,   217,   217,  -135,  -135,    83,  -135,   217,   196,
      84,  -135,    86,    75,  -135,  -135,    90,  -135,    54,  -135,
    -135,  -135,  -135,    15,    70,   239,   226,   128,   128,  -135,
    -135,  -135,  -135,   217,    74,  -135,  -135,    -2,  -135,    88,
    -135,    89,    78,    98,    99,   101,    85,   104,  -135,  -135,
    -135,  -135,  -135,   105,  -135,  -135,   217,  -135,   217,   217,
    -135,  -135,   217,   217,   217,   217,  -135,  -135,  -135,  -135,
    -135,   111,   112,   114,   103,   124,   125,  -135,  -135,  -135,
     130,  -135,   145,   145,   217,   109,  -135,   162,  -135,   132,
    -135,   145,   217,  -135,   136,   145,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    12,    13,     0,     3,    22,    14,
       0,    17,    21,     8,     0,     7,     9,    15,     0,    28,
      28,     0,     0,     5,    35,    10,     0,     0,     0,    74,
      72,    75,    73,     0,     0,     0,     0,     0,     0,    52,
      55,    56,    58,    59,    61,    69,    13,    18,    22,     0,
      23,    22,     0,    27,    37,    16,    80,    81,    82,    76,
      83,    77,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,    53,     0,     0,
       0,    19,     0,     0,    20,    31,     0,    32,     0,    70,
      71,     6,    57,    69,    60,    62,    63,    67,    68,    64,
      65,    66,    86,     0,     0,    88,    89,     0,    85,    25,
      24,     0,    41,     0,     0,     0,     0,     0,    43,    33,
      11,    39,    36,     0,    54,    84,     0,    87,     0,     0,
      29,    40,     0,     0,     0,    51,    48,    49,    28,    38,
      90,     0,     0,     0,     0,     0,     0,    50,    37,    26,
       0,    42,     0,     0,    51,     0,    30,    44,    46,     0,
      34,     0,    51,    45,     0,     0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,  -135,  -135,  -135,     4,  -135,  -135,   175,
      19,  -135,    93,   159,  -135,  -135,  -135,    42,    34,  -134,
    -135,  -106,   -74,   -21,  -135,  -135,  -135,   118,  -135,   193,
     -26,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    19,    54,    48,     9,    20,    52,
      14,    49,    50,    24,    53,   121,   138,    25,    88,   122,
     132,   146,    38,   123,   103,    40,    41,    42,    43,    44,
      45,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      39,    56,    57,     4,    46,     6,     8,    58,    59,    60,
      61,    63,     4,     5,     6,    12,    62,    83,   157,   158,
      21,     3,    22,   126,    13,    23,    11,   163,    51,    84,
      51,   166,    74,    75,    76,   127,    17,    47,    18,    93,
      93,    93,    93,    93,    93,    93,    93,    93,   159,    78,
      55,    79,    64,    80,   141,   142,   164,   104,   106,    12,
     112,   113,    66,   114,   115,   116,   117,    82,    85,    65,
      86,    27,    28,    81,    29,    30,    31,    32,     4,     5,
       6,    33,   124,    34,    35,    67,    68,    36,    15,    16,
      37,    12,    87,   118,   119,   120,    89,    91,    69,    70,
      71,    72,    73,   102,   108,   140,   109,    39,    39,   125,
     111,   143,   144,   145,   147,   112,   113,   131,   114,   115,
     116,   117,   128,   129,   136,    22,    27,    28,   130,    29,
      30,    31,    32,   147,   133,   134,    33,   135,    34,    35,
     152,   147,    36,   137,   139,    37,   149,   150,   118,   119,
     160,   112,   113,   151,   114,   115,   116,   117,    71,    72,
      73,   153,    27,    28,   154,    29,    30,    31,    32,   156,
     161,   162,    33,   165,    34,    35,   110,    10,    36,    26,
     148,    37,   155,    92,   118,   119,    74,    75,    76,     0,
       0,    74,    75,    76,     0,    77,     0,     0,     0,     0,
      77,     0,     0,    78,     0,    79,    90,    80,    78,     0,
      79,     0,    80,    27,    28,     0,    29,    30,    31,    32,
       0,     0,     0,    33,     0,    34,    35,     0,     0,    36,
       0,     0,    37,   105,    27,    28,     0,    29,    30,    31,
      32,    67,     0,     0,    33,     0,    34,    35,     0,     0,
      36,     0,     0,    37,    69,    70,    71,    72,    73,    94,
      95,    96,    97,    98,    99,   100,   101,    69,    70,    71,
      72,    73
};

static const yytype_int16 yycheck[] =
{
      21,    27,    28,     3,     4,     5,     2,    33,    34,    35,
      36,    37,     3,     4,     5,    30,    37,    25,   152,   153,
      34,     0,    36,    25,    39,    39,    20,   161,    24,    37,
      26,   165,    17,    18,    19,    37,    40,    37,    20,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   154,    34,
      41,    36,    35,    38,   128,   129,   162,    78,    79,    30,
       6,     7,    14,     9,    10,    11,    12,    48,    39,    13,
      51,    17,    18,    37,    20,    21,    22,    23,     3,     4,
       5,    27,   103,    29,    30,    15,    16,    33,    39,    40,
      36,    30,    39,    39,    40,    41,    37,    39,    28,    29,
      30,    31,    32,    20,    20,   126,    20,   128,   129,    35,
      20,   132,   133,   134,   135,     6,     7,    39,     9,    10,
      11,    12,    34,    34,    39,    36,    17,    18,    39,    20,
      21,    22,    23,   154,    36,    36,    27,    36,    29,    30,
      37,   162,    33,    39,    39,    36,    35,    35,    39,    40,
      41,     6,     7,    39,     9,    10,    11,    12,    30,    31,
      32,    37,    17,    18,    39,    20,    21,    22,    23,    39,
       8,    39,    27,    37,    29,    30,    83,     2,    33,    20,
     138,    36,   148,    65,    39,    40,    17,    18,    19,    -1,
      -1,    17,    18,    19,    -1,    26,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    34,    -1,    36,    37,    38,    34,    -1,
      36,    -1,    38,    17,    18,    -1,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    -1,    29,    30,    -1,    -1,    33,
      -1,    -1,    36,    37,    17,    18,    -1,    20,    21,    22,
      23,    15,    -1,    -1,    27,    -1,    29,    30,    -1,    -1,
      33,    -1,    -1,    36,    28,    29,    30,    31,    32,    66,
      67,    68,    69,    70,    71,    72,    73,    28,    29,    30,
      31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,     3,     4,     5,    45,    48,    49,
      51,    20,    30,    39,    52,    39,    40,    40,    20,    46,
      50,    34,    36,    39,    55,    59,    55,    17,    18,    20,
      21,    22,    23,    27,    29,    30,    33,    36,    64,    65,
      67,    68,    69,    70,    71,    72,     4,    37,    48,    53,
      54,    48,    51,    56,    47,    41,    72,    72,    72,    72,
      72,    72,    65,    72,    35,    13,    14,    15,    16,    28,
      29,    30,    31,    32,    17,    18,    19,    26,    34,    36,
      38,    37,    52,    25,    37,    39,    52,    39,    60,    37,
      37,    39,    69,    72,    71,    71,    71,    71,    71,    71,
      71,    71,    20,    66,    65,    37,    65,    73,    20,    20,
      54,    20,     6,     7,     9,    10,    11,    12,    39,    40,
      41,    57,    61,    65,    65,    35,    25,    37,    34,    34,
      39,    39,    62,    36,    36,    36,    39,    39,    58,    39,
      65,    64,    64,    65,    65,    65,    63,    65,    59,    35,
      35,    39,    37,    37,    39,    60,    39,    61,    61,    63,
      41,     8,    39,    61,    63,    37,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    46,
      47,    45,    48,    48,    48,    50,    49,    49,    51,    51,
      51,    52,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    56,    58,    57,    59,    60,    60,    61,    61,
      61,    62,    61,    61,    61,    61,    61,    61,    61,    61,
      63,    63,    64,    66,    65,    65,    67,    68,    68,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     0,
       0,     7,     1,     1,     1,     0,     6,     2,     5,     6,
       6,     1,     0,     1,     3,     3,     6,     2,     0,     4,
       7,     2,     2,     0,     5,     1,     2,     0,     2,     1,
       2,     0,     4,     1,     5,     7,     5,     9,     2,     2,
       1,     0,     1,     0,     4,     1,     1,     3,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     3,     3,     4,     3,     1,
       3
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
#line 1390 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def_list->ext_def_list ext_def");
}
#line 1398 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 62 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def_list->epsilon");
    setOutputFile(getFilePtr());
    writeInitCode();
}
#line 1408 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 70 "subc.y" /* yacc.c:1646  */
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
        if(errNum != SUCCESS){
            semErr(errNum);
            (yyval.declPtr) = NULL;
        }
    }
}
#line 1431 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
    if((yyvsp[-6].declPtr) !=NULL){
        int errNum;
        if((yyvsp[-5].intVal) == 1){
            errNum = declare((yyvsp[-4].idPtr), makeConstDecl(makeArrDecl(makePtrDecl((yyvsp[-6].declPtr)), (yyvsp[-2].declPtr)), 0));
        }else{
            errNum = declare((yyvsp[-4].idPtr), makeConstDecl(makeArrDecl((yyvsp[-6].declPtr), (yyvsp[-2].declPtr)), 0));
        }
        if(errNum != SUCCESS){
            semErr(errNum);
            (yyval.declPtr) = NULL;
        }
    }
}
#line 1451 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 105 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def->func_decl ';' ");
    if((yyvsp[-1].declPtr)){
        //1. pushScope && insert formals to symbol table.
        pushScope();
        pushSteList((yyvsp[-1].declPtr)->formals);
        (yyvsp[-1].declPtr) -> formals = (yyvsp[-1].declPtr) -> formals->prev;
        //2. pop scope to remove funcion's local vars.
        popScope();
        //3. make constReturnDecl for function call. 
        struct decl* declRetType=(yyvsp[-1].declPtr)->returnType;
        (yyvsp[-1].declPtr)->returnType = makeConstDecl(declRetType, 0);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 1472 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def->type_specifier ';' ");
    //do nothing
}
#line 1481 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def->func_decl '{' local_defs stmt_list '}'");
    if((yyvsp[-1].declPtr) != NULL){
        //1. pushScope && insert formals to symbol table.
        pushScope();
        pushSteList((yyvsp[-1].declPtr)->formals);
        (yyvsp[-1].declPtr) -> formals = (yyvsp[-1].declPtr) -> formals->prev;
    }

    //code_gen() : write label:
    code_gen(WRITE_LABEL, setNewLabel(findRecentFuncName()));
    resetScopeSize();
}
#line 1499 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 140 "subc.y" /* yacc.c:1646  */
    {
    //code_gen() : make space for local var in func. 
    int scopeSize = getScopeSize();
    //printf("scopeSize : %d\n", scopeSize);
    if(scopeSize>0){
        code_gen(SHIFT_SP, setNewInteger(scopeSize));
    }
    //code_gen() : write label_start
    code_gen(WRITE_LABEL_START, setNewLabel(findRecentFuncName()));
}
#line 1514 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "subc.y" /* yacc.c:1646  */
    {
    if((yyvsp[-6].declPtr) != NULL){
        //2. pop scope to remove funcion's local vars.
        popScope();
        //3. make constReturnDecl for function call. 
        struct decl* declRetType=(yyvsp[-6].declPtr)->returnType;
        (yyvsp[-6].declPtr)->returnType = makeConstDecl(declRetType, 0);
    }else{
        (yyval.declPtr) = NULL;
    }
   
    //code_gen() : func_final
    char* funcName = getSteName(getTopSte());
    writeFuncFinalCode(setNewLabel(funcName));
}
#line 1534 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 168 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("type_specifier->TYPE");
    //find ste for TYPE.
    //struct decl * curDecl = findDeclByStr($1);
    //printf("%d\n", curDecl->typeClass);
    (yyval.declPtr) = findDeclByStr((yyvsp[0].stringVal));	
}
#line 1546 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 176 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("type_specifier->VOID");
    //find ste for VOID.
    //save type decl ptr.
    (yyval.declPtr) = findDeclByStr("void");	
}
#line 1557 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 183 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("type_specifier->struct_specifier");
    //save struct decl ptr.
    if((yyvsp[0].declPtr)){
        (yyval.declPtr) = (yyvsp[0].declPtr);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 1571 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 195 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
    pushScope();
}
#line 1580 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 200 "subc.y" /* yacc.c:1646  */
    {
    struct ste *fields = popScope();
    struct decl *curDecl = findDecl((yyvsp[-4].idPtr));
    if(curDecl==NULL){
        declare((yyvsp[-4].idPtr), ((yyval.declPtr) = makeStructDecl(fields)));      
        removeTopSte();
    }else{
        semErr(REDECL);
        (yyval.declPtr) = NULL;
    }
}
#line 1596 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 212 "subc.y" /* yacc.c:1646  */
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
            semErr(NOT_STRUCT);
            (yyval.declPtr) = NULL;
        }else{
            (yyval.declPtr) = curDecl;
        }

    }
}
#line 1620 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 234 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("funct_decl->type_specifier pointers ID '(' ')'");
     if((yyvsp[-4].declPtr) == NULL){
        (yyval.declPtr) = NULL;
    }else{   
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
            funcDecl->formals = formals;
            (yyval.declPtr) = funcDecl;
        }else{	
            semErr(REDECL);
            (yyval.declPtr) = NULL;	
        }      
    }

}
#line 1656 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 266 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("funct_decl->type_specifier pointers ID '(' VOID ')'");
     if((yyvsp[-5].declPtr) == NULL){
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
            //5. save formals list
            struct ste *formals = popScope();
            //6. save return type.
            funcDecl->returnType = formals->decl;
            funcDecl->formals = formals;
            (yyval.declPtr) = funcDecl;
        }else{	
            semErr(REDECL);
            (yyval.declPtr) = NULL;	
        }      
    }
}
#line 1691 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 297 "subc.y" /* yacc.c:1646  */
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
                semErr(REDECL);
                removeTopSte();
                (yyval.declPtr) = NULL;
            }else{
                //6. save return type.
                funcDecl->returnType = formals->decl;
                funcDecl->formals = formals;
                (yyval.declPtr) = funcDecl;	
            }
        }else{	
            semErr(REDECL);
            (yyval.declPtr) = NULL;	
        }	
    }
}
#line 1735 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 339 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("pointers->'*'");
    (yyval.intVal) = 1;
}
#line 1744 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 344 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("pointers->epsilon");
    (yyval.intVal) = 0;
}
#line 1753 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 351 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("param_list->param_decl");
    if((yyvsp[0].stePtr) == NULL){
        (yyval.stePtr) = NULL;
    }else{
        (yyval.stePtr) = (yyvsp[0].stePtr);
    }
}
#line 1766 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 360 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("param_list->param_list ',' param_decl");
    if((yyvsp[-2].stePtr) == NULL || (yyvsp[0].stePtr) == NULL){
        (yyval.stePtr) = NULL;
    }else{
        (yyvsp[-2].stePtr)->prev = (yyvsp[0].stePtr);
        (yyval.stePtr) = (yyvsp[-2].stePtr);
    }
}
#line 1780 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 372 "subc.y" /* yacc.c:1646  */
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
#line 1806 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 394 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("param_decl -> type_specifier pointers ID '[' const_expr ']'	");
    if((yyvsp[-5].declPtr) && (yyvsp[-1].declPtr)){
        if((yyvsp[-4].intVal) == 1){
            (yyval.stePtr) = makeSte((yyvsp[-3].idPtr), makeConstDecl(makeArrDecl(makePtrDecl((yyvsp[-5].declPtr)), (yyvsp[-1].declPtr)),0));
        }else{
            (yyval.stePtr) = makeSte((yyvsp[-3].idPtr), makeConstDecl(makeArrDecl((yyvsp[-5].declPtr), (yyvsp[-1].declPtr)), 0));
        }
    }else{
        (yyval.stePtr) =NULL;
    }
}
#line 1823 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 409 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def_list->def_list def");
}
#line 1831 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 413 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def_list->epsilon");
}
#line 1839 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 418 "subc.y" /* yacc.c:1646  */
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
        (yyval.declPtr) = NULL;
    }
    else{
        (yyval.declPtr) = NULL;
    }
}
#line 1863 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 436 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
    if((yyvsp[-6].declPtr)){
    int errNum;
    if((yyvsp[-5].intVal) == 1){
        errNum = declare((yyvsp[-4].idPtr), makeConstDecl(makeArrDecl(makePtrDecl((yyvsp[-6].declPtr)), (yyvsp[-2].declPtr)),0));
    }else{
        errNum = declare((yyvsp[-4].idPtr), makeConstDecl(makeArrDecl((yyvsp[-6].declPtr), (yyvsp[-2].declPtr)), 0));
    }
    semErr(errNum);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 1882 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 451 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->type_specifier ';'");
}
#line 1890 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 455 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("def->func_decl ';'	");
}
#line 1898 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 461 "subc.y" /* yacc.c:1646  */
    {
    pushScope();
}
#line 1906 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 463 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
    popScope();
}
#line 1915 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 470 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("local_defs->def_list");
}
#line 1923 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 475 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt_list->stmt_list stmt");
}
#line 1931 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 479 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt_list->epsilon");
}
#line 1939 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 484 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->expr ';'");
}
#line 1947 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 488 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->compound_stmt");
}
#line 1955 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 492 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->RETURN ';'");
    int errNum = checkSameType(findDeclByStr("returnId"), findDeclByStr("void"));
    semErr(errNum);
}
#line 1965 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 498 "subc.y" /* yacc.c:1646  */
    {
    //code_gen()
    code_gen(PUSH_REG, setNewRegType(FP));
    code_gen(PUSH_CONST, setNewInteger(-1));
    code_gen(ADD, NULL);
    code_gen(PUSH_CONST, setNewInteger(-1));
    code_gen(ADD, NULL);
}
#line 1978 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 506 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->RETURN expr ';'");
    //struct decl* declExpr = (struct decl*) malloc(sizeof(struct decl));
    //declExpr->type = $2;
    //int errNum = checkSameType(findDeclByStr("returnId"), declExpr);
    int errNum = checkSameType(findDeclByStr("returnId"), (yyvsp[-1].declPtr));
    semErr(errNum);
    
    //code_gen()
    code_gen(ASSIGN, NULL);
    code_gen(JUMP_TO_FINAL, setNewLabel(findRecentFuncName()));

}
#line 1996 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 520 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->';'");
}
#line 2004 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 524 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->IF '(' expr ')' stmt	");
}
#line 2012 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 528 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
}
#line 2020 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 532 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->WHILE '(' expr ')' stmt");
}
#line 2028 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 536 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
}
#line 2036 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 540 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->BREAK ';'");
}
#line 2044 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 544 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("stmt->CONTINUE ';'");
}
#line 2052 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 550 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("test->expr");
}
#line 2060 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 554 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("test->epsilon");
}
#line 2068 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 560 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("const_expr->expr");
    if((yyvsp[0].declPtr)){
        if(checkIsInt((yyvsp[0].declPtr)) == SUCCESS){
            (yyval.declPtr) = (yyvsp[0].declPtr);
        }else{
            semErr(NOT_INT);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2086 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 576 "subc.y" /* yacc.c:1646  */
    {
                //code_gen
                code_gen(PUSH_REG, setNewRegType(SP));
                code_gen(FETCH, NULL);
}
#line 2096 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 581 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("expr->unary '=' expr");
    if((yyvsp[-3].declPtr) && (yyvsp[0].declPtr)){
        if(checkIsVar((yyvsp[-3].declPtr)) == SUCCESS){
            if(checkCompatible((yyvsp[-3].declPtr)->type, (yyvsp[0].declPtr)) == SUCCESS){
                (yyval.declPtr) = (yyvsp[-3].declPtr)->type;
            }else{
                semErr(LHS_RHS_NOT_SAME_TYPE);
                (yyval.declPtr) = NULL;
            }
        }else{
            semErr(LHS_NOT_VAR);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
    
    //code_gen()
    code_gen(ASSIGN, NULL);
    code_gen(FETCH, NULL);
    code_gen(SHIFT_SP, setNewInteger(-1));
}
#line 2124 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 605 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("expr->or_expr");
    if((yyvsp[0].declPtr)){
        (yyval.declPtr) = (yyvsp[0].declPtr);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2137 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 616 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("or_expr->or_list");
    if((yyvsp[0].declPtr)){
        (yyval.declPtr) = (yyvsp[0].declPtr);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2150 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 627 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("or_list->or_list LOGICAL_OR and_expr");
    if((yyvsp[-2].declPtr) && (yyvsp[0].declPtr)){
        if(checkIsInt((yyvsp[-2].declPtr))==SUCCESS && checkIsInt((yyvsp[0].declPtr))==SUCCESS){
            (yyval.declPtr) = findDeclByStr("int");
        }else{
            semErr(NOT_INT);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2168 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 641 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("or_list->and_expr");
    if((yyvsp[0].declPtr)){
        (yyval.declPtr) = (yyvsp[0].declPtr);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2181 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 652 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("and_expr->and_list");
    if((yyvsp[0].declPtr)){
        (yyval.declPtr) = (yyvsp[0].declPtr);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2194 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 663 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("and_list->and_list LOGICAL_AND binary");
    if((yyvsp[-2].declPtr) && (yyvsp[0].declPtr)){
        if(checkIsInt((yyvsp[-2].declPtr))==SUCCESS && checkIsInt((yyvsp[0].declPtr))==SUCCESS){
            (yyval.declPtr) = findDeclByStr("int");
        }else{
            semErr(NOT_INT);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2212 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 677 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("and_list->binary");
    if((yyvsp[0].declPtr)){
        (yyval.declPtr) = (yyvsp[0].declPtr);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2225 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 688 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary RELOP binary");
    if((yyvsp[-2].declPtr) && (yyvsp[0].declPtr)){
        if((checkIsChar((yyvsp[-2].declPtr)) == SUCCESS && checkIsChar((yyvsp[0].declPtr)) == SUCCESS)
                || (checkIsInt((yyvsp[-2].declPtr)) == SUCCESS && checkIsInt((yyvsp[0].declPtr))== SUCCESS)){
            (yyval.declPtr) = findDeclByStr("int"); 
        }else{
            semErr(NOT_INT_CHAR);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2244 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 703 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary EQUOP binary");
    if((yyvsp[-2].declPtr) && (yyvsp[0].declPtr)){
        if((checkIsChar((yyvsp[-2].declPtr)) == SUCCESS && checkIsChar((yyvsp[0].declPtr)) == SUCCESS) || (checkIsInt((yyvsp[-2].declPtr)) == SUCCESS && checkIsInt((yyvsp[0].declPtr))== SUCCESS) || (checkIsPtr((yyvsp[-2].declPtr)) == SUCCESS && checkIsPtr((yyvsp[0].declPtr))== SUCCESS)){
            (yyval.declPtr) = findDeclByStr("int"); 
        }else{
            semErr(NOT_INT_CHAR_PTR);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2262 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 717 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary '*' binary");
    if((yyvsp[-2].declPtr) != NULL && (yyvsp[0].declPtr) != NULL){
        struct decl* plusResult = plusType((yyvsp[-2].declPtr), (yyvsp[0].declPtr));
        if(plusResult){
            (yyval.declPtr) =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2281 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 732 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary '/' binary");
    if((yyvsp[-2].declPtr) != NULL && (yyvsp[0].declPtr) != NULL){
        struct decl* plusResult = minusType((yyvsp[-2].declPtr), (yyvsp[0].declPtr));
        if(plusResult){
            (yyval.declPtr) =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2300 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 747 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary '%' binary");
    if((yyvsp[-2].declPtr) != NULL && (yyvsp[0].declPtr) != NULL){
        struct decl* plusResult = minusType((yyvsp[-2].declPtr), (yyvsp[0].declPtr));
        if(plusResult){
            (yyval.declPtr) =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2319 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 762 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary '+' binary");
    if((yyvsp[-2].declPtr) != NULL && (yyvsp[0].declPtr) != NULL){
        struct decl* plusResult = plusType((yyvsp[-2].declPtr), (yyvsp[0].declPtr));
        if(plusResult){
            (yyval.declPtr) =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
    
    //code_gen()
    code_gen(ADD, NULL);
}
#line 2341 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 780 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->binary '-' binary");
    if((yyvsp[-2].declPtr) != NULL && (yyvsp[0].declPtr) != NULL){
        struct decl* plusResult = minusType((yyvsp[-2].declPtr), (yyvsp[0].declPtr));
        if(plusResult){
            (yyval.declPtr) =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2360 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 795 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("binary->unary");
    if((yyvsp[0].declPtr)){                     
        int isConst = checkIsConst((yyvsp[0].declPtr));     
        int isVar = checkIsVar((yyvsp[0].declPtr));          
        if(isConst == SUCCESS || isVar ==SUCCESS ){
            (yyval.declPtr) = (yyvsp[0].declPtr) -> type;
            (yyval.declPtr) -> intConst = (yyvsp[0].declPtr)->intConst; 
        }else{ 	                       
            semErr(RHS_NOT_VAR_CONST);
            (yyval.declPtr) = NULL;                                            	        	                                               
        }                            
    }else{                                              
        (yyval.declPtr) = NULL;                                    
    }    

    //code_gen()
    if(checkIsVar((yyvsp[0].declPtr))==SUCCESS){
        code_gen(FETCH, NULL);
    }
}
#line 2386 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 819 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'(' expr ')'");
    if((yyvsp[-1].declPtr)){
        (yyval.declPtr) = makeConstDecl((yyvsp[-1].declPtr), 0);
    }else{
        (yyval.declPtr) = NULL;
    }

}
#line 2400 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 828 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'(' unary ')'");
    if((yyvsp[-1].declPtr)){
        (yyval.declPtr) = (yyvsp[-1].declPtr);
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2413 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 836 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->INTEGER_CONST");
    struct decl* constDecl = makeIntConstDecl((yyvsp[0].intVal));
    //constDecl->type = findDeclByStr("int");
    (yyval.declPtr) = constDecl;
    
    //code_gen()
    code_gen(PUSH_CONST, setNewInteger((yyvsp[0].intVal)));
}
#line 2427 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 845 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->CHAR_CONST");
    struct decl* constDecl = makeCharConstDecl((yyvsp[0].stringVal));
    //constDecl->type = findDeclByStr("char");
    (yyval.declPtr) = constDecl;
}
#line 2438 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 851 "subc.y" /* yacc.c:1646  */
    {
    //printf("unary->ID %s \n", $1);
    REDUCE("unary->ID");
    (yyval.declPtr) = findDecl((yyvsp[0].idPtr));
    if((yyval.declPtr) == NULL){
        semErr(NOT_DECLARED);
    }

    //code_Gen()
    struct decl* declPtr = findDecl((yyvsp[0].idPtr));
    int offset = getOffset((yyvsp[0].idPtr));
    switch(declPtr->declClass){
        case DECL_FUNC :
            printf("decl_func\n");
            code_gen(SHIFT_SP, setNewInteger(1));
            code_gen(PUSH_CONST_RETURN_LABEL, setNewReturnLabel());
            code_gen(PUSH_REG, setNewRegType(FP));
           break;
        case DECL_VAR :
            if(checkIsGlobal((yyvsp[0].idPtr))){//global
                //printf("global\n");
                struct operand* opPtr = setNewLabel("Lglob");
                setInteger(opPtr, offset);
                code_gen(PUSH_CONST, opPtr);
            }else{
                code_gen(PUSH_REG, setNewRegType(FP));
                if(!checkIsParam((yyvsp[0].idPtr))){//local
                    //printf("local\n");
                    offset += getRecentFuncParamSize();
                }else{//param
                    //printf("param\n");
                }
                code_gen(PUSH_CONST, setNewInteger(offset));
                code_gen(ADD, NULL);
            }
            break;
    }
}
#line 2481 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 889 "subc.y" /* yacc.c:1646  */
    {
    //printf("unary->STRING %s \n", $1);
    REDUCE("unary->STRING");
    (yyval.declPtr) = makeCharConstDecl((yyvsp[0].stringVal));	
}
#line 2491 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 895 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'-' unary");
    if((yyvsp[0].declPtr) != NULL){
        int errNum = checkIsInt((yyvsp[0].declPtr)->type);
        if(errNum == SUCCESS){
            (yyval.declPtr) = (yyvsp[0].declPtr);
        }else{
            semErr(errNum);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2510 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 910 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'!' unary");
    if((yyvsp[0].declPtr)){
        if(checkIsInt((yyvsp[0].declPtr) -> type) == SUCCESS){
            (yyval.declPtr) = (yyvsp[0].declPtr);
        }else{
            semErr(NOT_INT);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2528 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 924 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary INCOP");
    if((yyvsp[-1].declPtr) != NULL){
        int errNum = checkIsIntOrChar((yyvsp[-1].declPtr)->type);
        if(errNum == SUCCESS){
            (yyval.declPtr) = (yyvsp[-1].declPtr);
        }else{
            semErr(errNum);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2547 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 939 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary DECOP");

    if((yyvsp[-1].declPtr) != NULL){
        int errNum = checkIsIntOrChar((yyvsp[-1].declPtr)->type);
        if(errNum == SUCCESS){
            (yyval.declPtr) = (yyvsp[-1].declPtr);
        }else{
            semErr(errNum);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }


}
#line 2569 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 957 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->INCOP unary ");
    if((yyvsp[0].declPtr) != NULL){
        int errNum = checkIsIntOrChar((yyvsp[0].declPtr)->type);
        if(errNum == SUCCESS){
            (yyval.declPtr) = (yyvsp[0].declPtr);
        }else{
            semErr(errNum);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2588 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 972 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->DECOP unary ");
    if((yyvsp[0].declPtr) != NULL){
        int errNum = checkIsIntOrChar((yyvsp[0].declPtr)->type);
        if(errNum == SUCCESS){
            (yyval.declPtr) = (yyvsp[0].declPtr);
        }else{
            semErr(errNum);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2607 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 987 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'&' unary");
    if((yyvsp[0].declPtr)){
        if(checkIsVar((yyvsp[0].declPtr)) == SUCCESS || (checkIsConst((yyvsp[0].declPtr))==SUCCESS&&checkIsArray((yyvsp[0].declPtr)->type)==SUCCESS)){
            (yyval.declPtr) = makeConstDecl(makePtrDecl((yyvsp[0].declPtr)->type), 0);
        }else{
            semErr(NOT_VAR_CONST);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2625 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1001 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->'*' unary");
    if((yyvsp[0].declPtr)){
        int errNum = checkIsPtr((yyvsp[0].declPtr)->type);
        if(errNum == SUCCESS){
            (yyval.declPtr)= makeVarDecl((yyvsp[0].declPtr)->type->ptrTo);
        }else{
            semErr(NOT_PTR);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }

    //code_gen()
    code_gen(FETCH, NULL);
}
#line 2647 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1019 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '[' expr ']'");
    if((yyvsp[-3].declPtr)  && (yyvsp[-1].declPtr) ){
        if(checkIsArray((yyvsp[-3].declPtr)->type) == SUCCESS){
            if(checkIsInt((yyvsp[-1].declPtr)) == SUCCESS){
                (yyval.declPtr) = (yyvsp[-3].declPtr)->type->elementVar;
            }else{
                semErr(NOT_INT);
                (yyval.declPtr) = NULL;
            }
        }else{
            semErr( NOT_ARRAY);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2670 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1038 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '.' ID");
    if((yyvsp[-2].declPtr) != NULL && (yyvsp[0].idPtr) != NULL ){
        if(checkIsStruct((yyvsp[-2].declPtr)->type) == SUCCESS){
            struct decl* fieldPtr = structAccess((yyvsp[-2].declPtr)->type, (yyvsp[0].idPtr));
            if(fieldPtr){
                (yyval.declPtr) = fieldPtr;
            }else{
                semErr(NOT_STRUCT_FIELD);
                (yyval.declPtr) = NULL;
            }
        }else{
            semErr(NOT_STRUCT);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2694 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1058 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary STRUCTOP ID");
    if((yyvsp[-2].declPtr) != NULL && (yyvsp[0].idPtr) != NULL ){
        if(checkIsPtr((yyvsp[-2].declPtr)->type) == SUCCESS){
            if(checkIsStruct((yyvsp[-2].declPtr)->type->ptrTo) == SUCCESS){
                struct decl* fieldPtr = structAccess((yyvsp[-2].declPtr)->type->ptrTo, (yyvsp[0].idPtr));
                if(fieldPtr){
                    //printf("fieldPtr->declClass = %d, fieldPtr->type->typeClass = %d\n", fieldPtr->declClass, fieldPtr->type->typeClass);
                    (yyval.declPtr) = fieldPtr;
                }else{
                    semErr(NOT_STRUCT_FIELD);
                    (yyval.declPtr) = NULL;
                }
            }else{
                semErr(NOT_STRUCT);
                (yyval.declPtr) = NULL;
            }
        }else{
            semErr(NOT_PTR);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) = NULL;
    }
}
#line 2724 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1084 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '(' args ')'");
    if((yyvsp[-3].declPtr) && (yyvsp[-1].nodePtr)) {
        if(checkIsFunc((yyvsp[-3].declPtr)) == SUCCESS){
            struct decl* returnConstDecl = checkFunctionCall((yyvsp[-3].declPtr), (yyvsp[-1].nodePtr));
            if(returnConstDecl){
                (yyval.declPtr)=returnConstDecl;
            }else{
                semErr(NOT_FORMAL_ARGS);
                (yyval.declPtr) = NULL;
            } 
        }else{
            semErr(NOT_FUNC);
            (yyval.declPtr) = NULL;
        }
    }else{
        (yyval.declPtr) =NULL;
    }
    resetArgList();

    //code_gen()
    code_gen(PUSH_REG, setNewRegType(SP));
    int paramSize = -1 * getParamSize((yyvsp[-3].declPtr));
    code_gen(PUSH_CONST, setNewInteger(paramSize));
    code_gen(ADD, NULL);
    code_gen(POP_REG, setNewRegType(FP));
    code_gen(JUMP, setNewLabel(findFuncName((yyvsp[-3].declPtr))));
    code_gen(WRITE_RETURN_LABEL, getReturnLabel());
}
#line 2758 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1114 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("unary->unary '(' ')'");
    if((yyvsp[-2].declPtr) != NULL ){
        if(checkIsFunc((yyvsp[-2].declPtr)) == SUCCESS){
            checkIsFunc((yyvsp[-2].declPtr));
            struct decl* returnConstDecl = checkFunctionCall((yyvsp[-2].declPtr), NULL);
            if(returnConstDecl){
                (yyval.declPtr)=returnConstDecl;
            }else{
                semErr(NOT_FORMAL_ARGS);
                (yyval.declPtr) = NULL;
            }
        }else{
            semErr(NOT_FUNC);
            (yyval.declPtr) = NULL;
        }

    }else{
        (yyval.declPtr) =NULL;
    }

    //code_gen()
    code_gen(PUSH_REG, setNewRegType(SP));
    code_gen(POP_REG, setNewRegType(FP));
    code_gen(JUMP, setNewLabel(findFuncName((yyvsp[-2].declPtr))));
    code_gen(WRITE_RETURN_LABEL, getReturnLabel());
}
#line 2790 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1144 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("args->expr");
    if((yyvsp[0].declPtr) != NULL){
        (yyval.nodePtr) =  addArg((yyvsp[0].declPtr));
    }else{
        printf("expr = NULL\n");
        (yyval.nodePtr) = NULL;
    }
}
#line 2804 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1154 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("args->args ',' expr");
    if((yyvsp[-2].nodePtr) != NULL && (yyvsp[0].declPtr) != NULL){
        (yyval.nodePtr) =  addArg((yyvsp[0].declPtr));
    }else{
        printf("expr = NULL\n");
        (yyval.nodePtr) = NULL;
    }

}
#line 2819 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2823 "subc.tab.c" /* yacc.c:1646  */
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
#line 1165 "subc.y" /* yacc.c:1906  */


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

