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




/* First part of user prologue.  */
#line 1 "parser.yacc"

#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
extern void yyerror(char *s); 
extern int  yywrap();
}


#line 86 "y.tab.cpp"

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

#include "y.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ASSIGN = 3,                     /* ASSIGN  */
  YYSYMBOL_OR = 4,                         /* OR  */
  YYSYMBOL_AND = 5,                        /* AND  */
  YYSYMBOL_EQ = 6,                         /* EQ  */
  YYSYMBOL_NE = 7,                         /* NE  */
  YYSYMBOL_GT = 8,                         /* GT  */
  YYSYMBOL_GE = 9,                         /* GE  */
  YYSYMBOL_LT = 10,                        /* LT  */
  YYSYMBOL_LE = 11,                        /* LE  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_SUB = 13,                       /* SUB  */
  YYSYMBOL_MUL = 14,                       /* MUL  */
  YYSYMBOL_DIV = 15,                       /* DIV  */
  YYSYMBOL_NOT = 16,                       /* NOT  */
  YYSYMBOL_SEMICOLON = 17,                 /* SEMICOLON  */
  YYSYMBOL_LPARENT = 18,                   /* LPARENT  */
  YYSYMBOL_RPARENT = 19,                   /* RPARENT  */
  YYSYMBOL_LBRACKET = 20,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 21,                  /* RBRACKET  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_COMMA = 24,                     /* COMMA  */
  YYSYMBOL_COLON = 25,                     /* COLON  */
  YYSYMBOL_ARROW = 26,                     /* ARROW  */
  YYSYMBOL_LET = 27,                       /* LET  */
  YYSYMBOL_POINT = 28,                     /* POINT  */
  YYSYMBOL_RET = 29,                       /* RET  */
  YYSYMBOL_FN = 30,                        /* FN  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_INT = 34,                       /* INT  */
  YYSYMBOL_STRUCT = 35,                    /* STRUCT  */
  YYSYMBOL_BREAK = 36,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 37,                  /* CONTINUE  */
  YYSYMBOL_Id = 38,                        /* Id  */
  YYSYMBOL_Num = 39,                       /* Num  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_Program = 41,                   /* Program  */
  YYSYMBOL_ProgramElementList = 42,        /* ProgramElementList  */
  YYSYMBOL_ProgramElement = 43,            /* ProgramElement  */
  YYSYMBOL_VarDeclStmt = 44,               /* VarDeclStmt  */
  YYSYMBOL_StructDef = 45,                 /* StructDef  */
  YYSYMBOL_FnDeclStmt = 46,                /* FnDeclStmt  */
  YYSYMBOL_FnDef = 47,                     /* FnDef  */
  YYSYMBOL_CodeBlockStmtList = 48,         /* CodeBlockStmtList  */
  YYSYMBOL_Type = 49,                      /* Type  */
  YYSYMBOL_VarDecl = 50,                   /* VarDecl  */
  YYSYMBOL_VarDef = 51,                    /* VarDef  */
  YYSYMBOL_VarDefScalar = 52,              /* VarDefScalar  */
  YYSYMBOL_VarDefArray = 53,               /* VarDefArray  */
  YYSYMBOL_VarDeclScalar = 54,             /* VarDeclScalar  */
  YYSYMBOL_VarDeclArray = 55,              /* VarDeclArray  */
  YYSYMBOL_VarDeclList = 56,               /* VarDeclList  */
  YYSYMBOL_RightVal = 57,                  /* RightVal  */
  YYSYMBOL_ArithExpr = 58,                 /* ArithExpr  */
  YYSYMBOL_BoolExpr = 59,                  /* BoolExpr  */
  YYSYMBOL_ArithBiOpExpr = 60,             /* ArithBiOpExpr  */
  YYSYMBOL_ArithUExpr = 61,                /* ArithUExpr  */
  YYSYMBOL_ExprUnit = 62,                  /* ExprUnit  */
  YYSYMBOL_FnCall = 63,                    /* FnCall  */
  YYSYMBOL_IndexExpr = 64,                 /* IndexExpr  */
  YYSYMBOL_ArrayExpr = 65,                 /* ArrayExpr  */
  YYSYMBOL_MemberExpr = 66,                /* MemberExpr  */
  YYSYMBOL_BoolUnit = 67,                  /* BoolUnit  */
  YYSYMBOL_BoolBiOpExpr = 68,              /* BoolBiOpExpr  */
  YYSYMBOL_BoolUOpExpr = 69,               /* BoolUOpExpr  */
  YYSYMBOL_ComExpr = 70,                   /* ComExpr  */
  YYSYMBOL_LeftVal = 71,                   /* LeftVal  */
  YYSYMBOL_AssignStmt = 72,                /* AssignStmt  */
  YYSYMBOL_RightValList = 73,              /* RightValList  */
  YYSYMBOL_ParamDecl = 74,                 /* ParamDecl  */
  YYSYMBOL_FnDecl = 75,                    /* FnDecl  */
  YYSYMBOL_CodeBlockStmt = 76,             /* CodeBlockStmt  */
  YYSYMBOL_IfStmt = 77,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 78,                 /* WhileStmt  */
  YYSYMBOL_CallStmt = 79,                  /* CallStmt  */
  YYSYMBOL_ReturnStmt = 80                 /* ReturnStmt  */
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   144,   144,   148,   149,   153,   154,   155,   156,   157,
     163,   164,   168,   172,   175,   179,   180,   184,   185,   189,
     190,   194,   195,   199,   203,   207,   211,   216,   217,   218,
     221,   222,   226,   227,   231,   232,   236,   237,   238,   239,
     243,   247,   248,   250,   251,   252,   253,   254,   258,   262,
     263,   267,   271,   275,   276,   277,   281,   282,   286,   290,
     291,   292,   293,   294,   295,   299,   300,   301,   305,   309,
     310,   311,   314,   318,   319,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   335,   336,   340,   344,   348
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
  "\"end of file\"", "error", "\"invalid token\"", "ASSIGN", "OR", "AND",
  "EQ", "NE", "GT", "GE", "LT", "LE", "ADD", "SUB", "MUL", "DIV", "NOT",
  "SEMICOLON", "LPARENT", "RPARENT", "LBRACKET", "RBRACKET", "LBRACE",
  "RBRACE", "COMMA", "COLON", "ARROW", "LET", "POINT", "RET", "FN", "IF",
  "ELSE", "WHILE", "INT", "STRUCT", "BREAK", "CONTINUE", "Id", "Num",
  "$accept", "Program", "ProgramElementList", "ProgramElement",
  "VarDeclStmt", "StructDef", "FnDeclStmt", "FnDef", "CodeBlockStmtList",
  "Type", "VarDecl", "VarDef", "VarDefScalar", "VarDefArray",
  "VarDeclScalar", "VarDeclArray", "VarDeclList", "RightVal", "ArithExpr",
  "BoolExpr", "ArithBiOpExpr", "ArithUExpr", "ExprUnit", "FnCall",
  "IndexExpr", "ArrayExpr", "MemberExpr", "BoolUnit", "BoolBiOpExpr",
  "BoolUOpExpr", "ComExpr", "LeftVal", "AssignStmt", "RightValList",
  "ParamDecl", "FnDecl", "CodeBlockStmt", "IfStmt", "WhileStmt",
  "CallStmt", "ReturnStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-138)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -138,   -18,     1,    11,    30,  -138,    -8,  -138,  -138,
    -138,  -138,    44,    71,    35,    45,  -138,  -138,  -138,  -138,
      50,    48,  -138,  -138,  -138,    66,    53,    67,  -138,  -138,
      60,    60,  -138,    -5,    90,   108,   111,   118,    -2,  -138,
      61,   119,  -138,  -138,   124,  -138,    66,  -138,  -138,  -138,
    -138,   116,  -138,  -138,   135,    97,   115,  -138,   121,   123,
      -1,    -5,    -5,    -2,  -138,   125,   106,    37,  -138,  -138,
     105,  -138,  -138,  -138,  -138,  -138,  -138,  -138,    -5,    -5,
    -138,  -138,    -5,    68,   103,  -138,  -138,    -5,  -138,   126,
      -5,   109,    67,    60,   127,  -138,    -1,  -138,   105,  -138,
      75,    40,  -138,    -1,    -1,    -1,    -1,    -5,    -5,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    81,   120,   130,  -138,
    -138,   129,  -138,   137,    67,  -138,   131,  -138,  -138,    67,
    -138,  -138,  -138,   110,   110,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,   133,   134,    -5,  -138,  -138,
    -138,   154,   136,  -138,    66,    66,  -138,   138,    67,   139,
     140,    -5,  -138,   132,  -138,   142,   144,  -138,    66,   145,
    -138
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     9,     0,     0,     0,     0,     2,     4,     5,     6,
       7,     8,     0,     0,     0,     0,    21,    22,    19,    20,
       0,     0,     1,     3,    13,     0,     0,     0,    10,    11,
      29,    29,    83,     0,     0,     0,     0,     0,    65,    75,
       0,     0,    66,    67,     0,    76,    16,    78,    79,    77,
      80,     0,    17,    18,    25,     0,    28,    72,     0,     0,
       0,     0,     0,    42,    41,     0,    30,    31,    32,    47,
      33,    44,    45,    46,    35,    34,    55,    53,     0,     0,
      82,    81,    71,     0,     0,    14,    87,     0,    15,     0,
       0,     0,     0,    29,    73,    12,     0,    40,     0,    58,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,    50,
      49,     0,    52,     0,     0,    23,     0,    25,    27,     0,
      33,    43,    54,    36,    37,    38,    39,    56,    57,    64,
      63,    59,    62,    61,    60,     0,     0,    71,    48,    51,
      68,    26,     0,    74,     0,     0,    69,     0,     0,     0,
       0,    71,    26,    84,    86,     0,     0,    24,     0,     0,
      85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,   151,  -138,    36,  -138,  -138,  -138,   -45,   -89,
     157,  -138,  -138,  -138,  -138,  -138,   -26,   -27,   -48,   -47,
    -138,  -138,   -32,   -25,  -138,   -23,   -21,   -54,  -138,  -138,
    -138,  -138,  -138,  -137,  -138,  -138,  -138,  -138,  -138,  -138,
    -138
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    39,     9,    10,    11,    40,    54,
      56,    15,    16,    17,    18,    19,    57,   117,    66,    67,
      68,    69,    70,    71,   121,    72,    73,    74,    75,    76,
      77,    44,    45,   118,    58,    12,    46,    47,    48,    49,
      50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    88,    42,   127,    43,    59,    65,    99,    60,     1,
     156,    61,    60,    62,   100,   101,    82,    96,    83,     2,
      13,    41,     3,    42,   165,    43,    84,     4,    97,    98,
      22,   115,   116,    63,    64,   151,     8,    63,    64,    20,
     153,   107,   108,     8,   107,   108,    98,    98,   100,    21,
     107,   108,    28,   137,   138,   133,   134,   135,   136,   132,
     123,    24,    29,   125,   130,   145,    25,   128,    30,   162,
      31,   130,   130,   130,   130,    98,    98,   139,   140,   141,
     142,   143,   144,    32,    85,   107,   108,   103,   104,   105,
     106,    26,    51,     2,   131,    33,    27,    34,    55,    35,
     146,    52,    36,    37,    38,    53,   119,   120,    78,   159,
     160,   109,   110,   111,   112,   113,   114,    91,   103,   104,
     105,   106,    92,   169,   105,   106,    79,    87,    80,    41,
      41,    42,    42,    43,    43,    81,    86,    89,    90,    93,
      94,   122,   102,    41,   147,    42,    95,    43,   126,   148,
     149,   124,   152,   129,   150,   154,   155,   157,    23,    14,
     161,   158,   163,   164,   166,   167,   168,     0,   170
};

