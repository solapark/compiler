%{
    /*
     * File Name   : subc.y
     * Description : a skeleton bison input
     */

#include "subc.h"

    int    yylex ();
    int    yyerror (char* s);
    void 	REDUCE(char* s);

    %}

    /* yylval types */
    %union {
        int		intVal;
        char		*stringVal;
        struct id	*idPtr;
        struct decl	*declPtr;
        struct ste	*stePtr;
        struct node 	*nodePtr;
    }

/* Token and Types */
%token	<stringVal>	TYPE VOID STRUCT RETURN IF ELSE WHILE FOR BREAK CONTINUE LOGICAL_OR LOGICAL_AND RELOP EQUOP INCOP DECOP STRUCTOP
%token	<idPtr>		ID
%token	<intVal>	INTEGER_CONST
%token	<stringVal>	STRING CHAR_CONST

%type	<declPtr>	program	ext_def_list ext_def type_specifier struct_specifier func_decl def_list def compound_stmt local_defs stmt_list stmt expr_e const_expr expr or_expr or_list and_expr and_list binary unary
%type   <stePtr>    param_decl param_list
%type	<nodePtr>	args		
%type 	<intVal>	pointers

/* Precedences and Associativities */	
%nonassoc	IFSIMPLE
%nonassoc	ELSE
%left	','
%right	'='
%left	LOGICAL_OR
%left	LOGICAL_AND	
%left	'&'
%left	EQUOP
%left	RELOP
%left	'+' '-'
%left	'*'
%right	'!' INCOP DECOP 
%left 	'[' ']' '(' ')' '.' STRUCTOP

%%
program:	ext_def_list	
{
    REDUCE("program->ext_def_list");
}
;

ext_def_list:	ext_def_list ext_def	
{
    REDUCE("ext_def_list->ext_def_list ext_def");
}
| /* empty */	{
    REDUCE("ext_def_list->epsilon");
}
;

ext_def:	type_specifier pointers ID ';' 
{
    REDUCE("ext_def->type_specifier pointers ID ';' ");
    if($1 !=NULL){
        int errNum;
        //1. TYPE *ID; 
        if($2 == 1){
            errNum = declare($3, makeVarDecl(makePtrDecl($1)));
        }
        //2. TYPE ID;
        else{
            errNum =declare($3, makeVarDecl($1));
        }	
        semErr(errNum);
    }
}	
| type_specifier pointers ID '[' const_expr ']' ';'
{
    REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
    int errNum;
    if($2 == 1){
        errNum = declare($3, makeVarDecl(makePtrDecl($1)));
    }else{
        errNum = declare($3, makeConstDecl(makeArrDecl($5, makeVarDecl($1)),0));
    }
    semErr(errNum);
}
| func_decl ';' 
{
    REDUCE("ext_def->func_decl ';' ");
    //do nothing
}
| type_specifier ';' 
{
    REDUCE("ext_def->type_specifier ';' ");
    //do nothing
}
| func_decl '{' 
{
    REDUCE("ext_def->func_decl '{' local_defs stmt_list '}'");
    pushScope();
    pushSteList($1->formals);
} 
local_defs stmt_list '}' 
{
    popScope();
    
}
;

type_specifier:	TYPE	
{
    REDUCE("type_specifier->TYPE");
    //find ste for TYPE.
    //struct decl * curDecl = findDeclByStr($1);
    //printf("%d\n", curDecl->typeClass);
    $$ = findDeclByStr($1);	
}
| VOID	
{
    REDUCE("type_specifier->VOID");
    //find ste for VOID.
    //save type decl ptr.
    $$ = findDeclByStr("void");	
}
| struct_specifier	
{
    REDUCE("type_specifier->struct_specifier");
    //save struct decl ptr.
    $$ = $1;
}
;

struct_specifier: STRUCT ID '{' 
{
    pushScope();
}
def_list '}'  
{
    REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
    struct ste *fields = popScope();
    declare($2, ($$ = makeStructDecl(fields)));      
}
| STRUCT ID	
{
    REDUCE("struct_specifier->STRUCT ID ");
    //1. find decl
    struct decl *curDecl = findDecl($2);
    if(curDecl == NULL){
        semErr(NOT_DECLARED);
        $$ =NULL;
    }else{
        //2. check is struct.
        int err = checkIsStruct(curDecl); 
        if(err != SUCCESS){
            semErr(err);
            $$ = NULL;
        }else{
            $$ = curDecl;
        }

    }
}
;	//<= In the second case, the struct must have been defined before.

