/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         quickstep_yyparse
#define yylex           quickstep_yylex
#define yyerror         quickstep_yyerror
#define yydebug         quickstep_yydebug
#define yynerrs         quickstep_yynerrs


/* Copy the first part of user declarations.  */
#line 35 "../SqlParser.ypp" /* yacc.c:339  */


/* Override the default definition, as we only need <first_line> and <first_column>. */
typedef struct YYLTYPE {
  int first_line;
  int first_column;
} YYLTYPE;

#define YYLTYPE_IS_DECLARED 1

/*
 * Modified from the default YYLLOC_DEFAULT
 * (http://www.gnu.org/software/bison/manual/html_node/Location-Default-Action.html).
 * The assignments for last_line and last_column are removed as they are not used.
 */
#define YYLLOC_DEFAULT(current, rhs, n)                         \
  do {                                                          \
    if (n) {                                                    \
      (current).first_line   = YYRHSLOC(rhs, 1).first_line;     \
      (current).first_column = YYRHSLOC(rhs, 1).first_column;   \
    } else {                                                    \
      /* empty RHS */                                           \
      (current).first_line = YYRHSLOC(rhs, 0).first_line;       \
      (current).first_column = YYRHSLOC(rhs, 0).first_column;   \
    }                                                           \
  } while (0)

#line 64 "../SqlParser.ypp" /* yacc.c:339  */

#include <cstdlib>
#include <string>
#include <utility>

#include "catalog/PartitionSchemeHeader.hpp"
#include "parser/ParseAssignment.hpp"
#include "parser/ParseAttributeDefinition.hpp"
#include "parser/ParseBasicExpressions.hpp"
#include "parser/ParseBlockProperties.hpp"
#include "parser/ParseCaseExpressions.hpp"
#include "parser/ParseExpression.hpp"
#include "parser/ParseGeneratorTableReference.hpp"
#include "parser/ParseGroupBy.hpp"
#include "parser/ParseHaving.hpp"
#include "parser/ParseJoinedTableReference.hpp"
#include "parser/ParseKeyValue.hpp"
#include "parser/ParseLimit.hpp"
#include "parser/ParseLiteralValue.hpp"
#include "parser/ParseOrderBy.hpp"
#include "parser/ParsePartitionClause.hpp"
#include "parser/ParsePredicate.hpp"
#include "parser/ParsePredicateExists.hpp"
#include "parser/ParsePredicateInTableQuery.hpp"
#include "parser/ParsePriority.hpp"
#include "parser/ParserUtil.hpp"
#include "parser/ParseSample.hpp"
#include "parser/ParseSelect.hpp"
#include "parser/ParseSelectionClause.hpp"
#include "parser/ParseSimpleTableReference.hpp"
#include "parser/ParseStatement.hpp"
#include "parser/ParseString.hpp"
#include "parser/ParseSubqueryExpression.hpp"
#include "parser/ParseSubqueryTableReference.hpp"
#include "parser/ParseTableReference.hpp"
#include "parser/ParseWindow.hpp"
#include "storage/StorageBlockInfo.hpp"
#include "types/Type.hpp"
#include "types/TypeFactory.hpp"
#include "types/TypeID.hpp"
#include "types/operations/binary_operations/BinaryOperation.hpp"
#include "types/operations/binary_operations/BinaryOperationFactory.hpp"
#include "types/operations/binary_operations/BinaryOperationID.hpp"
#include "types/operations/comparisons/Comparison.hpp"
#include "types/operations/comparisons/ComparisonFactory.hpp"
#include "types/operations/comparisons/ComparisonID.hpp"
#include "types/operations/unary_operations/UnaryOperation.hpp"
#include "types/operations/unary_operations/UnaryOperationFactory.hpp"
#include "types/operations/unary_operations/UnaryOperationID.hpp"
#include "utility/PtrList.hpp"
#include "utility/PtrVector.hpp"

// Needed for Bison 2.6 and higher, which do not automatically provide this typedef.
typedef void* yyscan_t;

#line 156 "SqlParser_gen.cpp" /* yacc.c:339  */

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
   by #include "SqlParser_gen.hpp".  */
#ifndef YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
# define YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int quickstep_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_COMMAND = 258,
    TOKEN_NAME = 259,
    TOKEN_STRING_SINGLE_QUOTED = 260,
    TOKEN_STRING_DOUBLE_QUOTED = 261,
    TOKEN_UNSIGNED_NUMVAL = 262,
    TOKEN_OR = 263,
    TOKEN_AND = 264,
    TOKEN_NOT = 265,
    TOKEN_EQ = 266,
    TOKEN_LT = 267,
    TOKEN_LEQ = 268,
    TOKEN_GT = 269,
    TOKEN_GEQ = 270,
    TOKEN_NEQ = 271,
    TOKEN_LIKE = 272,
    TOKEN_REGEXP = 273,
    TOKEN_BETWEEN = 274,
    TOKEN_IS = 275,
    UNARY_PLUS = 276,
    UNARY_MINUS = 277,
    TOKEN_ADD = 278,
    TOKEN_ALL = 279,
    TOKEN_ALTER = 280,
    TOKEN_AS = 281,
    TOKEN_ASC = 282,
    TOKEN_BIGINT = 283,
    TOKEN_BIT = 284,
    TOKEN_BITWEAVING = 285,
    TOKEN_BLOCKPROPERTIES = 286,
    TOKEN_BLOCKSAMPLE = 287,
    TOKEN_BLOOM_FILTER = 288,
    TOKEN_CSB_TREE = 289,
    TOKEN_BY = 290,
    TOKEN_CASE = 291,
    TOKEN_CHARACTER = 292,
    TOKEN_CHECK = 293,
    TOKEN_COLUMN = 294,
    TOKEN_CONSTRAINT = 295,
    TOKEN_COPY = 296,
    TOKEN_CREATE = 297,
    TOKEN_CURRENT = 298,
    TOKEN_DATE = 299,
    TOKEN_DATETIME = 300,
    TOKEN_DAY = 301,
    TOKEN_DECIMAL = 302,
    TOKEN_DEFAULT = 303,
    TOKEN_DELETE = 304,
    TOKEN_DELIMITER = 305,
    TOKEN_DESC = 306,
    TOKEN_DISTINCT = 307,
    TOKEN_DOUBLE = 308,
    TOKEN_DROP = 309,
    TOKEN_ELSE = 310,
    TOKEN_END = 311,
    TOKEN_ESCAPE_STRINGS = 312,
    TOKEN_EXISTS = 313,
    TOKEN_EXTRACT = 314,
    TOKEN_FALSE = 315,
    TOKEN_FIRST = 316,
    TOKEN_FLOAT = 317,
    TOKEN_FOLLOWING = 318,
    TOKEN_FOR = 319,
    TOKEN_FOREIGN = 320,
    TOKEN_FROM = 321,
    TOKEN_FULL = 322,
    TOKEN_GROUP = 323,
    TOKEN_HASH = 324,
    TOKEN_HAVING = 325,
    TOKEN_HOUR = 326,
    TOKEN_IN = 327,
    TOKEN_INDEX = 328,
    TOKEN_INNER = 329,
    TOKEN_INSERT = 330,
    TOKEN_INTEGER = 331,
    TOKEN_INTERVAL = 332,
    TOKEN_INTO = 333,
    TOKEN_JOIN = 334,
    TOKEN_KEY = 335,
    TOKEN_LAST = 336,
    TOKEN_LEFT = 337,
    TOKEN_LIMIT = 338,
    TOKEN_LONG = 339,
    TOKEN_MINUTE = 340,
    TOKEN_MONTH = 341,
    TOKEN_NULL = 342,
    TOKEN_NULLS = 343,
    TOKEN_OFF = 344,
    TOKEN_ON = 345,
    TOKEN_ORDER = 346,
    TOKEN_OUTER = 347,
    TOKEN_OVER = 348,
    TOKEN_PARTITION = 349,
    TOKEN_PARTITIONS = 350,
    TOKEN_PERCENT = 351,
    TOKEN_PRECEDING = 352,
    TOKEN_PRIMARY = 353,
    TOKEN_PRIORITY = 354,
    TOKEN_QUIT = 355,
    TOKEN_RANGE = 356,
    TOKEN_REAL = 357,
    TOKEN_REFERENCES = 358,
    TOKEN_RIGHT = 359,
    TOKEN_ROW = 360,
    TOKEN_ROW_DELIMITER = 361,
    TOKEN_ROWS = 362,
    TOKEN_SECOND = 363,
    TOKEN_SELECT = 364,
    TOKEN_SET = 365,
    TOKEN_SMA = 366,
    TOKEN_SMALLINT = 367,
    TOKEN_SUBSTRING = 368,
    TOKEN_TABLE = 369,
    TOKEN_THEN = 370,
    TOKEN_TIME = 371,
    TOKEN_TIMESTAMP = 372,
    TOKEN_TRUE = 373,
    TOKEN_TUPLESAMPLE = 374,
    TOKEN_UNBOUNDED = 375,
    TOKEN_UNIQUE = 376,
    TOKEN_UPDATE = 377,
    TOKEN_USING = 378,
    TOKEN_VALUES = 379,
    TOKEN_VARCHAR = 380,
    TOKEN_WHEN = 381,
    TOKEN_WHERE = 382,
    TOKEN_WINDOW = 383,
    TOKEN_WITH = 384,
    TOKEN_YEAR = 385,
    TOKEN_YEARMONTH = 386,
    TOKEN_EOF = 387,
    TOKEN_LEX_ERROR = 388
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 120 "../SqlParser.ypp" /* yacc.c:355  */

  quickstep::ParseString *string_value_;

  quickstep::PtrList<quickstep::ParseString> *string_list_;

  bool boolean_value_;

  quickstep::NumericParseLiteralValue *numeric_literal_value_;
  quickstep::ParseLiteralValue *literal_value_;
  quickstep::PtrList<quickstep::ParseScalarLiteral> *literal_value_list_;

  quickstep::ParseExpression *expression_;

  quickstep::ParseScalarLiteral *scalar_literal_;
  quickstep::ParseAttribute *attribute_;
  quickstep::PtrList<quickstep::ParseAttribute> *attribute_list_;

  quickstep::ParsePredicate *predicate_;

  quickstep::ParseSubqueryExpression *subquery_expression_;

  quickstep::PtrVector<quickstep::ParseSimpleWhenClause> *simple_when_clause_list_;
  quickstep::ParseSimpleWhenClause *simple_when_clause_;

  quickstep::PtrVector<quickstep::ParseSearchedWhenClause> *searched_when_clause_list_;
  quickstep::ParseSearchedWhenClause *searched_when_clause_;

  quickstep::ParseSelectionClause *selection_;
  quickstep::ParseSelectionItem *selection_item_;
  quickstep::ParseSelectionList *selection_list_;

  quickstep::ParseTableReference *table_reference_;
  quickstep::PtrList<quickstep::ParseTableReference> *table_reference_list_;
  quickstep::ParseTableReferenceSignature *table_reference_signature_;

  quickstep::ParseJoinedTableReference::JoinType join_type_;

  quickstep::ParseDataType *data_type_;
  quickstep::ParseAttributeDefinition *attribute_definition_;
  quickstep::ParseColumnConstraint *column_constraint_;
  quickstep::PtrList<quickstep::ParseColumnConstraint> *column_constraint_list_;
  quickstep::PtrList<quickstep::ParseAttributeDefinition> *attribute_definition_list_;

  quickstep::ParseKeyValue *key_value_;
  quickstep::PtrList<quickstep::ParseKeyValue> *key_value_list_;
  quickstep::ParseKeyStringValue *key_string_value_;
  quickstep::ParseKeyStringList *key_string_list_;
  quickstep::ParseKeyIntegerValue *key_integer_value_;

  quickstep::ParseCopyFromParams *copy_from_params_;

  quickstep::ParseAssignment *assignment_;
  quickstep::PtrList<quickstep::ParseAssignment> *assignment_list_;

  quickstep::ParseCommand *command_;
  quickstep::PtrVector<quickstep::ParseString> *command_argument_list_;

  quickstep::ParseStatement *statement_;
  quickstep::ParseStatementSelect *select_statement_;
  quickstep::ParseStatementUpdate *update_statement_;
  quickstep::ParseStatementInsert *insert_statement_;
  quickstep::ParseStatementDelete *delete_statement_;
  quickstep::ParseStatementCopyFrom *copy_from_statement_;
  quickstep::ParseStatementCreateTable *create_table_statement_;
  quickstep::ParsePartitionClause *partition_clause_;
  quickstep::ParseBlockProperties *block_properties_;
  quickstep::ParseStatementDropTable *drop_table_statement_;
  quickstep::ParseStatementQuit *quit_statement_;

  const quickstep::Comparison *comparison_;
  const quickstep::UnaryOperation *unary_operation_;
  const quickstep::BinaryOperation *binary_operation_;

  quickstep::ParseFunctionCall *function_call_;
  quickstep::PtrList<quickstep::ParseExpression> *expression_list_;

  quickstep::ParseSelect *select_query_;
  quickstep::ParseGroupBy *opt_group_by_clause_;
  quickstep::ParseHaving *opt_having_clause_;
  quickstep::ParseOrderBy *opt_order_by_clause_;
  bool *order_direction_;
  quickstep::ParseLimit *opt_limit_clause_;

  quickstep::ParseSample *opt_sample_clause_;

  quickstep::PtrList<quickstep::ParseWindow> *opt_window_clause_;
  quickstep::ParseWindow *window_definition_;
  quickstep::PtrList<quickstep::ParseExpression> *window_partition_by_list_;
  quickstep::PtrList<quickstep::ParseOrderByItem> *window_order_by_list_;
  quickstep::ParseFrameInfo *window_frame_info_;

  quickstep::PtrList<quickstep::ParseOrderByItem> *order_commalist_;
  quickstep::ParseOrderByItem *order_item_;

  quickstep::PtrVector<quickstep::ParseSubqueryTableReference> *with_list_;
  quickstep::ParseSubqueryTableReference *with_list_element_;

  quickstep::ParsePriority *opt_priority_clause_;

