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


#line 80 "subc.tab.c" /* yacc.c:339  */

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
    IFSIMPLE = 258,
    ELSE = 259,
    LOGICAL_OR = 260,
    LOGICAL_AND = 261,
    EQUOP = 262,
    RELOP = 263,
    INCOP = 264,
    DECOP = 265,
    STRUCTOP = 266,
    STRUCT = 267,
    RETURN = 268,
    IF = 269,
    WHILE = 270,
    FOR = 271,
    BREAK = 272,
    CONTINUE = 273,
    TYPE = 274,
    ID = 275,
    CHAR_CONST = 276,
    STRING = 277,
    VOID = 278,
    INTEGER_CONST = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "subc.y" /* yacc.c:355  */

	int		intVal;
	char	*stringVal;

#line 150 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 167 "subc.tab.c" /* yacc.c:358  */

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
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

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
       2,     2,     2,    15,     2,     2,     2,     2,     9,     2,
      20,    21,    14,    12,     5,    13,    22,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     6,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
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
       7,     8,    10,    11,    16,    17,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    48,    51,    55,    58,    61,    64,    67,
      71,    74,    77,    82,    85,    89,    92,    95,    99,   102,
     106,   109,   113,   116,   120,   123,   127,   130,   133,   136,
     140,   144,   148,   151,   155,   158,   161,   164,   167,   170,
     173,   176,   179,   182,   185,   189,   192,   196,   200,   203,
     207,   211,   214,   218,   222,   225,   229,   232,   235,   238,
     241,   245,   248,   251,   254,   257,   261,   265,   268,   271,
     274,   277,   280,   283,   286,   289,   292,   295,   298,   301,
     305,   308
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IFSIMPLE", "ELSE", "','", "'='",
  "LOGICAL_OR", "LOGICAL_AND", "'&'", "EQUOP", "RELOP", "'+'", "'-'",
  "'*'", "'!'", "INCOP", "DECOP", "'['", "']'", "'('", "')'", "'.'",
  "STRUCTOP", "STRUCT", "RETURN", "IF", "WHILE", "FOR", "BREAK",
  "CONTINUE", "TYPE", "ID", "CHAR_CONST", "STRING", "VOID",
  "INTEGER_CONST", "';'", "'{'", "'}'", "$accept", "program",
  "ext_def_list", "ext_def", "type_specifier", "struct_specifier",
  "func_decl", "pointers", "param_list", "param_decl", "def_list", "def",
  "compound_stmt", "local_defs", "stmt_list", "stmt", "expr_e",
  "const_expr", "expr", "or_expr", "or_list", "and_expr", "and_list",
  "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    44,    61,   260,   261,    38,
     262,   263,    43,    45,    42,    33,   264,   265,    91,    93,
      40,    41,    46,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    59,   123,   125
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -91,    12,    64,   -91,   -17,   -91,   -91,   -91,     2,   -91,
      82,    17,   -91,   -91,    40,   -91,   -91,   -91,   -91,    -9,
      64,   -91,   144,   127,   153,   -91,    57,    56,   -91,     4,
     -91,   127,   127,   127,   127,   127,   127,   127,   -91,   -91,
     -91,   -91,    77,   -91,   -91,   123,   -91,   129,   188,   149,
     -91,   124,   132,     5,   -91,   -91,   117,   -91,    89,   128,
     133,   136,   120,   121,   -91,   -91,   -91,   -91,   125,   169,
     169,   169,   169,   169,   169,   143,    95,   139,   127,   127,
     127,   127,   127,   127,   127,   -91,   -91,   127,   118,   138,
     141,   -91,   146,    64,   -91,     7,   -91,   145,   127,   127,
     127,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   169,   188,
      46,   116,   -91,   -91,   -91,   161,   -91,   -91,    42,   -91,
     -91,   163,   -91,   127,   -91,   -91,   181,   182,   167,   -91,
     -91,   127,   -91,   127,   171,    53,    53,   127,   -91,   186,
     170,   202,   -91,   172,   -91,   -91,    53,   127,   -91,   187,
      53,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,    10,    11,     3,    19,    12,
       0,    14,    18,     8,     0,     7,    25,     9,    25,     0,
      31,    33,     0,     0,     0,     5,    19,     0,    24,     0,
      13,     0,     0,     0,     0,     0,     0,     0,    65,    64,
      66,    63,     0,    47,    49,    50,    52,    53,    55,    60,
      15,    11,    19,     0,    20,    28,     0,    29,     0,     0,
       0,     0,     0,     0,    38,    30,    35,    32,     0,    73,
      67,    74,    68,    71,    72,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,     0,     0,     0,
       0,    16,     0,     0,    17,     0,    36,     0,     0,     0,
      46,    43,    44,    34,    61,    62,     6,    51,    60,    54,
      57,    56,    58,    59,    48,     0,    79,    80,     0,    76,
      77,    22,    21,     0,    26,    37,     0,     0,     0,    45,
      75,     0,    78,     0,     0,     0,     0,    46,    81,     0,
       0,    39,    41,     0,    23,    27,     0,    46,    40,     0,
       0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -91,   -91,    -1,   -91,   208,    -4,   -91,   119,
     193,   -91,   203,   -91,   -91,   -90,   -63,   -26,   -23,   -91,
     -91,   137,   -91,   114,   -29,   -91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    26,     9,    27,    14,    53,    54,
      20,    28,    66,    21,    29,    67,   128,    42,    68,    44,
      45,    46,    47,    48,    49,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,     8,    69,    70,    71,    72,    73,    74,    76,    23,
      93,    24,     3,    31,    75,    11,    12,    32,    33,    34,
      35,    36,    56,    52,    37,   123,    94,    24,    25,    58,
      59,    60,    61,    62,    63,    97,    38,    39,    40,    13,
      41,    64,    16,    65,   124,   141,   142,   131,    92,   108,
     108,   108,   108,   108,   108,    18,   148,    81,    82,    83,
     151,   114,    31,   132,   115,   117,    32,    33,    34,    35,
      36,    12,    19,    37,   143,   126,   127,   129,    58,    59,
      60,    61,    62,    63,   149,    38,    39,    40,     4,    41,
      64,    16,    52,    57,    55,     5,    77,   134,    31,     6,
      43,    84,    32,    33,    34,    35,    36,   139,   138,    37,
      43,    85,    86,    87,   129,    88,   105,    89,    90,    15,
      16,    38,    39,    40,   129,    41,    96,    31,    82,    83,
      78,    32,    33,    34,    35,    36,    31,    79,    37,   116,
      32,    33,    34,    35,    36,    91,    12,    37,    98,    95,
      38,    39,    40,    99,    41,    84,   100,   101,   102,    38,
      39,    40,   103,    41,   104,    85,    86,    87,     4,    88,
     119,    89,    90,   120,    50,     5,   106,     4,   121,     6,
     130,   133,   125,    30,     5,    85,    86,    87,    51,    88,
     140,    89,    90,   109,   110,   111,   112,   113,    80,    81,
      82,    83,   135,   136,   137,   144,   146,   145,   150,   147,
      10,    22,   122,    17,     0,   107
};

