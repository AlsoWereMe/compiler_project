%{
    #include <stdio.h>
    #include <string.h>
    #include "TeaplAst.h"
    #include "y.tab.hpp"
    extern int line, col;
%}

%start COMMENT_1 COMMENT_2

NUMBER ([1-9][0-9]*)|0
ID     [a-zA-Z][a-zA-Z0-9]*

%%
<INITIAL>{
    /* 注释状态机 */
    "//"        { BEGIN COMMENT_1; }
    "/*"        { BEGIN COMMENT_2; }
    /* 空白与换行 */
    " "         { col += 1; }
    "\t"        { col += 4; }
    [\n\r]      { line += 1; col = 0; }
    /* 运算符 */
    "||"        { yylval.pos = A_Pos(line, col); col += yyleng; return OR; }
    "&&"        { yylval.pos = A_Pos(line, col); col += yyleng; return AND; }
    "+"         { yylval.pos = A_Pos(line, col); col += yyleng; return ADD; }
    "-"         { yylval.pos = A_Pos(line, col); col += yyleng; return SUB; }
    "*"         { yylval.pos = A_Pos(line, col); col += yyleng; return MUL; }
    "/"         { yylval.pos = A_Pos(line, col); col += yyleng; return DIV; }
    ">="        { yylval.pos = A_Pos(line, col); col += yyleng; return GE; }
    ">"         { yylval.pos = A_Pos(line, col); col += yyleng; return GT; }
    "<="        { yylval.pos = A_Pos(line, col); col += yyleng; return LE; }
    "<"         { yylval.pos = A_Pos(line, col); col += yyleng; return LT; }
    "!="        { yylval.pos = A_Pos(line, col); col += yyleng; return NE; }
    "=="        { yylval.pos = A_Pos(line, col); col += yyleng; return EQ; }
    "="         { yylval.pos = A_Pos(line, col); col += yyleng; return ASSIGN; }
    "!"         { yylval.pos = A_Pos(line, col); col += yyleng; return NOT; }
    "."         { yylval.pos = A_Pos(line, col); col += yyleng; return POINT; }
    /* 分隔符 */
    ":"         { yylval.pos = A_Pos(line, col); col += yyleng; return COLON; }
    ";"         { yylval.pos = A_Pos(line, col); col += yyleng; return SEMICOLON; }
    "->"        { yylval.pos = A_Pos(line, col); col += yyleng; return ARROW; }
    ","         { yylval.pos = A_Pos(line, col); col += yyleng; return COMMA; }
    "("         { yylval.pos = A_Pos(line, col); col += yyleng; return LPARENT; }
    ")"         { yylval.pos = A_Pos(line, col); col += yyleng; return RPARENT; }
    "["         { yylval.pos = A_Pos(line, col); col += yyleng; return LBRACKET; }
    "]"         { yylval.pos = A_Pos(line, col); col += yyleng; return RBRACKET; }
    "{"         { yylval.pos = A_Pos(line, col); col += yyleng; return LBRACE; }
    "}"         { yylval.pos = A_Pos(line, col); col += yyleng; return RBRACE; }
    /* 关键字 */
    "let"       { yylval.pos = A_Pos(line, col); col += yyleng; return LET; }
    "ret"       { yylval.pos = A_Pos(line, col); col += yyleng; return RET; }
    "fn"        { yylval.pos = A_Pos(line, col); col += yyleng; return FN; }
    "if"        { yylval.pos = A_Pos(line, col); col += yyleng; return IF; }
    "else"      { yylval.pos = A_Pos(line, col); col += yyleng; return ELSE; }
    "while"     { yylval.pos = A_Pos(line, col); col += yyleng; return WHILE; }
    "break"     { yylval.pos = A_Pos(line, col); col += yyleng; return BREAK; }
    "continue"  { yylval.pos = A_Pos(line, col); col += yyleng; return CONTINUE; }
    "int"       { yylval.pos = A_Pos(line, col); col += yyleng; return INT; }
    "struct"    { yylval.pos = A_Pos(line, col); col += yyleng; return STRUCT; }
    /* 标识符 */
    {ID} {
        yylval.tokenId = A_TokenId(A_Pos(line, col), strdup(yytext));
        col += yyleng;
        return Id;
    }
    /* 数字常量 */
    {NUMBER} {
        yylval.tokenNum = A_TokenNum(A_Pos(line, col), atoi(yytext));
        col += yyleng;
        return Num;
    }
    /* 其余字符为非法字符 */
    . { printf("Unknown Character: %s\n", yytext); }
}

<COMMENT_1>{
    [\n\r] { BEGIN INITIAL; line += 1; col = 1; }
    . 
}

<COMMENT_2>{
    "*/" { BEGIN INITIAL; }
    [\n\r] { line += 1; col = 1; }
    . 
}
%%