#line 430 "SqlParser_gen.cpp" /* yacc.c:355  */
};
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



int quickstep_yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement);

#endif /* !YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 220 "../SqlParser.ypp" /* yacc.c:358  */

/* This header needs YYSTYPE, which is defined by the %union directive above */
#include "SqlLexer_gen.hpp"
void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature);

#line 463 "SqlParser_gen.cpp" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  289
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  536

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   388

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     140,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   144,     2,     2,
     141,   142,    23,    21,   143,    22,    27,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   139,
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
      15,    16,    17,    18,    19,    20,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   629,   629,   633,   637,   641,   645,   648,   655,   658,
     661,   664,   667,   670,   673,   676,   679,   682,   688,   694,
     701,   707,   714,   723,   728,   737,   742,   747,   751,   757,
     762,   765,   768,   773,   776,   779,   782,   785,   788,   791,
     794,   797,   800,   812,   815,   818,   836,   856,   859,   862,
     867,   872,   878,   884,   893,   897,   903,   906,   911,   916,
     921,   928,   935,   939,   945,   948,   953,   956,   961,   964,
     969,   972,   991,   995,  1001,  1005,  1011,  1014,  1017,  1022,
    1025,  1032,  1037,  1048,  1053,  1057,  1061,  1067,  1070,  1076,
    1084,  1087,  1090,  1096,  1101,  1104,  1109,  1113,  1117,  1121,
    1127,  1132,  1137,  1141,  1147,  1153,  1156,  1161,  1164,  1183,
    1188,  1192,  1198,  1204,  1210,  1213,  1217,  1223,  1226,  1231,
    1235,  1241,  1244,  1247,  1252,  1257,  1262,  1265,  1268,  1273,
    1276,  1279,  1282,  1285,  1288,  1291,  1294,  1299,  1302,  1307,
    1311,  1315,  1318,  1322,  1325,  1330,  1333,  1338,  1341,  1346,
    1350,  1356,  1359,  1364,  1367,  1372,  1375,  1380,  1383,  1402,
    1405,  1410,  1414,  1420,  1426,  1431,  1434,  1439,  1442,  1447,
    1450,  1455,  1458,  1463,  1464,  1467,  1472,  1473,  1476,  1481,
    1485,  1491,  1498,  1501,  1504,  1509,  1512,  1515,  1521,  1524,
    1529,  1534,  1543,  1548,  1557,  1562,  1565,  1570,  1573,  1578,
    1584,  1590,  1593,  1596,  1599,  1602,  1605,  1611,  1620,  1623,
    1628,  1631,  1636,  1639,  1644,  1647,  1650,  1653,  1657,  1661,
    1664,  1667,  1670,  1673,  1678,  1682,  1686,  1689,  1694,  1699,
    1703,  1709,  1712,  1717,  1721,  1727,  1732,  1736,  1742,  1747,
    1750,  1755,  1759,  1765,  1768,  1771,  1774,  1786,  1790,  1809,
    1822,  1837,  1840,  1843,  1846,  1849,  1852,  1857,  1861,  1867,
    1870,  1875,  1879,  1886,  1889,  1892,  1895,  1898,  1901,  1904,
    1907,  1910,  1913,  1918,  1929,  1932,  1937,  1940,  1943,  1949,
    1953,  1959,  1962,  1970,  1973,  1976,  1979,  1985,  1990,  1995
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_COMMAND", "TOKEN_NAME",
  "TOKEN_STRING_SINGLE_QUOTED", "TOKEN_STRING_DOUBLE_QUOTED",
  "TOKEN_UNSIGNED_NUMVAL", "TOKEN_OR", "TOKEN_AND", "TOKEN_NOT",
  "TOKEN_EQ", "TOKEN_LT", "TOKEN_LEQ", "TOKEN_GT", "TOKEN_GEQ",
  "TOKEN_NEQ", "TOKEN_LIKE", "TOKEN_REGEXP", "TOKEN_BETWEEN", "TOKEN_IS",
  "'+'", "'-'", "'*'", "'/'", "UNARY_PLUS", "UNARY_MINUS", "'.'",
  "TOKEN_ADD", "TOKEN_ALL", "TOKEN_ALTER", "TOKEN_AS", "TOKEN_ASC",
  "TOKEN_BIGINT", "TOKEN_BIT", "TOKEN_BITWEAVING", "TOKEN_BLOCKPROPERTIES",
  "TOKEN_BLOCKSAMPLE", "TOKEN_BLOOM_FILTER", "TOKEN_CSB_TREE", "TOKEN_BY",
  "TOKEN_CASE", "TOKEN_CHARACTER", "TOKEN_CHECK", "TOKEN_COLUMN",
  "TOKEN_CONSTRAINT", "TOKEN_COPY", "TOKEN_CREATE", "TOKEN_CURRENT",
  "TOKEN_DATE", "TOKEN_DATETIME", "TOKEN_DAY", "TOKEN_DECIMAL",
  "TOKEN_DEFAULT", "TOKEN_DELETE", "TOKEN_DELIMITER", "TOKEN_DESC",
  "TOKEN_DISTINCT", "TOKEN_DOUBLE", "TOKEN_DROP", "TOKEN_ELSE",
  "TOKEN_END", "TOKEN_ESCAPE_STRINGS", "TOKEN_EXISTS", "TOKEN_EXTRACT",
  "TOKEN_FALSE", "TOKEN_FIRST", "TOKEN_FLOAT", "TOKEN_FOLLOWING",
  "TOKEN_FOR", "TOKEN_FOREIGN", "TOKEN_FROM", "TOKEN_FULL", "TOKEN_GROUP",
  "TOKEN_HASH", "TOKEN_HAVING", "TOKEN_HOUR", "TOKEN_IN", "TOKEN_INDEX",
  "TOKEN_INNER", "TOKEN_INSERT", "TOKEN_INTEGER", "TOKEN_INTERVAL",
  "TOKEN_INTO", "TOKEN_JOIN", "TOKEN_KEY", "TOKEN_LAST", "TOKEN_LEFT",
  "TOKEN_LIMIT", "TOKEN_LONG", "TOKEN_MINUTE", "TOKEN_MONTH", "TOKEN_NULL",
  "TOKEN_NULLS", "TOKEN_OFF", "TOKEN_ON", "TOKEN_ORDER", "TOKEN_OUTER",
  "TOKEN_OVER", "TOKEN_PARTITION", "TOKEN_PARTITIONS", "TOKEN_PERCENT",
  "TOKEN_PRECEDING", "TOKEN_PRIMARY", "TOKEN_PRIORITY", "TOKEN_QUIT",
  "TOKEN_RANGE", "TOKEN_REAL", "TOKEN_REFERENCES", "TOKEN_RIGHT",
  "TOKEN_ROW", "TOKEN_ROW_DELIMITER", "TOKEN_ROWS", "TOKEN_SECOND",
  "TOKEN_SELECT", "TOKEN_SET", "TOKEN_SMA", "TOKEN_SMALLINT",
  "TOKEN_SUBSTRING", "TOKEN_TABLE", "TOKEN_THEN", "TOKEN_TIME",
  "TOKEN_TIMESTAMP", "TOKEN_TRUE", "TOKEN_TUPLESAMPLE", "TOKEN_UNBOUNDED",
  "TOKEN_UNIQUE", "TOKEN_UPDATE", "TOKEN_USING", "TOKEN_VALUES",
  "TOKEN_VARCHAR", "TOKEN_WHEN", "TOKEN_WHERE", "TOKEN_WINDOW",
  "TOKEN_WITH", "TOKEN_YEAR", "TOKEN_YEARMONTH", "TOKEN_EOF",
  "TOKEN_LEX_ERROR", "';'", "'\\n'", "'('", "')'", "','", "'%'", "$accept",
  "start", "sql_statement", "quit_statement", "alter_table_statement",
  "create_table_statement", "create_index_statement",
  "drop_table_statement", "column_def", "column_def_commalist",
  "data_type", "column_constraint_def", "column_constraint_def_list",
  "opt_column_constraint_def_list", "table_constraint_def",
  "table_constraint_def_commalist", "opt_table_constraint_def_commalist",
  "opt_column_list", "opt_block_properties", "opt_partition_clause",
  "partition_type", "key_value_list", "key_value", "key_string_value",
  "key_string_list", "key_integer_value", "index_type",
  "opt_index_properties", "insert_statement", "copy_from_statement",
  "opt_copy_from_params", "copy_from_params", "update_statement",
  "delete_statement", "assignment_list", "assignment_item",
  "select_statement", "opt_priority_clause", "with_clause", "with_list",
  "with_list_element", "select_query", "opt_all_distinct", "selection",
  "selection_item_commalist", "selection_item", "from_clause",
  "subquery_expression", "opt_sample_clause", "join_type",
  "joined_table_reference", "table_reference", "table_reference_signature",
  "table_reference_signature_primary", "joined_table_reference_commalist",
  "opt_group_by_clause", "opt_having_clause", "opt_order_by_clause",
  "opt_limit_clause", "opt_window_clause", "window_declaration_list",
  "window_declaration", "window_definition", "opt_window_partition",
  "opt_window_order", "opt_window_frame", "frame_mode", "frame_preceding",
  "frame_following", "order_commalist", "order_item",
  "opt_order_direction", "opt_nulls_first", "opt_where_clause",
  "where_clause", "or_expression", "and_expression", "not_expression",
  "predicate_expression_base", "add_expression", "multiply_expression",
  "unary_expression", "expression_base", "function_call",
  "extract_function", "substr_function", "case_expression",
  "simple_when_clause_list", "simple_when_clause",
  "searched_when_clause_list", "searched_when_clause", "opt_else_clause",
  "expression_list", "literal_value", "datetime_unit",
  "literal_value_commalist", "attribute_ref", "attribute_ref_list",
  "comparison_operation", "unary_operation", "add_operation",
  "multiply_operation", "name_commalist", "any_name", "boolean_value",
  "command", "command_argument_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    43,    45,    42,    47,   276,   277,    46,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,    59,
      10,    40,    41,    44,    37
};
# endif