static const yytype_int16 yycheck[] =
{
      25,    46,    25,    92,    25,    31,    33,    61,    13,    17,
     147,    16,    13,    18,    62,    62,    18,    18,    20,    27,
      38,    46,    30,    46,   161,    46,    28,    35,    60,    61,
       0,    78,    79,    38,    39,   124,     0,    38,    39,    38,
     129,     4,     5,     7,     4,     5,    78,    79,    96,    38,
       4,     5,    17,   107,   108,   103,   104,   105,   106,    19,
      87,    17,    17,    90,    96,    19,    22,    93,    18,   158,
      22,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    17,    23,     4,     5,    12,    13,    14,
      15,    20,    39,    27,    19,    29,    25,    31,    38,    33,
      19,    34,    36,    37,    38,    38,    38,    39,    18,   154,
     155,     6,     7,     8,     9,    10,    11,    20,    12,    13,
      14,    15,    25,   168,    14,    15,    18,     3,    17,   154,
     155,   154,   155,   154,   155,    17,    17,    21,     3,    24,
      19,    38,    17,   168,    24,   168,    23,   168,    39,    19,
      21,    25,    21,    26,    17,    22,    22,     3,     7,     2,
      22,    25,    23,    23,    32,    23,    22,    -1,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    27,    30,    35,    41,    42,    43,    44,    45,
      46,    47,    75,    38,    50,    51,    52,    53,    54,    55,
      38,    38,     0,    42,    17,    22,    20,    25,    17,    17,
      18,    22,    17,    29,    31,    33,    36,    37,    38,    44,
      48,    63,    65,    66,    71,    72,    76,    77,    78,    79,
      80,    39,    34,    38,    49,    38,    50,    56,    74,    56,
      13,    16,    18,    38,    39,    57,    58,    59,    60,    61,
      62,    63,    65,    66,    67,    68,    69,    70,    18,    18,
      17,    17,    18,    20,    28,    23,    17,     3,    48,    21,
       3,    20,    25,    24,    19,    23,    18,    62,    62,    67,
      58,    59,    17,    12,    13,    14,    15,     4,     5,     6,
       7,     8,     9,    10,    11,    59,    59,    57,    73,    38,
      39,    64,    38,    57,    25,    57,    39,    49,    56,    26,
      62,    19,    19,    58,    58,    58,    58,    67,    67,    62,
      62,    62,    62,    62,    62,    19,    19,    24,    19,    21,
      17,    49,    21,    49,    22,    22,    73,     3,    25,    48,
      48,    22,    49,    23,    23,    73,    32,    23,    22,    48,
      23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    45,    46,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    53,    54,    55,    56,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      61,    62,    62,    62,    62,    62,    62,    62,    63,    64,
      64,    65,    66,    67,    67,    67,    68,    68,    69,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    73,
      73,    73,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    78,    79,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       3,     3,     5,     2,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     5,    10,     3,     6,     3,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     4,     1,
       1,     4,     3,     1,     3,     1,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     3,
       1,     0,     1,     5,     7,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     7,    11,     7,     2,     3
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
  YY_USE (yykind);
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
  case 2: /* Program: ProgramElementList  */
#line 144 "parser.yacc"
                             { root = A_Program((yyvsp[0].programElementList)); (yyval.program) = A_Program((yyvsp[0].programElementList)); }
#line 1270 "y.tab.cpp"
    break;

  case 3: /* ProgramElementList: ProgramElement ProgramElementList  */
#line 148 "parser.yacc"
                                                        { (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement), (yyvsp[0].programElementList)); }