func_decl:	type_specifier pointers ID '(' ')'	
{
    REDUCE("funct_decl->type_specifier pointers ID '(' ')'");
    //1. push fucndecl in symbol table.
    struct decl* funcDecl = makeFuncDecl();
    int errNum = declare($3, funcDecl);
    if(errNum == SUCCESS){
        //2. push scope to collect formal list.
        pushScope();
        //3. push returnid to symbole table.
        struct id* returnId = enter(0, "returnId", 8);
        struct decl* returnType=$1; 
        if($2 == 1){
            returnType = makePtrDecl($1);
        }
        declare(returnId, returnType);
        //5. save formals list
        struct ste *formals = popScope();
        //6. save return type.
        funcDecl->returnType = formals->decl;
        funcDecl->formals = formals;
        $$ = funcDecl;
    }else{	
        semErr(errNum);
        $$ = NULL;	
    }      

}
| type_specifier pointers ID '(' VOID ')'	
{
    REDUCE("funct_decl->type_specifier pointers ID '(' VOID ')'");
    //1. push fucndecl in symbol table.
    struct decl* funcDecl = makeFuncDecl();
    int errNum = declare($3, funcDecl);
    if(errNum == SUCCESS){
        //2. push scope to collect formal list.
        pushScope();
        //3. push returnid to symbole table.
        struct id* returnId = enter(0, "returnId", 8);
        struct decl* returnType=$1; 
        if($2 == 1){
            returnType = makePtrDecl($1);
        }
        declare(returnId, returnType);
        //5. save formals list
        struct ste *formals = popScope();
        //6. save return type.
        funcDecl->returnType = formals->decl;
        funcDecl->formals = formals;
        $$ = funcDecl;
    }else{	
        semErr(errNum);
        $$ = NULL;	
    }      
}
| type_specifier pointers ID '(' param_list ')'	
{
    REDUCE("funct_decl->type_specifier pointers ID '(' param_list ')'");
    if($1 == NULL || $5 == NULL){
        $$ = NULL;
    }else{
        //1. push fucndecl in symbol table.
        struct decl* funcDecl = makeFuncDecl();
        int errNum = declare($3, funcDecl);
        if(errNum == SUCCESS){
            //2. push scope to collect formal list.
            pushScope();
            //3. push returnid to symbole table.
            struct id* returnId = enter(0, "returnId", 8);
            struct decl* returnType=$1; 
            if($2 == 1){
                returnType = makePtrDecl($1);
            }
            declare(returnId, returnType);

            //4. push param list to symbol table.
            errNum = pushSteList($5);
            //5. save formals list
            struct ste *formals = popScope();
            if(errNum !=SUCCESS){
                semErr(errNum);
                removeTopSte();
                $$ = NULL;
            }else{
                //6. save return type.
                funcDecl->returnType = formals->decl;
                funcDecl->formals = formals;
                $$ = funcDecl;	
            }
        }else{	
            semErr(errNum);
            $$ = NULL;	
        }	
    }
}
;

pointers: 	'*'	
{
    REDUCE("pointers->'*'");
    $$ = 1;
}
| /* empty */ 
{
    REDUCE("pointers->epsilon");
    $$ = 0;
}
;

param_list:	param_decl	
{
    REDUCE("param_list->param_decl");
    if($1 == NULL){
        $$ = NULL;
    }else{
        $$ = $1;
    }
}
| param_list ',' param_decl	
{
    REDUCE("param_list->param_list ',' param_decl");
    if($1 == NULL || $3 == NULL){
        $$ = NULL;
    }else{
        $1->prev = $3;
        $$ = $1;
    }
}
;