#define YYPACT_NINF -234

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-234)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     168,  -234,  -234,   -58,   181,   -19,    40,   -37,    59,  -234,
     123,   181,   181,  -234,   208,   127,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,    -2,    95,   -46,   233,
     181,  -234,  -234,   113,   181,   181,   181,   181,   181,  -234,
    -234,   667,   139,   114,  -234,   236,   128,  -234,  -234,  -234,
     189,    95,   183,  -234,  -234,  -234,  -234,    60,   272,   196,
     138,   191,  -234,    80,  -234,  -234,   296,   299,  -234,  -234,
    -234,   757,   187,  -234,   242,  -234,  -234,   190,  -234,  -234,
     310,  -234,  -234,  -234,  -234,   205,  -234,  -234,   214,   277,
     850,   355,   290,   219,  -234,  -234,   182,    20,  -234,  -234,
     269,  -234,  -234,  -234,  -234,  -234,  1030,    -9,   181,   181,
     228,   181,   181,  -234,   366,    89,   174,   241,   181,   181,
     577,  -234,  -234,   235,   181,  -234,  -234,  -234,   577,    42,
      17,  -234,   370,  -234,   126,   126,  1120,   371,  -234,   243,
      30,  -234,    34,   191,  1120,  -234,  -234,   181,  1120,  -234,
    -234,  -234,  -234,  1120,    35,   299,  -234,   181,   359,   -56,
    -234,   368,  -234,   270,  -234,   110,  -234,   270,  -234,   181,
      -1,   181,   181,   247,  -234,   248,  -234,   141,  1158,   940,
     228,   487,   378,   381,  -234,  -234,   545,   375,  1210,   143,
       8,  1120,    58,  -234,  1120,  -234,   330,   254,  -234,  -234,
    -234,  -234,  -234,  -234,   327,  -234,    50,   255,  -234,  -234,
      16,   245,   153,  -234,   256,   245,   -14,   331,  -234,  -234,
      20,  -234,   306,  -234,  -234,   264,  1120,  -234,   268,   151,
     181,  -234,  1120,  -234,   181,  -234,  -234,   271,   325,   328,
     274,  -234,  -234,  -234,    31,   181,   291,    -1,   181,  -234,
      14,  -234,  -234,     2,   326,   577,   577,    62,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  1120,   279,  1120,    39,
    -234,   154,   289,  1120,    25,  -234,   360,   268,  -234,  -234,
    1120,   415,  -234,   133,   181,  -234,  -234,   332,  -234,   334,
     335,   340,    34,  -234,   418,   420,   245,   388,   358,   394,
     293,   342,  -234,   156,  -234,  1120,  -234,   268,  -234,   577,
     295,   298,   181,   437,     1,   158,  -234,   167,   416,   144,
    -234,   301,   311,  -234,   357,   309,  1210,  -234,   362,   181,
    -234,  -234,    14,  -234,  -234,   381,  -234,  -234,  -234,  1120,
     312,    76,   850,  -234,   268,   363,  -234,  -234,  1210,   313,
     268,  1120,  -234,    32,   -13,  -234,  -234,  -234,  -234,  -234,
      34,   153,   351,   356,  -234,  1120,   577,   364,  1120,  -234,
     419,   159,  -234,   268,     7,   181,   181,   169,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,   173,  -234,   181,  -234,  -234,
    -234,  -234,   315,    -1,   422,   365,  -234,   577,  -234,  -234,
     322,  -234,   237,   850,  -234,  1120,   171,  -234,  -234,  1210,
     268,  -234,   458,  -234,   372,  -234,  -234,   329,   378,   429,
     382,   329,  1120,  -234,  -234,  -234,   452,  -234,   175,   177,
    -234,   469,     1,  -234,   181,  -234,  -234,   337,   435,  -234,
       9,   181,  1120,   179,   268,  -234,   184,   341,   577,  1120,
     472,   349,   343,  -234,   178,    22,   376,  -234,  -234,  -234,
     192,  -234,  -234,  -234,  -234,    21,   181,   -16,  -234,   346,
     268,  -234,  -234,  -234,   378,   343,  -234,   181,  -234,   349,
    -234,  1120,  -234,  -234,   403,   396,   389,   400,   494,   181,
    -234,   181,  -234,  -234,   181,  -234,   207,  -234,  -234,   373,
    -234,   473,  -234,  -234,   115,  -234,  -234,  -234,  -234,    41,
     374,  -234,   209,  -234,   181,   383,  -234,  -234,   438,   395,
     439,  -234,   181,  -234,   211,   306,  -234,  -234,  -234,   215,
     411,   377,  -234,   505,  -234,  -234
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     6,   289,     0,     0,     0,     0,     0,     0,    18,
     114,     0,     0,     7,     0,     0,    15,     8,    10,    11,
      13,    14,     9,    17,    12,    16,     0,   107,     0,   287,
       0,   281,   282,     0,     0,     0,     0,     0,     0,   115,
     116,     0,     0,   109,   110,     0,   147,     1,     3,     2,
       0,   107,     0,   105,     5,     4,   288,     0,     0,     0,
       0,   188,    25,     0,   247,   244,     0,   273,   117,    40,
      29,     0,     0,    30,    31,    34,    36,     0,    37,    39,
       0,    41,   243,    35,    38,     0,    32,    33,     0,     0,
       0,     0,     0,   118,   119,   223,   123,   209,   211,   213,
     216,   219,   220,   221,   215,   214,     0,   259,     0,     0,
       0,     0,     0,   106,     0,     0,     0,    94,     0,     0,
       0,   101,   189,     0,     0,    91,   245,   246,     0,     0,
     239,   236,     0,    43,     0,   248,     0,     0,    44,     0,
       0,   250,     0,   188,     0,   274,   275,     0,     0,   122,
     277,   278,   276,     0,     0,     0,   212,     0,     0,   188,
     103,     0,   111,     0,   112,     0,   279,     0,   108,     0,
       0,     0,     0,     0,    93,    66,    27,     0,     0,     0,
       0,     0,   190,   192,   194,   196,     0,   214,     0,     0,
       0,     0,   239,   233,     0,   237,     0,     0,   253,   254,
     255,   252,   256,   251,     0,   249,     0,     0,   125,   222,
       0,     0,   149,   138,   124,   143,   126,   151,   120,   121,
     208,   210,   165,   217,   260,     0,     0,   224,   241,     0,
       0,   100,     0,   148,     0,    92,    19,     0,     0,     0,
       0,    20,    21,    22,     0,     0,     0,    64,     0,    42,
      56,   195,   203,     0,     0,     0,     0,     0,   263,   265,
     266,   267,   268,   264,   269,   271,     0,     0,     0,     0,
     257,     0,     0,     0,     0,   234,     0,   240,   232,    45,
       0,     0,    46,   129,     0,   139,   145,   135,   130,   131,
     133,     0,     0,   142,     0,     0,   141,     0,   153,     0,
       0,   167,   225,     0,   226,     0,   102,   104,   280,     0,
       0,     0,     0,     0,     0,     0,   261,     0,   259,     0,
      63,    65,    68,    28,     0,     0,     0,    47,     0,     0,
      49,    55,    57,    26,   202,   191,   193,   270,   272,     0,
       0,     0,     0,   204,   201,     0,   200,    90,     0,     0,
     238,     0,   231,     0,     0,   144,   146,   136,   132,   134,
       0,   150,     0,     0,   140,     0,     0,   155,     0,   218,
       0,   169,   227,   242,     0,     0,     0,     0,    96,   285,
     286,   284,   283,    97,    95,     0,    67,     0,    83,    84,
      85,    86,    87,     0,     0,    70,    48,     0,    51,    50,
       0,    54,     0,     0,   206,     0,     0,   199,   258,     0,
     235,   228,     0,   229,     0,   127,   128,   152,   154,     0,
     157,   166,     0,   172,   171,   164,     0,    61,     0,     0,
      58,     0,     0,   262,     0,    24,    62,     0,     0,    23,
       0,     0,     0,     0,   197,   205,     0,     0,     0,     0,
       0,   159,   168,   179,   182,     0,     0,    59,    98,    99,
       0,    74,    76,    77,    78,     0,     0,     0,    52,     0,
     198,   207,    89,   230,   137,   156,   158,     0,   113,   160,
     161,     0,   183,   184,   185,     0,     0,     0,     0,     0,
      88,     0,    82,    80,     0,    79,     0,    72,    73,     0,
      53,     0,   162,   180,     0,   181,   173,   175,   174,     0,
       0,    75,     0,    69,     0,     0,   186,   187,     0,     0,
       0,   170,     0,    81,     0,   165,   176,   178,   177,     0,
       0,     0,    60,     0,   163,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,   -94,  -234,
     338,   185,  -234,  -234,  -233,  -234,  -234,  -234,  -234,  -234,
    -234,    47,    36,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,   292,  -234,   474,  -234,  -234,
     414,    11,  -234,  -234,  -234,   386,  -234,   -97,  -234,  -234,
    -189,   166,  -180,   -10,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,    52,    10,  -234,  -234,  -234,  -234,  -234,  -234,    83,
      53,  -234,  -234,   -75,  -234,  -116,   278,   282,   361,   -35,
     393,   390,   436,  -137,  -234,  -234,  -234,  -234,   352,  -234,
     417,   354,  -207,  -185,   413,   140,  -119,  -234,  -234,  -234,
    -234,  -234,  -120,    -4,   120,  -234,  -234
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,   176,   177,
      91,   331,   332,   333,   241,   321,   322,   246,   395,   439,
     499,   460,   461,   462,   463,   464,   392,   435,    21,    22,
     174,   315,    23,    24,   159,   160,    25,    53,    26,    43,
      44,   139,    41,    92,    93,    94,   143,    95,   296,   291,
     212,   213,   285,   286,   214,   298,   367,   420,   451,   478,
     479,   480,   300,   301,   371,   425,   426,   488,   521,   452,
     453,   484,   505,   121,   122,   182,   183,   184,   185,   186,
      97,    98,    99,   100,   101,   102,   103,   192,   193,   130,
     131,   196,   229,   104,   204,   271,   105,   317,   268,   106,
     148,   153,   165,   107,   383,    28,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   187,    45,   270,   189,   215,    96,    42,    46,   187,
     255,    27,   190,   164,   320,   255,   255,   255,   157,   303,
      31,   283,    32,   294,   324,    31,    57,    32,   492,   485,
      59,    60,    61,    62,    63,   293,   129,    51,    31,    31,
      32,    32,   237,   150,   151,   211,   145,   146,   518,   345,
     493,   145,   146,   145,   146,   140,   412,   325,   497,    34,
     187,    30,   187,   145,   146,   253,   379,   326,   217,   238,
     486,   145,   146,   215,   125,   236,   120,   194,    50,   337,
     338,   339,    37,   252,   231,   405,   313,   230,   115,   519,
     498,    54,   149,   314,    55,   380,   381,   145,   146,    45,
      35,   206,   239,   361,   161,    46,   327,   166,   167,    96,
     295,    36,    10,   211,   175,   178,   364,   328,   194,   116,
     166,   281,   329,   228,   382,   240,   316,   158,   273,   413,
      10,   346,   158,   169,   170,   406,   187,   187,   216,   340,
     330,   398,    38,   219,   334,   351,   254,   487,   128,   427,
     223,   468,    39,   224,   323,   215,   274,   210,   417,   277,
     436,   421,   494,   408,   152,   178,   520,   242,   243,     1,
     343,     2,   209,   191,   411,   210,   222,   198,   235,   388,
      40,   516,   389,   390,    58,    31,    31,    32,    32,   191,
     187,   228,   377,   374,    10,   211,   443,   307,     3,   145,
     146,   517,   199,   145,   146,   287,   216,    46,    47,   123,
     482,    46,   288,   147,     4,     5,   200,   201,   171,   172,
     289,   124,     6,   215,   270,   287,   161,     7,   431,    52,
     308,   341,   288,   344,   483,   432,    56,  -129,   350,   202,
     289,   318,   290,   404,   178,   353,   442,   187,     8,    31,
     418,    32,   233,   234,   108,   428,   429,   109,   145,   146,
     391,   203,   290,   211,    48,   423,    49,   110,   433,   111,
     373,   424,   112,     9,   356,   355,   284,   117,   187,   119,
      46,   440,    10,   247,   248,   272,   234,   114,   216,   145,
     146,   118,    46,   304,   305,    11,   347,   348,   372,   305,
     384,   385,    12,   126,   402,    13,   127,   228,   166,   386,
     387,   430,   234,   445,   305,   135,   410,   456,   234,   457,
     234,   471,   305,   120,   133,   400,   472,   348,   132,   187,
     228,   134,   474,   228,   490,   491,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   136,   145,   146,   513,
     491,   523,   234,   530,   234,   137,   216,   532,   234,   138,
     141,   142,   144,    31,    64,    32,    65,   154,   228,   163,
     444,   166,   166,   168,   512,   173,   188,   197,   207,   232,
      66,    67,   225,   318,    10,   208,   255,   454,   244,   245,
     256,   278,    69,    70,   524,   269,   279,   282,   280,   292,
      71,    72,   529,   267,   297,   299,   302,   470,    73,    74,
     310,    75,   309,   311,   454,   312,   226,    76,   349,   319,
     342,   352,   354,    77,   360,   362,    78,   363,   365,   357,
     465,   358,   359,   366,   368,   369,   375,   469,   370,   376,
      79,    80,   378,   157,   393,   394,   454,   399,    81,   396,
     397,    82,   415,   403,   409,   407,   434,   416,   437,   422,
     419,   495,   465,   441,   438,   447,    83,   448,   209,   449,
     450,   455,   305,   501,   458,   467,    84,    85,   466,   476,
      86,    87,   477,   473,   489,   510,   481,   465,   500,    88,
     166,    31,    64,    32,    65,    89,   504,   179,   506,   507,
      90,   227,   508,   509,   515,   527,   526,   528,    66,    67,
     166,   533,   535,   496,   514,   522,   250,   401,   166,   534,
      69,    70,   306,   162,   525,   113,   414,   511,    71,    72,
     218,   502,   475,   335,   503,   531,    73,    74,   336,    75,
     251,   220,   156,   221,   275,    76,   276,   195,   205,   446,
     180,    77,   459,     0,    78,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,     0,   145,   146,    79,    80,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,    31,    64,    32,    65,     0,     0,   179,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,    66,    67,
       0,    10,     0,     0,    84,    85,     0,     0,    86,    87,
      69,    70,     0,     0,     0,     0,     0,    88,    71,    72,
       0,     0,   267,    89,     0,     0,    73,    74,   181,    75,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
     180,    77,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,    31,    64,    32,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,    66,    67,
      68,     0,     0,     0,    84,    85,     0,     0,    86,    87,
      69,    70,     0,     0,     0,     0,     0,    88,    71,    72,
       0,     0,     0,    89,     0,     0,    73,    74,   181,    75,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,    77,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,    31,    64,    32,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,    66,    67,
       0,     0,     0,     0,    84,    85,     0,     0,    86,    87,
      69,    70,     0,     0,     0,     0,     0,    88,    71,    72,
       0,     0,     0,    89,     0,     0,    73,    74,    90,    75,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,    77,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,    31,    64,    32,    65,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,    66,    67,     0,    84,    85,     0,     0,    86,    87,
       0,     0,     0,    69,    70,     0,     0,    88,   128,     0,
       0,    71,    72,    89,     0,     0,     0,     0,    90,    73,
      74,     0,    75,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,     0,    77,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,    31,    64,    32,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,    66,    67,     0,    10,     0,     0,    84,    85,     0,
       0,    86,    87,    69,    70,     0,     0,     0,     0,     0,
      88,    71,    72,     0,     0,     0,    89,     0,     0,    73,
      74,    90,    75,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,   180,    77,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,    31,    64,    32,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,    66,   155,     0,     0,     0,     0,    84,    85,     0,
       0,    86,    87,    69,    70,     0,     0,     0,     0,     0,
      88,    71,    72,     0,     0,     0,    89,     0,     0,    73,
      74,   181,    75,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,     0,    77,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,    31,    64,    32,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,    66,    67,     0,     0,     0,     0,    84,    85,     0,
       0,    86,    87,    69,    70,     0,     0,     0,     0,     0,
      88,    71,    72,     0,     0,     0,    89,     0,     0,    73,
      74,    90,    75,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,     0,    77,     0,     0,    78,     0,     0,
       0,    69,    70,     0,     0,     0,     0,     0,     0,     0,
      72,    79,    80,     0,     0,     0,     0,    73,    74,    81,
      75,     0,    82,     0,     0,    64,    76,    65,     0,     0,
       0,     0,     0,     0,     0,    78,     0,    83,     0,     0,
       0,    66,   155,     0,     0,     0,     0,    84,    85,    79,
     249,    86,    87,    69,    70,     0,     0,    81,     0,     0,
      88,     0,    72,     0,     0,     0,    89,     0,     0,    73,
      74,    90,    75,     0,     0,    83,     0,     0,    76,     0,
       0,     0,     0,     0,     0,    84,     0,    78,     0,    86,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    79,    80,     0,    89,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,    89
};