#line 1276 "y.tab.cpp"
    break;

  case 4: /* ProgramElementList: %empty  */
#line 149 "parser.yacc"
                      { (yyval.programElementList) = NULL; }
#line 1282 "y.tab.cpp"
    break;

  case 5: /* ProgramElement: VarDeclStmt  */
#line 153 "parser.yacc"
                              { (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt)); }
#line 1288 "y.tab.cpp"
    break;

  case 6: /* ProgramElement: StructDef  */
#line 154 "parser.yacc"
                            { (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef)); }
#line 1294 "y.tab.cpp"
    break;

  case 7: /* ProgramElement: FnDeclStmt  */
#line 155 "parser.yacc"
                             { (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt)); }
#line 1300 "y.tab.cpp"
    break;

  case 8: /* ProgramElement: FnDef  */
#line 156 "parser.yacc"
                        { (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef)); }
#line 1306 "y.tab.cpp"
    break;

  case 9: /* ProgramElement: SEMICOLON  */
#line 157 "parser.yacc"
                            { (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos)); }
#line 1312 "y.tab.cpp"
    break;

  case 10: /* VarDeclStmt: LET VarDecl SEMICOLON  */
#line 163 "parser.yacc"
                                   { (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos),(yyvsp[-1].varDecl)); }