param_decl: type_specifier pointers ID	
{
    REDUCE("param_decl -> type_specifier pointers ID");
    if($1 != NULL){
        //1. TYPE *ID; 
        //int errNum;
        if($2 == 1){
            $$ = makeSte($3, makeVarDecl(makePtrDecl($1)));
            //errNum = declare($3, makeVarDecl(makePtrDecl($1)));
        }

        //2. TYPE ID;
        else{
            $$ = makeSte($3, makeVarDecl($1));
            //errNum = declare($3, makeVarDecl($1));
        }       
        //check redeclaration
        //semErr(errNum);
    }else{
        $$ =NULL;
    }
}	 
| type_specifier pointers ID '[' const_expr ']'	
{
    REDUCE("param_decl -> type_specifier pointers ID '[' const_expr ']'	");
    if($1 != NULL){
        //int errNum;
        if($2 == 1){
            $$ = makeSte($3, makeVarDecl(makePtrDecl($1)));
            //errNum = declare($3, makeVarDecl(makePtrDecl($1)));
        }else{
            $$ = makeSte($3, makeConstDecl(makeArrDecl($5, makeVarDecl($1)),0));
            //errNum = declare($3, makeConstDecl(makeArrDecl($5, makeVarDecl($1)),0));
        }
        //semErr(errNum);
    }else{
        $$ =NULL;
    }
}
;

def_list:	def_list def	
{
    REDUCE("def_list->def_list def");
}
| /* empty */	
{
    REDUCE("def_list->epsilon");
}
;
def:	type_specifier pointers ID ';'	
{
    REDUCE("def->type_specifier pointers ID ';'	");
    if($1 != NULL){
        //1. TYPE *ID; 
        int errNum;
        if($2 == 1){
            errNum = declare($3, makeVarDecl(makePtrDecl($1)));
        }
        //2. TYPE ID;
        else{
            errNum = declare($3, makeVarDecl($1));
        }       
        semErr(errNum);
    }
} | type_specifier pointers ID '[' const_expr ']' ';'	{
    REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
    int errNum;
    if($2 == 1){
        errNum = declare($3, makeVarDecl(makePtrDecl($1)));
    }else{
        errNum = declare($3, makeConstDecl(makeArrDecl($5, makeVarDecl($1)),0));
    }
    semErr(errNum);
}
| type_specifier ';'	
{
    REDUCE("def->type_specifier ';'");
}
| func_decl ';'	
{
    REDUCE("def->func_decl ';'	");
}
;

compound_stmt:	'{' 
{
    pushScope();
} local_defs stmt_list '}'	{
    REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
    popScope();
}
;

local_defs:	def_list	
{
    REDUCE("local_defs->def_list");
}
;
stmt_list:	stmt_list stmt
{
    REDUCE("stmt_list->stmt_list stmt");
}
| /* empty */	
{
    REDUCE("stmt_list->epsilon");
}
;
stmt:		expr ';'	
{
    REDUCE("stmt->expr ';'");
}
| compound_stmt	
{
    REDUCE("stmt->compound_stmt");
}
| RETURN ';'	
{
    REDUCE("stmt->RETURN ';'");
    int errNum = checkSameType(findDeclByStr("returnId"), findDeclByStr("void"));
    semErr(errNum);
}
| RETURN expr ';'	
{
    REDUCE("stmt->RETURN expr ';'");
    //struct decl* declExpr = (struct decl*) malloc(sizeof(struct decl));
    //declExpr->type = $2;
    //int errNum = checkSameType(findDeclByStr("returnId"), declExpr);
    int errNum = checkSameType(findDeclByStr("returnId"), $2);
    semErr(errNum);
}
| ';'	
{
    REDUCE("stmt->';'");
}
| IF '(' expr ')' stmt %prec IFSIMPLE	
{
    REDUCE("stmt->IF '(' expr ')' stmt	");
}
| IF '(' expr ')' stmt ELSE stmt %prec ELSE
{
    REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
}
| WHILE '(' expr ')' stmt	
{
    REDUCE("stmt->WHILE '(' expr ')' stmt");
}
| FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt	
{
    REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
}
| BREAK ';'	
{
    REDUCE("stmt->BREAK ';'");
}
| CONTINUE ';'		
{
    REDUCE("stmt->CONTINUE ';'");
}
;

expr_e:		expr	
{
    REDUCE("test->expr");
}
| /* empty */		
{
    REDUCE("test->epsilon");
}
;

const_expr:	expr	
{
    REDUCE("const_expr->expr");
}
;

expr:		unary '=' expr	
{
    REDUCE("expr->unary '=' expr");
    $$ = $1->type;
}
| or_expr	
{
    REDUCE("expr->or_expr");
    $$ = $1;
}
;