static const yytype_int16 yycheck[] =
{
       4,   120,    12,   188,   124,   142,    41,    11,    12,   128,
       8,     0,   128,   110,   247,     8,     8,     8,    27,   226,
       4,   210,     6,    37,    10,     4,    30,     6,     7,     7,
      34,    35,    36,    37,    38,   215,    71,    26,     4,     4,
       6,     6,    43,    23,    24,   142,    21,    22,     7,    10,
      29,    21,    22,    21,    22,    90,    69,    43,    74,    78,
     179,   119,   181,    21,    22,   181,    65,    53,   143,    70,
      48,    21,    22,   210,    63,   169,   132,    60,    80,    17,
      18,    19,   119,   180,   159,     9,    55,   143,    28,    48,
     106,   137,    96,    62,   140,    94,    95,    21,    22,   109,
     119,   136,   103,   292,   108,   109,    92,   111,   112,   144,
     124,    71,   114,   210,   118,   119,   296,   103,    60,    59,
     124,    71,   108,   158,   123,   126,   245,   141,   120,   142,
     114,    92,   141,    44,    45,   342,   255,   256,   142,    77,
     126,   326,    83,   147,   142,   120,   181,   125,   131,   142,
     154,   142,    29,   157,   248,   292,   191,   141,   365,   194,
     393,   368,   141,   348,   144,   169,   125,   171,   172,     1,
     267,     3,   142,   131,   142,   141,   141,    51,   167,    35,
      57,    66,    38,    39,    71,     4,     4,     6,     6,   131,
     309,   226,   312,   309,   114,   292,   403,   232,    30,    21,
      22,    86,    76,    21,    22,    72,   210,   211,     0,   129,
      32,   215,    79,    31,    46,    47,    90,    91,    44,    45,
      87,   141,    54,   360,   409,    72,   230,    59,    55,   134,
     234,   266,    79,   268,    56,    62,     3,    84,   273,   113,
      87,   245,   109,   340,   248,   280,     9,   366,    80,     4,
     366,     6,   142,   143,   115,   375,   376,   143,    21,    22,
     116,   135,   109,   360,   137,   106,   139,    31,   387,   141,
     305,   112,    83,   105,   284,   142,    31,     5,   397,   141,
     284,   397,   114,   142,   143,   142,   143,   104,   292,    21,
      22,    95,   296,   142,   143,   127,   142,   143,   142,   143,
     142,   143,   134,     7,   339,   137,     7,   342,   312,   142,
     143,   142,   143,   142,   143,     5,   351,   142,   143,   142,
     143,   142,   143,   132,    82,   329,   142,   143,   141,   448,
     365,   141,   448,   368,   142,   143,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   141,    21,    22,   142,
     143,   142,   143,   142,   143,   141,   360,   142,   143,    82,
       5,    71,   143,     4,     5,     6,     7,    98,   403,   141,
     405,   375,   376,     7,   494,   134,   141,     7,     7,    11,
      21,    22,    23,   387,   114,   142,     8,   422,   141,   141,
       9,    61,    33,    34,   514,    20,   142,   142,    71,   143,
      41,    42,   522,    77,    73,    99,   142,   442,    49,    50,
      85,    52,   141,    85,   449,   141,    57,    58,   129,   128,
     141,    61,     7,    64,    84,     7,    67,     7,    40,    97,
     434,    97,    97,    75,    40,   142,   141,   441,    96,   141,
      81,    82,     5,    27,   143,   134,   481,    85,    89,    92,
     141,    92,   101,   141,   141,    92,   141,   101,    36,    40,
      96,   465,   466,   141,    99,     7,   107,    95,   142,    40,
      88,    19,   143,   477,     5,    40,   117,   118,   141,     7,
     121,   122,   133,   142,   108,   489,   143,   491,   142,   130,
     494,     4,     5,     6,     7,   136,    93,    10,   102,   110,
     141,   142,   102,     9,    31,   110,    68,    68,    21,    22,
     514,   100,     7,   466,   141,   141,   178,   332,   522,   142,
      33,    34,   230,   109,   141,    51,   360,   491,    41,    42,
     144,   479,   449,   255,   481,   525,    49,    50,   256,    52,
     179,   148,   106,   153,   192,    58,   192,   130,   135,   409,
      63,    64,   432,    -1,    67,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    21,    22,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,   121,   122,
      33,    34,    -1,    -1,    -1,    -1,    -1,   130,    41,    42,
      -1,    -1,    77,   136,    -1,    -1,    49,    50,   141,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,   117,   118,    -1,    -1,   121,   122,
      33,    34,    -1,    -1,    -1,    -1,    -1,   130,    41,    42,
      -1,    -1,    -1,   136,    -1,    -1,    49,    50,   141,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    -1,   117,   118,    -1,    -1,   121,   122,
      33,    34,    -1,    -1,    -1,    -1,    -1,   130,    41,    42,
      -1,    -1,    -1,   136,    -1,    -1,    49,    50,   141,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,   117,   118,    -1,    -1,   121,   122,
      -1,    -1,    -1,    33,    34,    -1,    -1,   130,   131,    -1,
      -1,    41,    42,   136,    -1,    -1,    -1,    -1,   141,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    21,    22,    -1,   114,    -1,    -1,   117,   118,    -1,
      -1,   121,   122,    33,    34,    -1,    -1,    -1,    -1,    -1,
     130,    41,    42,    -1,    -1,    -1,   136,    -1,    -1,    49,
      50,   141,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,   117,   118,    -1,
      -1,   121,   122,    33,    34,    -1,    -1,    -1,    -1,    -1,
     130,    41,    42,    -1,    -1,    -1,   136,    -1,    -1,    49,
      50,   141,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,   117,   118,    -1,
      -1,   121,   122,    33,    34,    -1,    -1,    -1,    -1,    -1,
     130,    41,    42,    -1,    -1,    -1,   136,    -1,    -1,    49,
      50,   141,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    81,    82,    -1,    -1,    -1,    -1,    49,    50,    89,
      52,    -1,    92,    -1,    -1,     5,    58,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,   107,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,   117,   118,    81,
      82,   121,   122,    33,    34,    -1,    -1,    89,    -1,    -1,
     130,    -1,    42,    -1,    -1,    -1,   136,    -1,    -1,    49,
      50,   141,    52,    -1,    -1,   107,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    67,    -1,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
      -1,    81,    82,    -1,   136,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
      -1,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,   136
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    30,    46,    47,    54,    59,    80,   105,
     114,   127,   134,   137,   146,   147,   148,   149,   150,   151,
     152,   173,   174,   177,   178,   181,   183,   186,   250,   251,
     119,     4,     6,   248,    78,   119,    71,   119,    83,    29,
      57,   187,   248,   184,   185,   198,   248,     0,   137,   139,
      80,   186,   134,   182,   137,   140,     3,   248,    71,   248,
     248,   248,   248,   248,     5,     7,    21,    22,    23,    33,
      34,    41,    42,    49,    50,    52,    58,    64,    67,    81,
      82,    89,    92,   107,   117,   118,   121,   122,   130,   136,
     141,   155,   188,   189,   190,   192,   224,   225,   226,   227,
     228,   229,   230,   231,   238,   241,   244,   248,   115,   143,
      31,   141,    83,   182,   104,    28,    59,     5,    95,   141,
     132,   218,   219,   129,   141,   186,     7,     7,   131,   224,
     234,   235,   141,    82,   141,     5,   141,   141,    82,   186,
     224,     5,    71,   191,   143,    21,    22,    31,   245,   248,
      23,    24,   144,   246,    98,    22,   227,    27,   141,   179,
     180,   248,   185,   141,   192,   247,   248,   248,     7,    44,
      45,    44,    45,   134,   175,   248,   153,   154,   248,    10,
      63,   141,   220,   221,   222,   223,   224,   241,   141,   247,
     220,   131,   232,   233,    60,   235,   236,     7,    51,    76,
      90,    91,   113,   135,   239,   239,   224,     7,   142,   142,
     141,   192,   195,   196,   199,   228,   248,   218,   190,   248,
     225,   226,   141,   248,   248,    23,    57,   142,   224,   237,
     143,   218,    11,   142,   143,   186,   153,    43,    70,   103,
     126,   159,   248,   248,   141,   141,   162,   142,   143,    82,
     155,   223,   192,   220,   224,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    77,   243,    20,
     238,   240,   142,   120,   224,   233,   236,   224,    61,   142,
      71,    71,   142,   195,    31,   197,   198,    72,    79,    87,
     109,   194,   143,   197,    37,   124,   193,    73,   200,    99,
     207,   208,   142,   237,   142,   143,   180,   224,   248,   141,
      85,    85,   141,    55,    62,   176,   241,   242,   248,   128,
     159,   160,   161,   153,    10,    43,    53,    92,   103,   108,
     126,   156,   157,   158,   142,   221,   222,    17,    18,    19,
      77,   224,   141,   192,   224,    10,    92,   142,   143,   129,
     224,   120,    61,   224,     7,   142,   198,    97,    97,    97,
      84,   195,     7,     7,   197,    40,    75,   201,    40,   142,
      96,   209,   142,   224,   220,   141,   141,   247,     5,    65,
      94,    95,   123,   249,   142,   143,   142,   143,    35,    38,
      39,   116,   171,   143,   134,   163,    92,   141,   238,    85,
     248,   156,   224,   141,   192,     9,   237,    92,   238,   141,
     224,   142,    69,   142,   196,   101,   101,   237,   220,    96,
     202,   237,    40,   106,   112,   210,   211,   142,   247,   247,
     142,    55,    62,   241,   141,   172,   159,    36,    99,   164,
     220,   141,     9,   237,   224,   142,   240,     7,    95,    40,
      88,   203,   214,   215,   224,    19,   142,   142,     5,   249,
     166,   167,   168,   169,   170,   248,   141,    40,   142,   248,
     224,   142,   142,   142,   220,   214,     7,   133,   204,   205,
     206,   143,    32,    56,   216,     7,    48,   125,   212,   108,
     142,   143,     7,    29,   141,   248,   166,    74,   106,   165,
     142,   248,   206,   215,    93,   217,   102,   110,   102,     9,
     248,   167,   247,   142,   141,    31,    66,    86,     7,    48,
     125,   213,   141,   142,   247,   141,    68,   110,    68,   247,
     142,   207,   142,   100,   142,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   145,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   148,   149,
     149,   149,   149,   150,   151,   152,   153,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   158,   158,   159,   159,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   167,   167,   167,   168,
     168,   169,   170,   171,   171,   171,   171,   172,   172,   173,
     173,   173,   173,   174,   175,   175,   176,   176,   176,   176,
     177,   178,   179,   179,   180,   181,   181,   182,   182,   183,
     184,   184,   185,   186,   187,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   191,   192,   193,   193,   193,   194,
     194,   194,   194,   194,   194,   194,   194,   195,   195,   196,
     196,   196,   196,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   200,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   212,   213,   213,   213,   214,
     214,   215,   216,   216,   216,   217,   217,   217,   218,   218,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   228,   228,   228,   228,   229,   230,
     230,   231,   231,   232,   232,   233,   234,   234,   235,   236,
     236,   237,   237,   238,   238,   238,   238,   238,   238,   238,
     238,   239,   239,   239,   239,   239,   239,   240,   240,   241,
     241,   242,   242,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   244,   245,   245,   246,   246,   246,   247,
     247,   248,   248,   249,   249,   249,   249,   250,   251,   251
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     6,     6,     9,     9,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     4,     1,     2,     1,
       2,     2,     4,     5,     2,     1,     0,     1,     4,     5,
      10,     4,     3,     1,     0,     1,     0,     3,     0,     5,
       0,     8,     1,     1,     1,     3,     1,     1,     1,     2,
       2,     4,     2,     1,     1,     1,     1,     0,     3,    10,
       7,     4,     5,     5,     0,     4,     2,     2,     4,     4,
       5,     4,     3,     1,     3,     2,     3,     0,     3,     2,
       1,     3,     3,    10,     0,     1,     1,     1,     1,     1,
       3,     3,     2,     1,     2,     3,     0,     3,     3,     0,
       1,     1,     2,     1,     2,     1,     2,     6,     1,     2,
       3,     2,     2,     1,     3,     1,     2,     1,     4,     1,
       3,     0,     3,     0,     2,     0,     3,     0,     2,     0,
       1,     1,     2,     6,     3,     0,     3,     0,     3,     0,
       5,     1,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     3,     0,     1,     1,     0,     2,     2,     0,     1,
       2,     3,     1,     3,     1,     2,     1,     5,     6,     4,
       3,     3,     3,     2,     3,     5,     4,     6,     3,     1,
       3,     1,     2,     1,     1,     1,     1,     3,     5,     1,
       1,     1,     3,     1,     3,     4,     4,     5,     6,     6,
       8,     5,     4,     1,     2,     4,     1,     2,     4,     0,
       2,     1,     3,     1,     1,     2,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     0
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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
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

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, yyscanner, parsedStatement); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, yyscanner, parsedStatement);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , yyscanner, parsedStatement);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, yyscanner, parsedStatement); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* TOKEN_COMMAND  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1978 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOKEN_NAME  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1988 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOKEN_STRING_SINGLE_QUOTED  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1998 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOKEN_STRING_DOUBLE_QUOTED  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2008 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOKEN_UNSIGNED_NUMVAL  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2018 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 147: /* sql_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2028 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 148: /* quit_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).quit_statement_) != nullptr) {
    delete ((*yyvaluep).quit_statement_);
  }
}
#line 2038 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 149: /* alter_table_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2048 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 150: /* create_table_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).create_table_statement_) != nullptr) {
    delete ((*yyvaluep).create_table_statement_);
  }
}
#line 2058 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 151: /* create_index_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2068 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 152: /* drop_table_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).drop_table_statement_) != nullptr) {
    delete ((*yyvaluep).drop_table_statement_);
  }
}
#line 2078 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 153: /* column_def  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_);
  }
}
#line 2088 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 154: /* column_def_commalist  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_list_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_list_);
  }
}
#line 2098 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 155: /* data_type  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).data_type_) != nullptr) {
    delete ((*yyvaluep).data_type_);
  }
}
#line 2108 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 156: /* column_constraint_def  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_) != nullptr) {
    delete ((*yyvaluep).column_constraint_);
  }
}
#line 2118 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 157: /* column_constraint_def_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2128 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 158: /* opt_column_constraint_def_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2138 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 162: /* opt_column_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2148 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 163: /* opt_block_properties  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_properties_) != nullptr) {
    delete ((*yyvaluep).block_properties_);
  }
}
#line 2158 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 164: /* opt_partition_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).partition_clause_) != nullptr) {
    delete ((*yyvaluep).partition_clause_);
  }
}
#line 2168 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 165: /* partition_type  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2178 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 166: /* key_value_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2188 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 167: /* key_value  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_) != nullptr) {
    delete ((*yyvaluep).key_value_);
  }
}
#line 2198 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 168: /* key_string_value  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_value_) != nullptr) {
    delete ((*yyvaluep).key_string_value_);
  }
}
#line 2208 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 169: /* key_string_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_list_) != nullptr) {
    delete ((*yyvaluep).key_string_list_);
  }
}
#line 2218 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 170: /* key_integer_value  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_integer_value_) != nullptr) {
    delete ((*yyvaluep).key_integer_value_);
  }
}
#line 2228 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 171: /* index_type  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2238 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 172: /* opt_index_properties  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2248 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 173: /* insert_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).insert_statement_) != nullptr) {
    delete ((*yyvaluep).insert_statement_);
  }
}
#line 2258 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 174: /* copy_from_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_statement_) != nullptr) {
    delete ((*yyvaluep).copy_from_statement_);
  }
}
#line 2268 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 175: /* opt_copy_from_params  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2278 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 176: /* copy_from_params  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2288 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_statement_) != nullptr) {
    delete ((*yyvaluep).update_statement_);
  }
}
#line 2298 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 178: /* delete_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).delete_statement_) != nullptr) {
    delete ((*yyvaluep).delete_statement_);
  }
}
#line 2308 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 179: /* assignment_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_list_) != nullptr) {
    delete ((*yyvaluep).assignment_list_);
  }
}
#line 2318 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 180: /* assignment_item  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_) != nullptr) {
    delete ((*yyvaluep).assignment_);
  }
}
#line 2328 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 181: /* select_statement  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_statement_) != nullptr) {
    delete ((*yyvaluep).select_statement_);
  }
}
#line 2338 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_priority_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_priority_clause_) != nullptr) {
    delete ((*yyvaluep).opt_priority_clause_);
  }
}
#line 2348 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 183: /* with_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2358 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 184: /* with_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2368 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 185: /* with_list_element  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_element_) != nullptr) {
    delete ((*yyvaluep).with_list_element_);
  }
}
#line 2378 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 186: /* select_query  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_query_) != nullptr) {
    delete ((*yyvaluep).select_query_);
  }
}
#line 2388 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 188: /* selection  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_) != nullptr) {
    delete ((*yyvaluep).selection_);
  }
}
#line 2398 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 189: /* selection_item_commalist  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_list_) != nullptr) {
    delete ((*yyvaluep).selection_list_);
  }
}
#line 2408 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 190: /* selection_item  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_item_) != nullptr) {
    delete ((*yyvaluep).selection_item_);
  }
}
#line 2418 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 191: /* from_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2428 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 192: /* subquery_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).subquery_expression_) != nullptr) {
    delete ((*yyvaluep).subquery_expression_);
  }
}
#line 2438 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_sample_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_sample_clause_) != nullptr) {
    delete ((*yyvaluep).opt_sample_clause_);
  }
}
#line 2448 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 194: /* join_type  */
#line 618 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2454 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 195: /* joined_table_reference  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2464 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 196: /* table_reference  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2474 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 197: /* table_reference_signature  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2484 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 198: /* table_reference_signature_primary  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2494 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 199: /* joined_table_reference_commalist  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2504 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_group_by_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_group_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_group_by_clause_);
  }
}
#line 2514 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_having_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_having_clause_) != nullptr) {
    delete ((*yyvaluep).opt_having_clause_);
  }
}
#line 2524 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_order_by_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_order_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_order_by_clause_);
  }
}
#line 2534 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_limit_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_limit_clause_) != nullptr) {
    delete ((*yyvaluep).opt_limit_clause_);
  }
}
#line 2544 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_window_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_window_clause_) != nullptr) {
    delete ((*yyvaluep).opt_window_clause_);
  }
}
#line 2554 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 205: /* window_declaration_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_window_clause_) != nullptr) {
    delete ((*yyvaluep).opt_window_clause_);
  }
}
#line 2564 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 206: /* window_declaration  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_definition_) != nullptr) {
    delete ((*yyvaluep).window_definition_);
  }
}
#line 2574 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 207: /* window_definition  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_definition_) != nullptr) {
    delete ((*yyvaluep).window_definition_);
  }
}
#line 2584 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_window_partition  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_partition_by_list_) != nullptr) {
    delete ((*yyvaluep).window_partition_by_list_);
  }
}
#line 2594 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_window_order  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_order_by_list_) != nullptr) {
    delete ((*yyvaluep).window_order_by_list_);
  }
}
#line 2604 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_window_frame  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_frame_info_) != nullptr) {
    delete ((*yyvaluep).window_frame_info_);
  }
}
#line 2614 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 211: /* frame_mode  */
#line 614 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2620 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 212: /* frame_preceding  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2630 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 213: /* frame_following  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2640 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 214: /* order_commalist  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_commalist_) != nullptr) {
    delete ((*yyvaluep).order_commalist_);
  }
}
#line 2650 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 215: /* order_item  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_item_) != nullptr) {
    delete ((*yyvaluep).order_item_);
  }
}
#line 2660 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_order_direction  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2670 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 217: /* opt_nulls_first  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2680 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_where_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2690 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 219: /* where_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2700 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 220: /* or_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2710 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 221: /* and_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2720 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 222: /* not_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2730 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 223: /* predicate_expression_base  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2740 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 224: /* add_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2750 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 225: /* multiply_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2760 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 226: /* unary_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2770 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 227: /* expression_base  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2780 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 228: /* function_call  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).function_call_) != nullptr) {
    delete ((*yyvaluep).function_call_);
  }
}
#line 2790 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 229: /* extract_function  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2800 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 230: /* substr_function  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2810 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 231: /* case_expression  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2820 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 232: /* simple_when_clause_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_list_);
  }
}
#line 2830 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 233: /* simple_when_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_);
  }
}
#line 2840 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 234: /* searched_when_clause_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_list_);
  }
}
#line 2850 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 235: /* searched_when_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_);
  }
}
#line 2860 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 236: /* opt_else_clause  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2870 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 237: /* expression_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_list_) != nullptr) {
    delete ((*yyvaluep).expression_list_);
  }
}
#line 2880 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 238: /* literal_value  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_) != nullptr) {
    delete ((*yyvaluep).literal_value_);
  }
}
#line 2890 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 239: /* datetime_unit  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2900 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 240: /* literal_value_commalist  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_);
  }
}
#line 2910 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 241: /* attribute_ref  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_) != nullptr) {
    delete ((*yyvaluep).attribute_);
  }
}
#line 2920 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 242: /* attribute_ref_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2930 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 243: /* comparison_operation  */
#line 615 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2936 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 244: /* unary_operation  */
#line 616 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2942 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 245: /* add_operation  */
#line 617 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2948 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 246: /* multiply_operation  */
#line 617 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2954 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 247: /* name_commalist  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 2964 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 248: /* any_name  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2974 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 249: /* boolean_value  */
#line 614 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2980 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 250: /* command  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_) != nullptr) {
    delete ((*yyvaluep).command_);
  }
}
#line 2990 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 251: /* command_argument_list  */
#line 620 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_argument_list_) != nullptr) {
    delete ((*yyvaluep).command_argument_list_);
  }
}
#line 3000 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
/* The lookahead symbol.  */
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
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, yyscanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 629 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3297 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 633 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3306 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 637 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3315 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 641 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3324 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 645 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    YYABORT;
  }