#line 1318 "y.tab.cpp"
    break;

  case 11: /* VarDeclStmt: LET VarDef SEMICOLON  */
#line 164 "parser.yacc"
                                   { (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos),(yyvsp[-1].varDef)); }
#line 1324 "y.tab.cpp"
    break;

  case 12: /* StructDef: STRUCT Id LBRACE VarDeclList RBRACE  */
#line 168 "parser.yacc"
                                                { (yyval.structDef) = A_StructDef((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].varDeclList)); }
#line 1330 "y.tab.cpp"
    break;

  case 13: /* FnDeclStmt: FnDecl SEMICOLON  */
#line 172 "parser.yacc"
                               { (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl)); }
#line 1336 "y.tab.cpp"
    break;

  case 14: /* FnDef: FnDecl LBRACE CodeBlockStmtList RBRACE  */
#line 175 "parser.yacc"
                                               { (yyval.fnDef) = A_FnDef((yyvsp[-3].fnDecl)->pos, (yyvsp[-3].fnDecl), (yyvsp[-1].codeBlockStmtList)); }
#line 1342 "y.tab.cpp"
    break;

  case 15: /* CodeBlockStmtList: CodeBlockStmt CodeBlockStmtList  */
#line 179 "parser.yacc"
                                                    { (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[-1].codeBlockStmt), (yyvsp[0].codeBlockStmtList)); }
#line 1348 "y.tab.cpp"
    break;

  case 16: /* CodeBlockStmtList: CodeBlockStmt  */
