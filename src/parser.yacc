%{
#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
extern void yyerror(char *s); 
extern int  yywrap();
}

%}
/* 定义union集，是yylval的成员集合 */
%union {
  A_tokenId tokenId;
  A_tokenNum tokenNum;
  A_pos pos;
  A_type type;
  A_varDecl varDecl;
  A_varDef varDef;
  A_rightVal rightVal;
  A_arithExpr arithExpr;
  A_boolExpr boolExpr;
  A_arithBiOpExpr arithBiOpExpr;
  A_arithUExpr arithUExpr;
  A_exprUnit exprUnit;
  A_fnCall fnCall;
  A_indexExpr indexExpr;
  A_arrayExpr arrayExpr;
  A_memberExpr memberExpr;
  A_boolUnit boolUnit;
  A_boolBiOpExpr boolBiOpExpr;
  A_boolUOpExpr boolUOpExpr;
  A_comExpr comExpr;
  A_leftVal leftVal;
  A_assignStmt assignStmt;
  A_rightValList rightValList;
  A_varDefScalar varDefScalar;
  A_varDefArray varDefArray;
  A_varDeclScalar varDeclScalar;
  A_varDeclArray varDeclArray;
  A_varDeclStmt varDeclStmt;
  A_varDeclList varDeclList;
  A_structDef structDef;
  A_paramDecl paramDecl;
  A_fnDecl fnDecl;
  A_fnDef fnDef;
  A_codeBlockStmt codeBlockStmt;
  A_ifStmt ifStmt;
  A_whileStmt whileStmt;
  A_fnDeclStmt fnDeclStmt;
  A_callStmt callStmt;
  A_returnStmt returnStmt;
  A_programElement programElement;
  A_codeBlockStmtList codeBlockStmtList;
  A_programElementList programElementList;
  A_program program;
}
/* 词法单元 */
  /* 算术符号 */
  %right <pos> ASSIGN
  %left  <pos> OR
  %left  <pos> AND
  %right <pos> EQ NE
  %left  <pos> GT GE LT LE
  %left  <pos> ADD SUB
  %left  <pos> MUL DIV
  %left  <pos> NOT
  /* 分割符 */
  %token <pos> SEMICOLON 
  %token <pos> LPARENT 
  %token <pos> RPARENT 
  %token <pos> LBRACKET 
  %token <pos> RBRACKET 
  %token <pos> LBRACE 
  %token <pos> RBRACE 
  %token <pos> COMMA
  %token <pos> COLON
  %token <pos> ARROW
  /* 关键字 */
  %token <pos> LET
  %token <pos> POINT
  %token <pos> RET
  %token <pos> FN
  %token <pos> IF
  %token <pos> ELSE
  %token <pos> WHILE
  %token <pos> INT
  %token <pos> STRUCT
  %token <pos> BREAK
  %token <pos> CONTINUE
  /* 标识符 */
  %token <tokenId> Id
  /* 数字常量 */ 
  %token <tokenNum> Num
/* 非终结符号 */
  %type <type> Type
  %type <varDecl> VarDecl
  %type <varDef> VarDef
  %type <rightVal> RightVal
  %type <arithExpr> ArithExpr
  %type <boolExpr> BoolExpr
  %type <arithBiOpExpr> ArithBiOpExpr
  %type <arithUExpr> ArithUExpr
  %type <exprUnit> ExprUnit
  %type <fnCall> FnCall
  %type <indexExpr> IndexExpr
  %type <arrayExpr> ArrayExpr
  %type <memberExpr> MemberExpr
  %type <boolUnit> BoolUnit
  %type <boolBiOpExpr> BoolBiOpExpr
  %type <boolUOpExpr> BoolUOpExpr
  %type <comExpr> ComExpr
  %type <leftVal> LeftVal
  %type <assignStmt> AssignStmt
  %type <rightValList> RightValList
  %type <varDefScalar> VarDefScalar
  %type <varDefArray> VarDefArray
  %type <varDeclScalar> VarDeclScalar
  %type <varDeclArray> VarDeclArray
  %type <varDeclStmt> VarDeclStmt
  %type <varDeclList> VarDeclList
  %type <structDef> StructDef
  %type <paramDecl> ParamDecl
  %type <fnDecl> FnDecl
  %type <fnDef> FnDef
  %type <codeBlockStmt> CodeBlockStmt
  %type <ifStmt> IfStmt
  %type <whileStmt> WhileStmt
  %type <fnDeclStmt> FnDeclStmt
  %type <callStmt> CallStmt
  %type <returnStmt> ReturnStmt
  %type <programElement> ProgramElement
  %type <codeBlockStmtList> CodeBlockStmtList
  %type <programElementList> ProgramElementList
  %type <program> Program