#line 3332 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 648 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // Regular yyparse() return codes are non-negative, so use a negative one here.
    return -1;
  }
#line 3341 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 655 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3349 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 658 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].copy_from_statement_);
  }
#line 3357 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 661 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].create_table_statement_);
  }
#line 3365 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 664 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3373 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 667 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].delete_statement_);
  }
#line 3381 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 670 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].drop_table_statement_);
  }
#line 3389 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 673 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].insert_statement_);
  }
#line 3397 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 676 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].quit_statement_);
  }
#line 3405 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 679 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].select_statement_);
  }
#line 3413 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 682 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].update_statement_);
  }
#line 3421 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 688 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.quit_statement_) = new quickstep::ParseStatementQuit((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3429 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 694 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].attribute_definition_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3441 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 701 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3452 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 707 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3464 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 714 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3476 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 723 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.create_table_statement_) = new quickstep::ParseStatementCreateTable((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].attribute_definition_list_), (yyvsp[-1].block_properties_), (yyvsp[0].partition_clause_));
  }
#line 3484 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 728 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].key_value_list_)) {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_), (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].key_value_list_));
    } else {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_));
    }
  }
#line 3496 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 737 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.drop_table_statement_) = new quickstep::ParseStatementDropTable((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_));
  }
#line 3504 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 742 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_) = new quickstep::ParseAttributeDefinition((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].data_type_), (yyvsp[0].column_constraint_list_));
  }