static const yytype_int16 yycheck[] =
{
      23,     2,    31,    32,    33,    34,    35,    36,    37,    18,
       5,    20,     0,     9,    37,    32,    14,    13,    14,    15,
      16,    17,    26,    24,    20,    18,    21,    20,    37,    25,
      26,    27,    28,    29,    30,    58,    32,    33,    34,    37,
      36,    37,    38,    39,    37,   135,   136,     5,    52,    78,
      79,    80,    81,    82,    83,    38,   146,    11,    12,    13,
     150,    84,     9,    21,    87,    88,    13,    14,    15,    16,
      17,    14,    32,    20,   137,    98,    99,   100,    25,    26,
      27,    28,    29,    30,   147,    32,    33,    34,    24,    36,
      37,    38,    93,    37,    37,    31,    19,   123,     9,    35,
     123,     6,    13,    14,    15,    16,    17,   133,   131,    20,
     133,    16,    17,    18,   137,    20,    21,    22,    23,    37,
      38,    32,    33,    34,   147,    36,    37,     9,    12,    13,
       7,    13,    14,    15,    16,    17,     9,     8,    20,    21,
      13,    14,    15,    16,    17,    21,    14,    20,    20,    32,
      32,    33,    34,    20,    36,     6,    20,    37,    37,    32,
      33,    34,    37,    36,    21,    16,    17,    18,    24,    20,
      32,    22,    23,    32,    21,    31,    37,    24,    32,    35,
      19,    18,    37,    39,    31,    16,    17,    18,    35,    20,
      19,    22,    23,    79,    80,    81,    82,    83,    10,    11,
      12,    13,    21,    21,    37,    19,     4,    37,    21,    37,
       2,    18,    93,    10,    -1,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,    24,    31,    35,    43,    44,    45,
      46,    32,    14,    37,    47,    37,    38,    52,    38,    32,
      50,    53,    50,    18,    20,    37,    44,    46,    51,    54,
      39,     9,    13,    14,    15,    16,    17,    20,    32,    33,
      34,    36,    57,    58,    59,    60,    61,    62,    63,    64,
      21,    35,    44,    48,    49,    37,    47,    37,    25,    26,
      27,    28,    29,    30,    37,    39,    52,    55,    58,    64,
      64,    64,    64,    64,    64,    58,    64,    19,     7,     8,
      10,    11,    12,    13,     6,    16,    17,    18,    20,    22,
      23,    21,    47,     5,    21,    32,    37,    58,    20,    20,
      20,    37,    37,    37,    21,    21,    37,    61,    64,    63,
      63,    63,    63,    63,    58,    58,    21,    58,    65,    32,
      32,    32,    49,    18,    37,    37,    58,    58,    56,    58,
      19,     5,    21,    18,    57,    21,    21,    37,    58,    57,
      19,    55,    55,    56,    19,    37,     4,    37,    55,    56,
      21,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    44,    45,    45,    46,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    50,    51,    51,    51,    51,
      52,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    57,    58,    58,
      59,    60,    60,    61,    62,    62,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     5,     2,     5,     6,     6,     1,     0,
       1,     3,     3,     6,     2,     0,     4,     7,     2,     2,
       4,     1,     2,     0,     2,     1,     2,     3,     1,     5,
       7,     5,     9,     2,     2,     1,     0,     1,     3,     1,
       1,     3,     1,     1,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     3,     3,     4,     3,
       1,     3
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
#line 44 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("program->ext_def_list");
        }