#line 180 "parser.yacc"
                                  { (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[0].codeBlockStmt), NULL); }
#line 1354 "y.tab.cpp"
    break;

  case 17: /* Type: INT  */
#line 184 "parser.yacc"
          { (yyval.type) = A_NativeType((yyvsp[0].pos),A_intTypeKind); }
#line 1360 "y.tab.cpp"
    break;

  case 18: /* Type: Id  */
#line 185 "parser.yacc"
          { (yyval.type) = A_StructType((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id); }
#line 1366 "y.tab.cpp"
    break;

  case 19: /* VarDecl: VarDeclScalar  */
#line 189 "parser.yacc"
                        { (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].varDeclScalar)->pos,(yyvsp[0].varDeclScalar)); }
#line 1372 "y.tab.cpp"
    break;

  case 20: /* VarDecl: VarDeclArray  */
#line 190 "parser.yacc"
                        { (yyval.varDecl) = A_VarDecl_Array((yyvsp[0].varDeclArray)->pos,(yyvsp[0].varDeclArray)); }
#line 1378 "y.tab.cpp"
    break;

  case 21: /* VarDef: VarDefScalar  */
#line 194 "parser.yacc"
                      { (yyval.varDef) = A_VarDef_Scalar((yyvsp[0].varDefScalar)->pos,(yyvsp[0].varDefScalar)); }
#line 1384 "y.tab.cpp"
    break;

  case 22: /* VarDef: VarDefArray  */
#line 195 "parser.yacc"
                      { (yyval.varDef) = A_VarDef_Array((yyvsp[0].varDefArray)->pos,(yyvsp[0].varDefArray)); }
#line 1390 "y.tab.cpp"
    break;

  case 23: /* VarDefScalar: Id COLON Type ASSIGN RightVal  */
#line 199 "parser.yacc"
                                              { (yyval.varDefScalar) = A_VarDefScalar((yyvsp[-4].tokenId)->pos,(yyvsp[-4].tokenId)->id,(yyvsp[-2].type),(yyvsp[0].rightVal)); }
#line 1396 "y.tab.cpp"
    break;

  case 24: /* VarDefArray: Id LBRACKET Num RBRACKET COLON Type ASSIGN LBRACE RightValList RBRACE  */
#line 203 "parser.yacc"
                                                                                    { (yyval.varDefArray) = A_VarDefArray((yyvsp[-9].tokenId)->pos,(yyvsp[-9].tokenId)->id,(yyvsp[-7].tokenNum)->num,(yyvsp[-4].type),(yyvsp[-1].rightValList)); }
#line 1402 "y.tab.cpp"
    break;

  case 25: /* VarDeclScalar: Id COLON Type  */
#line 207 "parser.yacc"
                              { (yyval.varDeclScalar) = A_VarDeclScalar((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,(yyvsp[0].type)); }
#line 1408 "y.tab.cpp"
    break;

  case 26: /* VarDeclArray: Id LBRACKET Num RBRACKET COLON Type  */
#line 211 "parser.yacc"
                                                   { (yyval.varDeclArray) = A_VarDeclArray((yyvsp[-5].tokenId)->pos,(yyvsp[-5].tokenId)->id,(yyvsp[-3].tokenNum)->num,(yyvsp[0].type)); }
#line 1414 "y.tab.cpp"
    break;

  case 27: /* VarDeclList: VarDecl COMMA VarDeclList  */
#line 216 "parser.yacc"
                                        { (yyval.varDeclList) = A_VarDeclList((yyvsp[-2].varDecl),(yyvsp[0].varDeclList)); }
#line 1420 "y.tab.cpp"
    break;

  case 28: /* VarDeclList: VarDecl  */
#line 217 "parser.yacc"
                      { (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl),NULL); }
#line 1426 "y.tab.cpp"
    break;

  case 29: /* VarDeclList: %empty  */
#line 218 "parser.yacc"
              { (yyval.varDeclList) = NULL; }
#line 1432 "y.tab.cpp"
    break;

  case 30: /* RightVal: ArithExpr  */
#line 221 "parser.yacc"
                      { (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos,(yyvsp[0].arithExpr)); }
#line 1438 "y.tab.cpp"
    break;

  case 31: /* RightVal: BoolExpr  */
#line 222 "parser.yacc"
                      { (yyval.rightVal) = A_BoolExprRVal((yyvsp[0].boolExpr)->pos,(yyvsp[0].boolExpr)); }
#line 1444 "y.tab.cpp"
    break;

  case 32: /* ArithExpr: ArithBiOpExpr  */