#line 3512 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 747 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = new quickstep::PtrList<quickstep::ParseAttributeDefinition>();
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3521 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 751 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = (yyvsp[-2].attribute_definition_list_);
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3530 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 757 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "BIT data type");
    YYERROR;
  }
#line 3540 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 762 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDate));
  }
#line 3548 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 765 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3556 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 768 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "TIME data type");
    YYERROR;
  }
#line 3566 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 773 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3574 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 776 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3582 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 779 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3590 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 782 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3598 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 785 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kFloat));
  }
#line 3606 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 788 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3614 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 791 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3622 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 794 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3630 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 797 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3638 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 800 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This pattern exhibits a shift/reduce conflict with the
     * TOKEN_INTERVAL case in 'literal_value'. Bison prefers to shift rather
     * than reduce, so the case in 'literal_value' has precedence over this.
     **/
    (yyval.data_type_) = nullptr;
    quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr,
        "INTERVAL is ambiguous as a column type. Specify either DATETIME INTERVAL "
        "or YEARMONTH INTERVAL");
    YYERROR;
  }
#line 3655 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 812 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetimeInterval));
  }
#line 3663 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 815 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kYearMonthInterval));
  }
#line 3671 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 818 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for CHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Length for CHAR type must be at least 1");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3694 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 836 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for VARCHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() < 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Negative length supplied for VARCHAR type");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kVarChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3717 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 856 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNull((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3725 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 859 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNotNull((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3733 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 862 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Column Constraints (UNIQUE)");
    YYERROR;
  }