/* 开始符号 */
  %start Program
%%

/* 程序 */
Program : ProgramElementList { root = A_Program($1); $$ = A_Program($1); }
        ;

/* 程序元素列表 */
ProgramElementList  : ProgramElement ProgramElementList { $$ = A_ProgramElementList($1, $2); }
                    | { $$ = NULL; }
                    ;

/* 程序元素 */
ProgramElement  : VarDeclStmt { $$ = A_ProgramVarDeclStmt($1->pos, $1); }
                | StructDef { $$ = A_ProgramStructDef($1->pos, $1); }
                | FnDeclStmt { $$ = A_ProgramFnDeclStmt($1->pos, $1); }
                | FnDef { $$ = A_ProgramFnDef($1->pos, $1); }
                | SEMICOLON { $$ = A_ProgramNullStmt($1); }
                ;

/* 变量声明及定义语句 */
//let a/a[1]:int
//let a:int = 6
VarDeclStmt : LET VarDecl SEMICOLON{ $$ = A_VarDeclStmt($1,$2); }
            | LET VarDef SEMICOLON { $$ = A_VarDefStmt($1,$2); }
            ;

/* 定义结构体 */
StructDef : STRUCT Id LBRACE VarDeclList RBRACE { $$ = A_StructDef($1, $2->id, $4); }
          ;

/* 函数声明语句 */
FnDeclStmt  : FnDecl SEMICOLON { $$ = A_FnDeclStmt($1->pos, $1); }
            ;
/* 函数定义 */
FnDef : FnDecl LBRACE CodeBlockStmtList RBRACE { $$ = A_FnDef($1->pos, $1, $3); }
      ;

/* 代码块语句列表 */
CodeBlockStmtList : CodeBlockStmt CodeBlockStmtList { $$ = A_CodeBlockStmtList($1, $2); }
                  | CodeBlockStmt { $$ = A_CodeBlockStmtList($1, NULL); }
                  ;

/* 类型或结构体 */
Type: INT { $$ = A_NativeType($1,A_intTypeKind); }
    | Id  { $$ = A_StructType($1->pos,$1->id); }
    ;

/* 声明变量 */
VarDecl : VarDeclScalar { $$ = A_VarDecl_Scalar($1->pos,$1); }
        | VarDeclArray  { $$ = A_VarDecl_Array($1->pos,$1); }
        ;

/* 定义变量 */
VarDef  : VarDefScalar{ $$ = A_VarDef_Scalar($1->pos,$1); }
        | VarDefArray { $$ = A_VarDef_Array($1->pos,$1); }
        ;

/* 标准变量定义操作 */
VarDefScalar  : Id COLON Type ASSIGN RightVal { $$ = A_VarDefScalar($1->pos,$1->id,$3,$5); }
              ;

/* 数组变量定义操作 */
VarDefArray : Id LBRACKET Num RBRACKET COLON Type ASSIGN LBRACE RightValList RBRACE { $$ = A_VarDefArray($1->pos,$1->id,$3->num,$6,$9); }
            ;

/* 标准变量声明操作 */
VarDeclScalar : Id COLON Type { $$ = A_VarDeclScalar($1->pos,$1->id,$3); }
              ;