#line 226 "parser.yacc"
                          { (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[0].arithBiOpExpr)->pos,(yyvsp[0].arithBiOpExpr)); }
#line 1450 "y.tab.cpp"
    break;

  case 33: /* ArithExpr: ExprUnit  */
#line 227 "parser.yacc"
                          { (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos,(yyvsp[0].exprUnit)); }
#line 1456 "y.tab.cpp"
    break;

  case 34: /* BoolExpr: BoolBiOpExpr  */
#line 231 "parser.yacc"
                          { (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[0].boolBiOpExpr)->pos,(yyvsp[0].boolBiOpExpr)); }
#line 1462 "y.tab.cpp"
    break;

  case 35: /* BoolExpr: BoolUnit  */
#line 232 "parser.yacc"
                          { (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos,(yyvsp[0].boolUnit)); }
#line 1468 "y.tab.cpp"
    break;

  case 36: /* ArithBiOpExpr: ArithExpr ADD ArithExpr  */
#line 236 "parser.yacc"
                                       { (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_add,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr)); }
#line 1474 "y.tab.cpp"
    break;

  case 37: /* ArithBiOpExpr: ArithExpr SUB ArithExpr  */
#line 237 "parser.yacc"
                                       { (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_sub,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr)); }
#line 1480 "y.tab.cpp"
    break;

  case 38: /* ArithBiOpExpr: ArithExpr MUL ArithExpr  */
#line 238 "parser.yacc"
                                       { (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_mul,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr)); }
#line 1486 "y.tab.cpp"
    break;

  case 39: /* ArithBiOpExpr: ArithExpr DIV ArithExpr  */
#line 239 "parser.yacc"
                                       { (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_div,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr)); }
#line 1492 "y.tab.cpp"
    break;

  case 40: /* ArithUExpr: SUB ExprUnit  */
#line 243 "parser.yacc"
                           { (yyval.arithUExpr) = A_ArithUExpr((yyvsp[-1].pos),A_neg,(yyvsp[0].exprUnit)); }
#line 1498 "y.tab.cpp"
    break;

  case 41: /* ExprUnit: Num  */
#line 247 "parser.yacc"
                { (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num); }
#line 1504 "y.tab.cpp"
    break;

  case 42: /* ExprUnit: Id  */
#line 248 "parser.yacc"
                { (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id); }
#line 1510 "y.tab.cpp"
    break;

  case 43: /* ExprUnit: LPARENT ArithExpr RPARENT  */
#line 250 "parser.yacc"
                                      { (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos),(yyvsp[-1].arithExpr)); }
#line 1516 "y.tab.cpp"
    break;

  case 44: /* ExprUnit: FnCall  */
#line 251 "parser.yacc"
                      { (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos,(yyvsp[0].fnCall)); }
#line 1522 "y.tab.cpp"
    break;

  case 45: /* ExprUnit: ArrayExpr  */
#line 252 "parser.yacc"
                      { (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr)); }
#line 1528 "y.tab.cpp"
    break;

  case 46: /* ExprUnit: MemberExpr  */
#line 253 "parser.yacc"
                      { (yyval.exprUnit) = A_MemberExprUnit((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr)); }
#line 1534 "y.tab.cpp"
    break;

  case 47: /* ExprUnit: ArithUExpr  */
#line 254 "parser.yacc"
                      { (yyval.exprUnit) = A_ArithUExprUnit((yyvsp[0].arithUExpr)->pos,(yyvsp[0].arithUExpr)); }
#line 1540 "y.tab.cpp"
    break;

  case 48: /* FnCall: Id LPARENT RightValList RPARENT  */
#line 258 "parser.yacc"
                                         { (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].rightValList)); }
#line 1546 "y.tab.cpp"
    break;

  case 49: /* IndexExpr: Num  */