#line 3743 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 867 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3753 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 872 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[0].literal_value_);
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (DEFAULT)");
    YYERROR;
  }
#line 3764 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 878 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Column Constraints (CHECK)");
    YYERROR;
  }
#line 3775 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 884 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_value_);
    NotSupported(&(yylsp[-4]), yyscanner, "Foreign Keys");
    YYERROR;
  }
#line 3787 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 893 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[-1].column_constraint_list_);
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3796 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 897 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = new quickstep::PtrList<quickstep::ParseColumnConstraint>();
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3805 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 903 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = nullptr;
  }
#line 3813 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 906 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[0].column_constraint_list_);
  }
#line 3821 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 911 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (UNIQUE)");
    YYERROR;
  }
#line 3831 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 916 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-4]), yyscanner, "Table Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3841 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 921 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-6].string_list_);
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-9]), yyscanner, "Table Constraints (FOREIGN KEY)");
    YYERROR;
  }
#line 3853 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 928 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (CHECK)");
    YYERROR;
  }
#line 3863 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 935 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[-2]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3872 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 939 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3881 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 945 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 3889 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 948 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = $1; */
  }
#line 3897 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 953 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = nullptr;
  }
#line 3905 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 956 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = (yyvsp[-1].attribute_list_);
  }
#line 3913 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 961 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = nullptr;
  }
#line 3921 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 964 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = new quickstep::ParseBlockProperties((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].key_value_list_));
  }
#line 3929 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 969 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.partition_clause_) = nullptr;
  }
#line 3937 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 972 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.partition_clause_) = NULL;
      quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARTITIONS must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0 || (yyvsp[0].numeric_literal_value_)->long_value() > 64) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.partition_clause_) = NULL;
        quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARITIONS must be between 1 and 64");
        YYERROR;
      } else {
        (yyval.partition_clause_) = new quickstep::ParsePartitionClause((yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].string_value_), (yyvsp[-3].string_list_), (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 3959 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 991 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::PartitionSchemeHeader::PartitionType::kHash));
  }
#line 3968 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 995 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::PartitionSchemeHeader::PartitionType::kRange));
  }
#line 3977 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 1001 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = new quickstep::PtrList<quickstep::ParseKeyValue>();
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3986 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 1005 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = (yyvsp[-2].key_value_list_);
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3995 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 1011 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_value_);
  }
#line 4003 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 1014 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_list_);
  }
#line 4011 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 1017 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_integer_value_);
  }
#line 4019 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 1022 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 4027 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 1025 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // This is a special case to handle the COMPRESS ALL option of the BLOCK PROPERTIES.
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_),
        new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "ALL"));
  }
#line 4037 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 1032 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_string_list_) = new quickstep::ParseKeyStringList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4045 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 1037 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.key_integer_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Value must be an integer");
      YYERROR;
    }
    (yyval.key_integer_value_) = new quickstep::ParseKeyIntegerValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].numeric_literal_value_));
  }
#line 4059 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1048 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // Defaults to BitWeavingV, but IndexProperties can change this to H.
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBitWeavingV));
  }
#line 4069 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1053 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBloomFilter));
  }
#line 4078 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1057 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kCSBTree));
  }
#line 4087 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1061 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kSMA));
  }
#line 4096 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1067 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 4104 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1070 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 4112 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1076 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-7].string_value_);
    delete (yyvsp[-5].string_list_);
    delete (yyvsp[-1].literal_value_list_);
    (yyval.insert_statement_) = nullptr;
    NotSupported(&(yylsp[-6]), yyscanner, "list of column names in INSERT statement");
    YYERROR;
  }
#line 4125 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1084 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertTuple((yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-4].string_value_), (yyvsp[-1].literal_value_list_));
  }
#line 4133 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1087 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-3]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), nullptr);
  }
#line 4141 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1090 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-4]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), (yyvsp[-4].with_list_));
  }
#line 4149 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1096 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_statement_) = new quickstep::ParseStatementCopyFrom((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].copy_from_params_));
  }
#line 4157 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1101 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = nullptr;
  }
#line 4165 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1104 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-1].copy_from_params_);
  }
#line 4173 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1109 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 4182 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1113 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 4191 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1117 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 4200 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1121 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 4209 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1127 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.update_statement_) = new quickstep::ParseStatementUpdate((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].assignment_list_), (yyvsp[0].predicate_));
  }
#line 4217 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1132 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.delete_statement_) = new quickstep::ParseStatementDelete((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].predicate_));
  }
#line 4225 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1137 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = (yyvsp[-2].assignment_list_);
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4234 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1141 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = new quickstep::PtrList<quickstep::ParseAssignment>();
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4243 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1147 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_) = new quickstep::ParseAssignment((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].expression_));
  }
#line 4251 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1153 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].select_query_), nullptr, (yyvsp[0].opt_priority_clause_));
  }
#line 4259 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1156 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].select_query_), (yyvsp[-2].with_list_), (yyvsp[0].opt_priority_clause_));
  }
#line 4267 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1161 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_priority_clause_) = nullptr;
  }
#line 4275 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1164 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_priority_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "PRIORITY value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_priority_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "PRIORITY value must be positive");
        YYERROR;
      } else {
        (yyval.opt_priority_clause_) = new quickstep::ParsePriority((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4297 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1183 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[0].with_list_);
  }
#line 4305 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1188 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = new quickstep::PtrVector<quickstep::ParseSubqueryTableReference>();
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4314 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1192 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[-2].with_list_);
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4323 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1198 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_element_) = new quickstep::ParseSubqueryTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].subquery_expression_));
    (yyval.with_list_element_)->set_table_reference_signature((yyvsp[-2].table_reference_signature_));
  }
#line 4332 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1205 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_query_) = new quickstep::ParseSelect((yylsp[-9]).first_line, (yylsp[-9]).first_column, (yyvsp[-7].selection_), (yyvsp[-6].table_reference_list_), (yyvsp[-5].predicate_), (yyvsp[-4].opt_group_by_clause_), (yyvsp[-3].opt_having_clause_), (yyvsp[-2].opt_order_by_clause_), (yyvsp[-1].opt_limit_clause_), (yyvsp[0].opt_window_clause_));
  }
#line 4340 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1210 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 4348 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1213 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "ALL in selection");
    YYERROR;
  }
#line 4357 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1217 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "DISTINCT in selection");
    YYERROR;
  }
#line 4366 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1223 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = new quickstep::ParseSelectionStar((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4374 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1226 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = (yyvsp[0].selection_list_);
  }
#line 4382 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1231 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = new quickstep::ParseSelectionList((yylsp[0]).first_line, (yylsp[0]).first_column);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4391 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1235 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = (yyvsp[-2].selection_list_);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4400 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1241 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[0].string_value_));
  }
#line 4408 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1244 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].expression_), (yyvsp[0].string_value_));
  }
#line 4416 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1247 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].expression_));
  }
#line 4424 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1252 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[0].table_reference_list_);
  }
#line 4432 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1257 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.subquery_expression_) = new quickstep::ParseSubqueryExpression((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].select_query_));
  }
#line 4440 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1262 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = NULL;
  }
#line 4448 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1265 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, true, (yyvsp[-1].numeric_literal_value_));
  }
#line 4456 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1268 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-1].numeric_literal_value_));
  }
#line 4464 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1273 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4472 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1276 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4480 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1279 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4488 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1282 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4496 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1285 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4504 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1288 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4512 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1291 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4520 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1294 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4528 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1299 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseJoinedTableReference((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].join_type_), (yyvsp[-5].table_reference_), (yyvsp[-2].table_reference_), (yyvsp[0].predicate_));
  }
#line 4536 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1302 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = (yyvsp[0].table_reference_);
  }
#line 4544 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1307 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSubqueryTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].subquery_expression_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4553 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1311 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].opt_sample_clause_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4562 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1315 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].opt_sample_clause_));
  }
#line 4570 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1318 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].function_call_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4579 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1322 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].function_call_));
  }
#line 4587 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1325 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = (yyvsp[-1].table_reference_);
  }
#line 4595 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1330 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4603 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1333 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4611 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1338 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 4619 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1341 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4627 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1346 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = new quickstep::PtrList<quickstep::ParseTableReference>();
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4636 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1350 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[-2].table_reference_list_);
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4645 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1356 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = nullptr;
  }
#line 4653 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1359 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = new quickstep::ParseGroupBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].expression_list_));
  }
#line 4661 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1364 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = nullptr;
  }
#line 4669 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1367 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = new quickstep::ParseHaving((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4677 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1372 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = nullptr;
  }
#line 4685 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1375 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = new quickstep::ParseOrderBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].order_commalist_));
  }
#line 4693 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1380 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_limit_clause_) = nullptr;
  }
#line 4701 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1383 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_limit_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_limit_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be positive");
        YYERROR;
      } else {
        (yyval.opt_limit_clause_) = new quickstep::ParseLimit((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4723 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1402 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_window_clause_) = nullptr;
  }
#line 4731 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1405 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_window_clause_) = (yyvsp[0].opt_window_clause_);
  }
#line 4739 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1410 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_window_clause_) = new quickstep::PtrList<quickstep::ParseWindow>();
    (yyval.opt_window_clause_)->push_back((yyvsp[0].window_definition_));
  }
