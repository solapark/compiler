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
%left	'*' '/' '%'
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
        errNum = declare($3, makeConstDecl(makeArrDecl(makePtrDecl($1)), 0));
    }else{
        errNum = declare($3, makeConstDecl(makeArrDecl($1), 0));
    }
    semErr(errNum);
}
| func_decl ';' 
{
    REDUCE("ext_def->func_decl ';' ");
    if($1){
        //1. pushScope && insert formals to symbol table.
        pushScope();
        pushSteList($1->formals);
        $1 -> formals = $1 -> formals->prev;
        //2. pop scope to remove funcion's local vars.
        popScope();
        //3. make constReturnDecl for function call. 
        struct decl* declRetType=$1->returnType;
        $1->returnType = makeConstDecl(declRetType, 0);
    }else{
        $$ = NULL;
    }
}
| type_specifier ';' 
{
    REDUCE("ext_def->type_specifier ';' ");
    //do nothing
}
| func_decl '{' 
{
    REDUCE("ext_def->func_decl '{' local_defs stmt_list '}'");
    if($1 != NULL){
        //1. pushScope && insert formals to symbol table.
        pushScope();
        pushSteList($1->formals);
        $1 -> formals = $1 -> formals->prev;
    }
} 
local_defs stmt_list '}' 
{
    if($1 != NULL){
        //2. pop scope to remove funcion's local vars.
        popScope();
        //3. make constReturnDecl for function call. 
        struct decl* declRetType=$1->returnType;
        $1->returnType = makeConstDecl(declRetType, 0);
    }else{
        $$ = NULL;
    }
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
    if($1){
        $$ = $1;
    }else{
        $$ = NULL;
    }
}
;