#line 262 "parser.yacc"
                { (yyval.indexExpr) = A_NumIndexExpr((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num); }
#line 1552 "y.tab.cpp"
    break;

  case 50: /* IndexExpr: Id  */
#line 263 "parser.yacc"
                { (yyval.indexExpr) = A_IdIndexExpr((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id); }
#line 1558 "y.tab.cpp"
    break;

  case 51: /* ArrayExpr: Id LBRACKET IndexExpr RBRACKET  */
#line 267 "parser.yacc"
                                           { (yyval.arrayExpr) = A_ArrayExpr((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].indexExpr)); }
#line 1564 "y.tab.cpp"
    break;

  case 52: /* MemberExpr: Id POINT Id  */
#line 271 "parser.yacc"
                          { (yyval.memberExpr) = A_MemberExpr((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,(yyvsp[0].tokenId)->id); }
#line 1570 "y.tab.cpp"
    break;

  case 53: /* BoolUnit: ComExpr  */
#line 275 "parser.yacc"
                    { (yyval.boolUnit) = A_ComExprUnit((yyvsp[0].comExpr)->pos,(yyvsp[0].comExpr)); }
#line 1576 "y.tab.cpp"
    break;

  case 54: /* BoolUnit: LPARENT BoolExpr RPARENT  */
#line 276 "parser.yacc"
                                     { (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos),(yyvsp[-1].boolExpr)); }
#line 1582 "y.tab.cpp"
    break;

  case 55: /* BoolUnit: BoolUOpExpr  */
#line 277 "parser.yacc"
                        { (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[0].boolUOpExpr)->pos,(yyvsp[0].boolUOpExpr)); }
#line 1588 "y.tab.cpp"
    break;

  case 56: /* BoolBiOpExpr: BoolExpr OR BoolUnit  */
#line 281 "parser.yacc"
                                     { (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_or,(yyvsp[-2].boolExpr),(yyvsp[0].boolUnit)); }
#line 1594 "y.tab.cpp"
    break;

  case 57: /* BoolBiOpExpr: BoolExpr AND BoolUnit  */
#line 282 "parser.yacc"
                                     { (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_and,(yyvsp[-2].boolExpr),(yyvsp[0].boolUnit));}
#line 1600 "y.tab.cpp"
    break;

  case 58: /* BoolUOpExpr: NOT BoolUnit  */
#line 286 "parser.yacc"
                           { (yyval.boolUOpExpr) = A_BoolUOpExpr((yyvsp[-1].pos),A_not,(yyvsp[0].boolUnit)); }
#line 1606 "y.tab.cpp"
    break;

  case 59: /* ComExpr: ExprUnit GT ExprUnit  */
#line 290 "parser.yacc"
                               { (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_gt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));}
#line 1612 "y.tab.cpp"
    break;

  case 60: /* ComExpr: ExprUnit LE ExprUnit  */
#line 291 "parser.yacc"
                               { (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_le,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));}
#line 1618 "y.tab.cpp"
    break;

  case 61: /* ComExpr: ExprUnit LT ExprUnit  */
#line 292 "parser.yacc"
                               { (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_lt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));}
#line 1624 "y.tab.cpp"
    break;

  case 62: /* ComExpr: ExprUnit GE ExprUnit  */
#line 293 "parser.yacc"
                               { (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ge,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));}
#line 1630 "y.tab.cpp"
    break;

  case 63: /* ComExpr: ExprUnit NE ExprUnit  */
#line 294 "parser.yacc"
                               { (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ne,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));}
#line 1636 "y.tab.cpp"
    break;

  case 64: /* ComExpr: ExprUnit EQ ExprUnit  */
#line 295 "parser.yacc"
                               { (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_eq,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));}
#line 1642 "y.tab.cpp"
    break;

  case 65: /* LeftVal: Id  */
#line 299 "parser.yacc"
             { (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id); }
#line 1648 "y.tab.cpp"
    break;

  case 66: /* LeftVal: ArrayExpr  */
#line 300 "parser.yacc"
                    { (yyval.leftVal) = A_ArrExprLVal((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr)); }
#line 1654 "y.tab.cpp"
    break;

  case 67: /* LeftVal: MemberExpr  */
#line 301 "parser.yacc"
                    { (yyval.leftVal) = A_MemberExprLVal((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr)); }
#line 1660 "y.tab.cpp"
    break;

  case 68: /* AssignStmt: LeftVal ASSIGN RightVal SEMICOLON  */
#line 305 "parser.yacc"
                                                { (yyval.assignStmt) = A_AssignStmt((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].rightVal)); }
#line 1666 "y.tab.cpp"
    break;

  case 69: /* RightValList: RightVal COMMA RightValList  */
#line 309 "parser.yacc"
                                            { (yyval.rightValList) = A_RightValList((yyvsp[-2].rightVal),(yyvsp[0].rightValList)); }
#line 1672 "y.tab.cpp"
    break;

  case 70: /* RightValList: RightVal  */
#line 310 "parser.yacc"
                         { (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal),NULL); }
#line 1678 "y.tab.cpp"
    break;

  case 71: /* RightValList: %empty  */
#line 311 "parser.yacc"
                { (yyval.rightValList) = NULL; }
#line 1684 "y.tab.cpp"
    break;

  case 72: /* ParamDecl: VarDeclList  */
