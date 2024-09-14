// 第一段，用以声明标记和引用外部文件、变量等
%{
#include <stdio.h>
#include <string.h>
#include "TeaplAst.h"
#include "y.tab.hpp"
extern int line, col;
%}

// 第二段   
%%
// TODO:
// your lexer

%%

// 第三段