struct_specifier: STRUCT ID '{' 
{
    REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
    pushScope();
}
def_list '}'  
{
    struct ste *fields = popScope();
    struct decl *curDecl = findDecl($2);
    if(curDecl==NULL){
        declare($2, ($$ = makeStructDecl(fields)));      
        removeTopSte();
    }else{
        semErr(REDECL);
        $$ = NULL;
    }
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
            semErr(NOT_STRUCT);
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
     if($1 == NULL){
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
            //5. save formals list
            struct ste *formals = popScope();
            //6. save return type.
            funcDecl->returnType = formals->decl;
            funcDecl->formals = formals;
            $$ = funcDecl;
        }else{	
            semErr(REDECL);
            $$ = NULL;	
        }      
    }

}
| type_specifier pointers ID '(' VOID ')'	
{
    REDUCE("funct_decl->type_specifier pointers ID '(' VOID ')'");
     if($1 == NULL){
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
            //5. save formals list
            struct ste *formals = popScope();
            //6. save return type.
            funcDecl->returnType = formals->decl;
            funcDecl->formals = formals;
            $$ = funcDecl;
        }else{	
            semErr(REDECL);
            $$ = NULL;	
        }      
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
                semErr(REDECL);
                removeTopSte();
                $$ = NULL;
            }else{
                //6. save return type.
                funcDecl->returnType = formals->decl;
                funcDecl->formals = formals;
                $$ = funcDecl;	
            }
        }else{	
            semErr(REDECL);
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
    if($1 && $5){
        if($2 == 1){
            $$ = makeSte($3, makeConstDecl(makeArrDecl(makePtrDecl($1)), 0));
        }else{
            $$ = makeSte($3, makeConstDecl(makeArrDecl($1), 0));
        }
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
        $$ = NULL;
    }
    else{
        $$ = NULL;
    }
} | type_specifier pointers ID '[' const_expr ']' ';'	{
    REDUCE("def->type_specifier pointers ID '[' const_expr ']' ';'");
    if($1){
    int errNum;
    if($2 == 1){
        errNum = declare($3, makeConstDecl(makeArrDecl(makePtrDecl($1)), 0));
    }else{
        errNum = declare($3, makeConstDecl(makeArrDecl($1), 0));
    }
    semErr(errNum);
    }else{
        $$ = NULL;
    }
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
    if($1){
        if(checkIsInt($1) == SUCCESS){
            $$ = $1;
        }else{
            semErr(NOT_INT);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
;

expr:		unary '=' expr	
{
    REDUCE("expr->unary '=' expr");
    if($1 && $3){
        if(checkIsVar($1) == SUCCESS){
            if(checkCompatible($1->type, $3) == SUCCESS){
                $$ = $1->type;
            }else{
                semErr(LHS_RHS_NOT_SAME_TYPE);
                $$ = NULL;
            }
        }else{
            semErr(LHS_NOT_VAR);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| or_expr	
{
    REDUCE("expr->or_expr");
    if($1){
        $$ = $1;
    }else{
        $$ = NULL;
    }
}
;

or_expr:	or_list		
{
    REDUCE("or_expr->or_list");
    if($1){
        $$ = $1;
    }else{
        $$ = NULL;
    }
}
;

or_list:	or_list LOGICAL_OR and_expr	
{
    REDUCE("or_list->or_list LOGICAL_OR and_expr");
    if($1 && $3){
        if(checkIsInt($1)==SUCCESS && checkIsInt($3)==SUCCESS){
            $$ = findDeclByStr("int");
        }else{
            semErr(NOT_INT);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| and_expr	
{
    REDUCE("or_list->and_expr");
    if($1){
        $$ = $1;
    }else{
        $$ = NULL;
    }
}
;

and_expr:	and_list	
{
    REDUCE("and_expr->and_list");
    if($1){
        $$ = $1;
    }else{
        $$ = NULL;
    }
}
;

and_list:	and_list LOGICAL_AND binary	
{
    REDUCE("and_list->and_list LOGICAL_AND binary");
    if($1 && $3){
        if(checkIsInt($1)==SUCCESS && checkIsInt($3)==SUCCESS){
            $$ = findDeclByStr("int");
        }else{
            semErr(NOT_INT);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| binary	
{
    REDUCE("and_list->binary");
    if($1){
        $$ = $1;
    }else{
        $$ = NULL;
    }
}
;

binary:		binary RELOP binary	
{
    REDUCE("binary->binary RELOP binary");
    if($1 && $3){
        if((checkIsChar($1) == SUCCESS && checkIsChar($3) == SUCCESS)
                || (checkIsInt($1) == SUCCESS && checkIsInt($3)== SUCCESS)){
            $$ = findDeclByStr("int"); 
        }else{
            semErr(NOT_INT_CHAR);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| binary EQUOP binary	
{
    REDUCE("binary->binary EQUOP binary");
    if($1 && $3){
        if((checkIsChar($1) == SUCCESS && checkIsChar($3) == SUCCESS) || (checkIsInt($1) == SUCCESS && checkIsInt($3)== SUCCESS) || (checkIsPtr($1) == SUCCESS && checkIsPtr($3)== SUCCESS)){
            $$ = findDeclByStr("int"); 
        }else{
            semErr(NOT_INT_CHAR_PTR);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| binary '*' binary	
{
    REDUCE("binary->binary '*' binary");
    if($1 != NULL && $3 != NULL){
        struct decl* plusResult = plusType($1, $3);
        if(plusResult){
            $$ =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| binary '/' binary	
{
    REDUCE("binary->binary '/' binary");
    if($1 != NULL && $3 != NULL){
        struct decl* plusResult = minusType($1, $3);
        if(plusResult){
            $$ =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| binary '%' binary	
{
    REDUCE("binary->binary '%' binary");
    if($1 != NULL && $3 != NULL){
        struct decl* plusResult = minusType($1, $3);
        if(plusResult){
            $$ =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| binary '+' binary	
{
    REDUCE("binary->binary '+' binary");
    if($1 != NULL && $3 != NULL){
        struct decl* plusResult = plusType($1, $3);
        if(plusResult){
            $$ =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| binary '-' binary	
{
    REDUCE("binary->binary '-' binary");
    if($1 != NULL && $3 != NULL){
        struct decl* plusResult = minusType($1, $3);
        if(plusResult){
            $$ =plusResult;
        }else{
            semErr(NOT_COMPUTABLE);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
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

unary:		'(' expr ')'	
{
    REDUCE("unary->'(' expr ')'");
    if($2){
        $$ = makeConstDecl($2, 0);
    }else{
        $$ = NULL;
    }

}
| '(' unary ')'	{
    REDUCE("unary->'(' unary ')'");
    if($2){
        $$ = $2;
    }else{
        $$ = NULL;
    }
}
| INTEGER_CONST	{
    REDUCE("unary->INTEGER_CONST");
    struct decl* constDecl = makeIntConstDecl($1);
    //constDecl->type = findDeclByStr("int");
    $$ = constDecl;
}
| CHAR_CONST	{
    REDUCE("unary->CHAR_CONST");
    struct decl* constDecl = makeCharConstDecl($1);
    //constDecl->type = findDeclByStr("char");
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
| '-' unary %prec '!'	
{
    REDUCE("unary->'-' unary");
    if($2 != NULL){
        int errNum = checkIsInt($2->type);
        if(errNum == SUCCESS){
            $$ = $2;
        }else{
            semErr(errNum);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| '!' unary  
{
    REDUCE("unary->'!' unary");
    if($2){
        if(checkIsInt($2 -> type) == SUCCESS){
            $$ = $2;
        }else{
            semErr(NOT_INT);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| unary INCOP 
{
    REDUCE("unary->unary INCOP");
    if($1 != NULL){
        int errNum = checkIsIntOrChar($1->type);
        if(errNum == SUCCESS){
            $$ = $1;
        }else{
            semErr(errNum);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| unary DECOP	
{
    REDUCE("unary->unary DECOP");

    if($1 != NULL){
        int errNum = checkIsIntOrChar($1->type);
        if(errNum == SUCCESS){
            $$ = $1;
        }else{
            semErr(errNum);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }


}	
| INCOP unary 
{
    REDUCE("unary->INCOP unary ");
    if($2 != NULL){
        int errNum = checkIsIntOrChar($2->type);
        if(errNum == SUCCESS){
            $$ = $2;
        }else{
            semErr(errNum);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| DECOP unary 
{
    REDUCE("unary->DECOP unary ");
    if($2 != NULL){
        int errNum = checkIsIntOrChar($2->type);
        if(errNum == SUCCESS){
            $$ = $2;
        }else{
            semErr(errNum);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| '&' unary %prec '!'	
{
    REDUCE("unary->'&' unary");
    if($2){
        if(checkIsVar($2) == SUCCESS || (checkIsConst($2)==SUCCESS&&checkIsArray($2->type)==SUCCESS)){
            $$ = makeConstDecl(makePtrDecl($2->type), 0);
        }else{
            semErr(NOT_VAR_CONST);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}
| '*' unary %prec '!'	
{
    REDUCE("unary->'*' unary");
    if($2){
        int errNum = checkIsPtr($2->type);
        if(errNum == SUCCESS){
            $$ = makeConstDecl($2->type->ptrTo, 0);
        }else{
            semErr(NOT_PTR);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}		//<= The type of unary is pointer.
| unary '[' expr ']'	
{
    REDUCE("unary->unary '[' expr ']'");
    if($1  && $3 ){
        if(checkIsArray($1->type) == SUCCESS){
            if(checkIsInt($3) == SUCCESS){
                $$ = $1->type->elementVar;
            }else{
                semErr(NOT_INT);
                $$ = NULL;
            }
        }else{
            semErr( NOT_ARRAY);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}//	<= The type of expr is integer.
| unary '.' ID	
{
    REDUCE("unary->unary '.' ID");
    if($1 != NULL && $3 != NULL ){
        if(checkIsStruct($1->type) == SUCCESS){
            struct decl* fieldPtr = structAccess($1->type, $3);
            if(fieldPtr){
                $$ = fieldPtr;
            }else{
                semErr(NOT_STRUCT_FIELD);
                $$ = NULL;
            }
        }else{
            semErr(NOT_STRUCT);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}//	<= The type of unary is a struct.
| unary STRUCTOP ID	
{
    REDUCE("unary->unary STRUCTOP ID");
    if($1 != NULL && $3 != NULL ){
        if(checkIsPtr($1->type) == SUCCESS){
            if(checkIsStruct($1->type->ptrTo) == SUCCESS){
                struct decl* fieldPtr = structAccess($1->type->ptrTo, $3);
                if(fieldPtr){
                    //printf("fieldPtr->declClass = %d, fieldPtr->type->typeClass = %d\n", fieldPtr->declClass, fieldPtr->type->typeClass);
                    $$ = fieldPtr;
                }else{
                    semErr(NOT_STRUCT_FIELD);
                    $$ = NULL;
                }
            }else{
                semErr(NOT_STRUCT);
                $$ = NULL;
            }
        }else{
            semErr(NOT_PTR);
            $$ = NULL;
        }
    }else{
        $$ = NULL;
    }
}//	<= The type of unary is a struct.
| unary '(' args ')' 
{
    REDUCE("unary->unary '(' args ')'");
    if($1 && $3) {
        if(checkIsFunc($1) == SUCCESS){
            struct decl* returnConstDecl = checkFunctionCall($1, $3);
            if(returnConstDecl){
                $$=returnConstDecl;
            }else{
                semErr(NOT_FORMAL_ARGS);
                $$ = NULL;
            } 
        }else{
            semErr(NOT_FUNC);
            $$ = NULL;
        }
    }else{
        $$ =NULL;
    }
    resetArgList();
}//	<= The type of unary is a function.
| unary '(' ')'	
{
    REDUCE("unary->unary '(' ')'");
    if($1 != NULL ){
        if(checkIsFunc($1) == SUCCESS){
            checkIsFunc($1);
            struct decl* returnConstDecl = checkFunctionCall($1, NULL);
            if(returnConstDecl){
                $$=returnConstDecl;
            }else{
                semErr(NOT_FORMAL_ARGS);
                $$ = NULL;
            }
        }else{
            semErr(NOT_FUNC);
            $$ = NULL;
        }

    }else{
        $$ =NULL;
    }
}
;

args:		expr	
{
    REDUCE("args->expr");
    if($1 != NULL){
        $$ =  addArg($1);
    }else{
        printf("expr = NULL\n");
        $$ = NULL;
    }
}
| args ',' expr		
{
    REDUCE("args->args ',' expr");
    if($1 != NULL && $3 != NULL){
        $$ =  addArg($3);
    }else{
        printf("expr = NULL\n");
        $$ = NULL;
    }

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