or_expr:	or_list		
{
    REDUCE("or_expr->or_list");
    $$ = $1;
}
;

or_list:	or_list LOGICAL_OR and_expr	
{
    REDUCE("or_list->or_list LOGICAL_OR and_expr");
    $$ = findDeclByStr("int");
}
| and_expr	
{
    REDUCE("or_list->and_expr");
    $$ = $1;
}
;

and_expr:	and_list	
{
    REDUCE("and_expr->and_list");
    $$ = $1;
}
;

and_list:	and_list LOGICAL_AND binary	
{
    REDUCE("and_list->and_list LOGICAL_AND binary");
    $$ = findDeclByStr("int");
}
| binary	
{
    REDUCE("and_list->binary");
    $$ = $1;
}
;

binary:		binary RELOP binary	
{
    REDUCE("binary->binary RELOP binary");
    $$ = findDeclByStr("int");
}
| binary EQUOP binary	
{
    REDUCE("binary->binary EQUOP binary");
    $$ = findDeclByStr("int");
}
| binary '+' binary	
{
    REDUCE("binary->binary '+' binary");
}
| binary '-' binary	
{
    REDUCE("binary->binary '-' binary");
}
| unary	%prec '='	
{
    REDUCE("binary->unary");
    if($1){                     
        int isConst = checkIsConst($1);     
        int isVar = checkIsVar($1);          
        if(isConst == SUCCESS || isVar ==SUCCESS ){
            $$ = $1 -> type;
        }else{ 	                       
            semErr(RHS_NOT_VAR_CONST);
            $$ = NULL;                                            	        	                                               
        }                            
    }else{                                              
        $$ = NULL;                                    
    }    
}
;

unary:		'(' expr ')'	{
    REDUCE("unary->'(' expr ')'");

}
| '(' unary ')'	{
    REDUCE("unary->'(' unary ')'");
}
| INTEGER_CONST	{
    REDUCE("unary->INTEGER_CONST");
    struct decl* constDecl = makeConstDecl(NULL, $1);
    constDecl->type = findDeclByStr("int");
    $$ = constDecl;
}
| CHAR_CONST	{
    REDUCE("unary->CHAR_CONST");
    struct decl* constDecl = makeCharConstDecl($1);
    constDecl->type = findDeclByStr("char");
    $$ = constDecl;
}
| ID	{
    //printf("unary->ID %s \n", $1);
    REDUCE("unary->ID");
    $$ = findDecl($1);
    if($$ == NULL){
        semErr(NOT_DECLARED);
    }

}
| STRING	{
    //printf("unary->STRING %s \n", $1);
    REDUCE("unary->STRING");
    $$ = makeCharConstDecl($1);	
}
| '-' unary %prec '!'	{
    REDUCE("unary->'-' unary");
    if( checkIsVar($2) == SUCCESS){
        semErr(checkIsInt($2->type));
    }else{
        semErr(checkIsVar($2));
    }
    $$ = $2;
    ;
}
| '!' unary  
{
    REDUCE("unary->'!' unary");
}
| unary INCOP 
{
    REDUCE("unary->unary INCOP");
}
| unary DECOP	
{
    REDUCE("unary->unary DECOP");
}	
| INCOP unary 
{
    REDUCE("unary->INCOP unary ");
}
| DECOP unary 
{
    REDUCE("unary->DECOP unary ");
}
| '&' unary %prec '!'	
{
    REDUCE("unary->'&' unary");
}
| '*' unary %prec '!'	
{
    REDUCE("unary->'*' unary");
}		//<= The type of unary is pointer.
| unary '[' expr ']'	
{
    REDUCE("unary->unary '[' expr ']'");
}//	<= The type of expr is integer.
| unary '.' ID	
{
    REDUCE("unary->unary '.' ID");
}//	<= The type of unary is a struct.
| unary STRUCTOP ID	
{
    REDUCE("unary->unary STRUCTOP ID");
}//	<= The type of unary is a struct.
| unary '(' args ')' 
{
    REDUCE("unary->unary '(' args ')'");
}//	<= The type of unary is a function.
| unary '(' ')'	
{
    REDUCE("unary->unary '(' ')'");
}
;

args:		expr	
{
    REDUCE("args->expr");
}
| args ',' expr		
{
    REDUCE("args->args ',' expr");
}
;
%%

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