/* 数组变量声明操作 */
VarDeclArray : Id LBRACKET Num RBRACKET COLON Type { $$ = A_VarDeclArray($1->pos,$1->id,$3->num,$6); }
             ;  

/* 多重变量声明语句 */
//a:int,b:int
VarDeclList : VarDecl COMMA VarDeclList { $$ = A_VarDeclList($1,$3); }
            | VarDecl { $$ = A_VarDeclList($1,NULL); }
            | { $$ = NULL; };

/* 右值 */
RightVal  : ArithExpr { $$ = A_ArithExprRVal($1->pos,$1); }
          | BoolExpr  { $$ = A_BoolExprRVal($1->pos,$1); }
          ;

/* 算术表达式 */
ArithExpr : ArithBiOpExpr { $$ = A_ArithBiOp_Expr($1->pos,$1); }
          | ExprUnit      { $$ = A_ExprUnit($1->pos,$1); }
          ;

/* 布尔表达式 */
BoolExpr  : BoolBiOpExpr  { $$ = A_BoolBiOp_Expr($1->pos,$1); }
          | BoolUnit      { $$ = A_BoolExpr($1->pos,$1); }
          ;

/* 二元算术表达式 */
ArithBiOpExpr : ArithExpr ADD ArithExpr{ $$ = A_ArithBiOpExpr($1->pos,A_add,$1,$3); }
              | ArithExpr SUB ArithExpr{ $$ = A_ArithBiOpExpr($1->pos,A_sub,$1,$3); }
              | ArithExpr MUL ArithExpr{ $$ = A_ArithBiOpExpr($1->pos,A_mul,$1,$3); }
              | ArithExpr DIV ArithExpr{ $$ = A_ArithBiOpExpr($1->pos,A_div,$1,$3); }
              ;

/* 负数 */
ArithUExpr  : SUB ExprUnit { $$ = A_ArithUExpr($1,A_neg,$2); }
            ;

/* 表达式单元 */
ExprUnit  : Num { $$ = A_NumExprUnit($1->pos,$1->num); }
          | Id  { $$ = A_IdExprUnit($1->pos,$1->id); }
          /* 对于括号中的表达式单元，用左括号代表其位置 */
          | LPARENT ArithExpr RPARENT { $$ = A_ArithExprUnit($1,$2); }
          | FnCall    { $$ = A_CallExprUnit($1->pos,$1); }
          | ArrayExpr { $$ = A_ArrayExprUnit($1->pos,$1); }
          | MemberExpr{ $$ = A_MemberExprUnit($1->pos,$1); }
          | ArithUExpr{ $$ = A_ArithUExprUnit($1->pos,$1); }
          ;

/* 函数调用 */
FnCall  : Id LPARENT RightValList RPARENT{ $$ = A_FnCall($1->pos,$1->id,$3); }
        ;

/* 索引表达式 */
IndexExpr : Num { $$ = A_NumIndexExpr($1->pos,$1->num); }
          | Id  { $$ = A_IdIndexExpr($1->pos,$1->id); }
          ;

/* 数组 */
ArrayExpr : Id LBRACKET IndexExpr RBRACKET { $$ = A_ArrayExpr($1->pos,$1->id,$3); }
          ;

/* 结构体成员 */
MemberExpr  : Id POINT Id { $$ = A_MemberExpr($1->pos,$1->id,$3->id); }
            ;
            
/* 布尔单元 */
BoolUnit  : ComExpr { $$ = A_ComExprUnit($1->pos,$1); }
          | LPARENT BoolExpr RPARENT { $$ = A_BoolExprUnit($1,$2); }
          | BoolUOpExpr { $$ = A_BoolUOpExprUnit($1->pos,$1); }
          ;

/* 二元布尔算术表达式 */
BoolBiOpExpr  : BoolExpr OR BoolUnit { $$ = A_BoolBiOpExpr($1->pos,A_or,$1,$3); }
              | BoolExpr AND BoolUnit{ $$ = A_BoolBiOpExpr($1->pos,A_and,$1,$3);}
              ;