#line 314 "parser.yacc"
                        { (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList)); }
#line 1690 "y.tab.cpp"
    break;

  case 73: /* FnDecl: FN Id LPARENT ParamDecl RPARENT  */
#line 318 "parser.yacc"
                                         { (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].paramDecl), NULL); }
#line 1696 "y.tab.cpp"
    break;

  case 74: /* FnDecl: FN Id LPARENT ParamDecl RPARENT ARROW Type  */
#line 319 "parser.yacc"
                                                    { (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos), (yyvsp[-5].tokenId)->id, (yyvsp[-3].paramDecl), (yyvsp[0].type)); }
#line 1702 "y.tab.cpp"
    break;

  case 75: /* CodeBlockStmt: VarDeclStmt  */
#line 323 "parser.yacc"
                            { (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt)); }
#line 1708 "y.tab.cpp"
    break;

  case 76: /* CodeBlockStmt: AssignStmt  */
#line 324 "parser.yacc"
                           { (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos, (yyvsp[0].assignStmt)); }
#line 1714 "y.tab.cpp"
    break;

  case 77: /* CodeBlockStmt: CallStmt  */
#line 325 "parser.yacc"
                         { (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos, (yyvsp[0].callStmt)); }
#line 1720 "y.tab.cpp"
    break;

  case 78: /* CodeBlockStmt: IfStmt  */
#line 326 "parser.yacc"
                       { (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos, (yyvsp[0].ifStmt)); }
#line 1726 "y.tab.cpp"
    break;

  case 79: /* CodeBlockStmt: WhileStmt  */
#line 327 "parser.yacc"
                          { (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos, (yyvsp[0].whileStmt)); }
#line 1732 "y.tab.cpp"
    break;

  case 80: /* CodeBlockStmt: ReturnStmt  */
#line 328 "parser.yacc"
                           { (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos, (yyvsp[0].returnStmt)); }
#line 1738 "y.tab.cpp"
    break;

  case 81: /* CodeBlockStmt: CONTINUE SEMICOLON  */
#line 329 "parser.yacc"
                                   { (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos)); }
#line 1744 "y.tab.cpp"
    break;

  case 82: /* CodeBlockStmt: BREAK SEMICOLON  */
#line 330 "parser.yacc"
                                { (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos)); }
#line 1750 "y.tab.cpp"
    break;

  case 83: /* CodeBlockStmt: SEMICOLON  */
#line 331 "parser.yacc"
                          { (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos)); }
#line 1756 "y.tab.cpp"
    break;

  case 84: /* IfStmt: IF LPARENT BoolExpr RPARENT LBRACE CodeBlockStmtList RBRACE  */
#line 335 "parser.yacc"
                                                                     { (yyval.ifStmt) = A_IfStmt((yyvsp[-6].pos), (yyvsp[-4].boolExpr), (yyvsp[-1].codeBlockStmtList), NULL); }
#line 1762 "y.tab.cpp"
    break;

  case 85: /* IfStmt: IF LPARENT BoolExpr RPARENT LBRACE CodeBlockStmtList RBRACE ELSE LBRACE CodeBlockStmtList RBRACE  */
#line 336 "parser.yacc"
                                                                                                          { (yyval.ifStmt) = A_IfStmt((yyvsp[-10].pos), (yyvsp[-8].boolExpr), (yyvsp[-5].codeBlockStmtList), (yyvsp[-1].codeBlockStmtList)); }
#line 1768 "y.tab.cpp"
    break;

  case 86: /* WhileStmt: WHILE LPARENT BoolExpr RPARENT LBRACE CodeBlockStmtList RBRACE  */
#line 340 "parser.yacc"
                                                                           { (yyval.whileStmt) = A_WhileStmt((yyvsp[-6].pos), (yyvsp[-4].boolExpr), (yyvsp[-1].codeBlockStmtList)); }
#line 1774 "y.tab.cpp"
    break;

  case 87: /* CallStmt: FnCall SEMICOLON  */
#line 344 "parser.yacc"
                             { (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos, (yyvsp[-1].fnCall)); }
#line 1780 "y.tab.cpp"
    break;

  case 88: /* ReturnStmt: RET RightVal SEMICOLON  */
#line 348 "parser.yacc"
                                     { (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos), (yyvsp[-1].rightVal)); }
#line 1786 "y.tab.cpp"
    break;


#line 1790 "y.tab.cpp"

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

#line 350 "parser.yacc"


extern "C"{
void yyerror(char * s)
{
  fprintf(stderr, "%sn",s);
}
int yywrap()
{
  return(1);
}
}