#line 4748 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1414 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_window_clause_) = (yyvsp[-1].opt_window_clause_);
    (yyval.opt_window_clause_)->push_back((yyvsp[0].window_definition_));
  }
#line 4757 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1420 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_definition_) = (yyvsp[-1].window_definition_);
    (yyval.window_definition_)->setName((yyvsp[-4].string_value_));
  }
#line 4766 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1426 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_definition_) = new quickstep::ParseWindow((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].window_partition_by_list_), (yyvsp[-1].window_order_by_list_), (yyvsp[0].window_frame_info_));
  }
#line 4774 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1431 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_partition_by_list_) = nullptr;
  }
#line 4782 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1434 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_partition_by_list_) = (yyvsp[0].expression_list_);
  }
#line 4790 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1439 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_order_by_list_) = nullptr;
  }
#line 4798 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1442 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_order_by_list_) = (yyvsp[0].order_commalist_);
  }
#line 4806 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1447 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_frame_info_) = nullptr;
  }
#line 4814 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1450 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.window_frame_info_) = new quickstep::ParseFrameInfo((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].boolean_value_), (yyvsp[-2].numeric_literal_value_)->long_value(), (yyvsp[0].numeric_literal_value_)->long_value());
  }
#line 4822 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1455 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 4830 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1458 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 4838 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1464 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "-1");
  }
#line 4846 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1467 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "0");
  }
#line 4854 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1473 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "-1");
  }
#line 4862 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1476 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "0");
  }
#line 4870 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1481 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = new quickstep::PtrList<quickstep::ParseOrderByItem>();
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4879 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1485 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = (yyvsp[-2].order_commalist_);
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4888 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1491 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_item_) = new quickstep::ParseOrderByItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[-1].order_direction_), (yyvsp[0].order_direction_));
    delete (yyvsp[-1].order_direction_);
    delete (yyvsp[0].order_direction_);
  }
#line 4898 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1498 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4906 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1501 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4914 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1504 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4922 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1509 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4930 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1512 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4938 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1515 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4946 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1521 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = nullptr;
  }
#line 4954 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1524 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4962 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1529 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4970 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1534 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kDisjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateDisjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 4984 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1543 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4992 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1548 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kConjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateConjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 5006 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1557 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5014 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1562 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 5022 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1565 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5030 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1570 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5038 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1573 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line, (yylsp[-4]).first_column,
        new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_)));
  }
#line 5048 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1578 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 5059 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1584 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 5070 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1590 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateComparison((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].comparison_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5078 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1593 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[-1].predicate_);
  }
#line 5086 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1596 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateExists((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].subquery_expression_));
  }
#line 5094 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1599 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-2].expression_), (yyvsp[0].subquery_expression_));
  }
#line 5102 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1602 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-1].expression_list_));
  }
#line 5110 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1605 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-2]).first_line,
        (yylsp[-2]).first_column,
        new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-3].expression_), (yyvsp[0].subquery_expression_)));
  }
#line 5121 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1611 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line,
        (yylsp[-4]).first_column,
        new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-1].expression_list_)));
  }
#line 5132 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1620 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5140 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1623 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5148 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1628 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5156 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1631 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5164 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1636 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseUnaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].unary_operation_), (yyvsp[0].expression_));
  }
#line 5172 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1639 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5180 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1644 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].attribute_);
  }
#line 5188 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1647 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_));
  }
#line 5196 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1650 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].function_call_);
  }
#line 5204 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1653 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyvsp[-2].function_call_)->setWindowName((yyvsp[0].string_value_));
    (yyval.expression_) = (yyvsp[-2].function_call_);
  }
#line 5213 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1657 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyvsp[-4].function_call_)->setWindow((yyvsp[-1].window_definition_));
    (yyval.expression_) = (yyvsp[-4].function_call_);
  }
#line 5222 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1661 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5230 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1664 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5238 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1667 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5246 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1670 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[-1].expression_);
  }
#line 5254 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1673 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].subquery_expression_);
  }
#line 5262 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1678 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-2].string_value_), new quickstep::PtrList<quickstep::ParseExpression>());
  }
#line 5271 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1682 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), new quickstep::ParseStar((yylsp[-1]).first_line, (yylsp[-1]).first_column));
  }
#line 5280 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1686 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-3]).first_line, (yylsp[-3]).first_column, false, (yyvsp[-3].string_value_), (yyvsp[-1].expression_list_));
  }
#line 5288 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1689 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-4]).first_line, (yylsp[-4]).first_column, true, (yyvsp[-4].string_value_), (yyvsp[-1].expression_list_));
  }
#line 5296 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1694 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseExtractFunction((yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].expression_));
  }
#line 5304 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1699 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSubstringFunction(
        (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].expression_), (yyvsp[-1].numeric_literal_value_)->long_value());
  }
#line 5313 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1703 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSubstringFunction(
        (yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].expression_), (yyvsp[-3].numeric_literal_value_)->long_value(), (yyvsp[-1].numeric_literal_value_)->long_value());
  }
#line 5322 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1709 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSimpleCaseExpression((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].expression_), (yyvsp[-2].simple_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 5330 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1712 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSearchedCaseExpression((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].searched_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 5338 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1717 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSimpleWhenClause>;
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 5347 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1721 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_list_) = (yyvsp[-1].simple_when_clause_list_);
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 5356 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1727 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_) = new quickstep::ParseSimpleWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5364 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1732 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSearchedWhenClause>;
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 5373 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1736 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_list_) = (yyvsp[-1].searched_when_clause_list_);
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 5382 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1742 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_) = new quickstep::ParseSearchedWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].predicate_), (yyvsp[0].expression_));
  }
#line 5390 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1747 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = NULL;
  }
#line 5398 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1750 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5406 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1755 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = new quickstep::PtrList<quickstep::ParseExpression>();
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 5415 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1759 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = (yyvsp[-2].expression_list_);
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 5424 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1765 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::NullParseLiteralValue((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 5432 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1768 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5440 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1771 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5448 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1774 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * minus character as a 'unary_operation' followed by a numeric literal.
     * Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the parser will prefer to interpret the ambiguous
     * pattern as a negative number literal rather than a unary minus operation
     * applied to a non-negative number literal).
     **/
    (yyvsp[0].numeric_literal_value_)->prependMinus();
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5465 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1786 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_),
                                                nullptr);  // No explicit type.
  }
#line 5474 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1790 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * plain TOKEN_INTERVAL case in 'data_type' reduced and used in the case
     * below. Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the special
     * StringParseLiteralValue::ParseAmbiguousInterval() method will be used to
     * parse the string as either one of the interval types, rather than an
     * error being emitted because of an ambiguous type).
     **/
    quickstep::StringParseLiteralValue *parse_value;
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval((yyvsp[0].string_value_), &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5498 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1809 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::StringParseLiteralValue *parse_value;
    const std::string &datetime_type_value = (yyvsp[0].string_value_)->value();
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval(
        &((yyvsp[-1].string_value_)->append((" " + datetime_type_value).c_str(), datetime_type_value.length() + 1)),
        &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5516 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1822 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::StringParseLiteralValue *parse_value
        = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_), &((yyvsp[-1].data_type_)->getType()));
    delete (yyvsp[-1].data_type_);
    if (!parse_value->tryExplicitTypeParse()) {
      delete parse_value;
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    } else {
      (yyval.literal_value_) = parse_value;
    }
  }
#line 5534 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1837 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("YEAR"));
  }
#line 5542 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1840 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("MONTH"));
  }
#line 5550 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1843 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("DAY"));
  }
#line 5558 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1846 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("HOUR"));
  }
#line 5566 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1849 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("MINUTE"));
  }
#line 5574 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1852 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("SECOND"));
  }
#line 5582 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1857 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = new quickstep::PtrList<quickstep::ParseScalarLiteral>();
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5591 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1861 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = (yyvsp[-2].literal_value_list_);
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5600 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1867 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 5608 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1870 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_), (yyvsp[-2].string_value_));
  }
#line 5616 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1875 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = new quickstep::PtrList<quickstep::ParseAttribute>();
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5625 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1879 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = (yyvsp[-2].attribute_list_);
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5634 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1886 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kEqual);
  }
#line 5642 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1889 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotEqual);
  }
#line 5650 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1892 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLess);
  }
#line 5658 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1895 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLessOrEqual);
  }
#line 5666 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1898 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreater);
  }
#line 5674 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1901 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreaterOrEqual);
  }
#line 5682 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1904 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLike);
  }
#line 5690 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1907 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotLike);
  }
#line 5698 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1910 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kRegexMatch);
  }
#line 5706 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1913 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotRegexMatch);
  }
#line 5714 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1918 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * '-' TOKEN_UNSIGNED_NUMVAL case in 'literal_value'. Because Bison prefers
     * to shift rather than reduce, the case in 'literal_value' has precedence
     * over this one.
     **/
    (yyval.unary_operation_) = &quickstep::UnaryOperationFactory::GetUnaryOperation(quickstep::UnaryOperationID::kNegate);
  }
#line 5728 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1929 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kAdd);
  }
#line 5736 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1932 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kSubtract);
  }
#line 5744 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1937 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kModulo);
  }
#line 5752 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1940 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kMultiply);
  }
#line 5760 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1943 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kDivide);
  }
#line 5768 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1949 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = new quickstep::PtrList<quickstep::ParseString>();
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5777 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1953 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = (yyvsp[-2].string_list_);
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5786 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1959 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5794 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1962 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].string_value_)->value().empty()) {
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Zero-length identifier");
    }
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5805 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1970 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5813 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1973 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5821 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1976 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5829 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1979 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5837 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1985 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.command_) = new quickstep::ParseCommand((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].command_argument_list_));
  }
#line 5845 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1990 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::PtrVector<quickstep::ParseString> *argument_list = (yyvsp[-1].command_argument_list_);
    argument_list->push_back((yyvsp[0].string_value_));
    (yyval.command_argument_list_) = argument_list;
  }
#line 5855 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1995 "../SqlParser.ypp" /* yacc.c:1646  */
    { /* Epsilon, an empy match. */
    (yyval.command_argument_list_) = new quickstep::PtrVector<quickstep::ParseString>();
  }
#line 5863 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;


#line 5867 "SqlParser_gen.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error"));
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
        yyerror (&yylloc, yyscanner, parsedStatement, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, yyscanner, parsedStatement);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, yyscanner, parsedStatement, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, yyscanner, parsedStatement);
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
#line 1999 "../SqlParser.ypp" /* yacc.c:1906  */


void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature) {
  std::string msg;
  msg.append(feature);
  msg.append(" is not supported yet");

  quickstep_yyerror(location, yyscanner, nullptr, msg.c_str());
}

int quickstep_yyget_line_number(const YYLTYPE *yyloc) {
  return yyloc->first_line;
}

int quickstep_yyget_column_number(const YYLTYPE *yyloc) {
  return yyloc->first_column;
}