#line 1363 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def_list->ext_def_list ext_def");
        }
#line 1371 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def_list->epsilon");
        }
#line 1379 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 55 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def->type_specifier pointers ID ';' ");
	}
#line 1387 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 58 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def->type_specifier pointers ID '[' const_expr ']' ';' ");
	}
#line 1395 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 61 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def->func_decl ';' ");
	}
#line 1403 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def->type_specifier ';' ");
	}
#line 1411 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("ext_def->func_decl compound_stmt ");
	}
#line 1419 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("type_specifier->TYPE");
        }
#line 1427 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("type_specifier->VOID");
	}
#line 1435 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "subc.y" /* yacc.c:1646  */
    {
		//printf("%s \n", $1);
            REDUCE("type_specifier->struct_specifier");
        }
#line 1444 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 82 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
        }
#line 1452 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 85 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("struct_specifier->STRUCT ID ");
        }
#line 1460 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("funct_decl->type_specifier pointers ID '(' ')'");
        }
#line 1468 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("funct_decl->type_specifier pointers ID '(' VOID ')'");
        }
#line 1476 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 95 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("funct_decl->type_specifier pointers ID '(' param_list ')'");
        }
#line 1484 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("pointers->'*'");
	}
#line 1492 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("pointers->epsilon");
	}
#line 1500 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("param_list->param_decl");
	}
#line 1508 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 109 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("param_list->param_list ',' param_decl");
	}
#line 1516 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("param_decl -> type_specifier pointers ID");
	}
#line 1524 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("param_decl -> type_specifier pointers ID '[' const_expr ']'	");
	}