/* 一元布尔算术表达式 */
BoolUOpExpr : NOT BoolUnit { $$ = A_BoolUOpExpr($1,A_not,$2); }
            ;

/* 比较表达式 */
ComExpr : ExprUnit GT ExprUnit { $$ = A_ComExpr($1->pos,A_gt,$1,$3);}
        | ExprUnit LE ExprUnit { $$ = A_ComExpr($1->pos,A_le,$1,$3);}
        | ExprUnit LT ExprUnit { $$ = A_ComExpr($1->pos,A_lt,$1,$3);}
        | ExprUnit GE ExprUnit { $$ = A_ComExpr($1->pos,A_ge,$1,$3);}
        | ExprUnit NE ExprUnit { $$ = A_ComExpr($1->pos,A_ne,$1,$3);}
        | ExprUnit EQ ExprUnit { $$ = A_ComExpr($1->pos,A_eq,$1,$3);}
        ;

/* 左值 */
LeftVal : Id { $$ = A_IdExprLVal($1->pos,$1->id); }
        | ArrayExpr { $$ = A_ArrExprLVal($1->pos,$1); }
        | MemberExpr{ $$ = A_MemberExprLVal($1->pos,$1); }
        ;

/* 赋值 */
AssignStmt  : LeftVal ASSIGN RightVal SEMICOLON { $$ = A_AssignStmt($1->pos,$1,$3); }
            ;

/* 参数列表 */
RightValList  : RightVal COMMA RightValList { $$ = A_RightValList($1,$3); }
              | RightVal { $$ = A_RightValList($1,NULL); }
              | { $$ = NULL; };

/* 参数声明 */
ParamDecl : VarDeclList { $$ = A_ParamDecl($1); }
          ;

/* 函数声明 */
FnDecl : FN Id LPARENT ParamDecl RPARENT { $$ = A_FnDecl($1, $2->id, $4, NULL); }
       | FN Id LPARENT ParamDecl RPARENT ARROW Type { $$ = A_FnDecl($1, $2->id, $4, $7); }
        ;

/* 代码块语句 */
CodeBlockStmt : VarDeclStmt { $$ = A_BlockVarDeclStmt($1->pos, $1); }
              | AssignStmt { $$ = A_BlockAssignStmt($1->pos, $1); }
              | CallStmt { $$ = A_BlockCallStmt($1->pos, $1); }
              | IfStmt { $$ = A_BlockIfStmt($1->pos, $1); }
              | WhileStmt { $$ = A_BlockWhileStmt($1->pos, $1); }
              | ReturnStmt { $$ = A_BlockReturnStmt($1->pos, $1); }
              | CONTINUE SEMICOLON { $$ = A_BlockContinueStmt($1); }
              | BREAK SEMICOLON { $$ = A_BlockBreakStmt($1); }
              | SEMICOLON { $$ = A_BlockNullStmt($1); }
              ;

/* if 语句 */
IfStmt : IF LPARENT BoolExpr RPARENT LBRACE CodeBlockStmtList RBRACE { $$ = A_IfStmt($1, $3, $6, NULL); }
       | IF LPARENT BoolExpr RPARENT LBRACE CodeBlockStmtList RBRACE ELSE LBRACE CodeBlockStmtList RBRACE { $$ = A_IfStmt($1, $3, $6, $10); }
        ;

/* while 语句 */
WhileStmt : WHILE LPARENT BoolExpr RPARENT LBRACE CodeBlockStmtList RBRACE { $$ = A_WhileStmt($1, $3, $6); }
          ;

/* 调用语句 */
CallStmt  : FnCall SEMICOLON { $$ = A_CallStmt($1->pos, $1); }
          ;

/* 返回语句 */
ReturnStmt  : RET RightVal SEMICOLON { $$ = A_ReturnStmt($1, $2); }
            ;
%%

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