#line 1532 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("def_list->def_list def");
        }
#line 1540 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("def_list->epsilon");
        }
#line 1548 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 127 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("def->type_specifier pointers ID ';'	");
        }
#line 1556 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 130 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
        }
#line 1564 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 133 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("def->type_specifier ';'");
        }
#line 1572 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 136 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("def->func_decl ';'	");
        }
#line 1580 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 140 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
        }
#line 1588 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 144 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("local_defs->def_list");
        }
#line 1596 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 148 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt_list->stmt_list stmt");
        }
#line 1604 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 151 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt_list->epsilon");
        }
#line 1612 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 155 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->expr ';'");
        }
#line 1620 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 158 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->compound_stmt");
        }
#line 1628 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->RETURN ';'");
        }
#line 1636 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 164 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->RETURN expr ';'");
        }
#line 1644 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 167 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->';'");
        }
#line 1652 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 170 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->IF '(' expr ')' stmt	");
        }
#line 1660 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 173 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
        }
#line 1668 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->WHILE '(' expr ')' stmt");
        }
#line 1676 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 179 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
        }
#line 1684 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 182 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->BREAK ';'");
        }
#line 1692 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 185 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("stmt->CONTINUE ';'");
        }
#line 1700 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 189 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("test->expr");
        }
#line 1708 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 192 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("test->epsilon");
        }
#line 1716 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 196 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("const_expr->expr");
        }
#line 1724 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 200 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("expr->unary '=' expr");
        }
#line 1732 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 203 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("expr->or_expr");
        }
#line 1740 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 207 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("or_expr->or_list");
        }
#line 1748 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 211 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("or_list->or_list LOGICAL_OR and_expr");
        }
#line 1756 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 214 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("or_list->and_expr");
        }
#line 1764 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 218 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("and_expr->and_list");
        }
#line 1772 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 222 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("and_list->and_list LOGICAL_AND binary");
        }
#line 1780 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 225 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("and_list->binary");
        }
#line 1788 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 229 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("binary->binary RELOP binary");
        }
#line 1796 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 232 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("binary->binary EQUOP binary");
        }
#line 1804 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 235 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("binary->binary '+' binary");
        }
#line 1812 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 238 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("binary->binary '-' binary");
        }
#line 1820 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 241 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("binary->unary");
        }
#line 1828 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 245 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->'(' expr ')'");
        }
#line 1836 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 248 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->'(' unary ')'");
        }
#line 1844 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 251 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->INTEGER_CONST");
        }
#line 1852 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 254 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->CHAR_CONST");
        }
#line 1860 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 257 "subc.y" /* yacc.c:1646  */
    {
            //printf("unary->ID %s \n", $1);
            REDUCE("unary->ID");
        }
#line 1869 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 261 "subc.y" /* yacc.c:1646  */
    {
            //printf("unary->STRING %s \n", $1);
            REDUCE("unary->STRING");
        }
#line 1878 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 265 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->'-' unary");
        }
#line 1886 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 268 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->'!' unary");
        }
#line 1894 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 271 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->unary INCOP");
        }
#line 1902 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 274 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->unary DECOP");
        }
#line 1910 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 277 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->INCOP unary ");
        }
#line 1918 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 280 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->DECOP unary ");
        }
#line 1926 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 283 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->'&' unary");
        }
#line 1934 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 286 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->'*' unary");
        }
#line 1942 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 289 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->unary '[' expr ']'");
        }
#line 1950 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 292 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->unary '.' ID");
        }
#line 1958 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 295 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->unary STRUCTOP ID");
        }
#line 1966 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 298 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->unary '(' args ')'");
        }
#line 1974 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 301 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("unary->unary '(' ')'");
        }
#line 1982 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 305 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("args->expr");
        }
#line 1990 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 308 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("args->args ',' expr");
        }
#line 1998 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2002 "subc.tab.c" /* yacc.c:1646  */
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
#line 312 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes 
 	Implemnt REDUCE function here */

int    yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
}

void 	REDUCE( char* s)
{
	printf("%s\n",s);
}

