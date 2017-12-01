#include "subc.h"

static struct ste *symbolTableHead;
static struct node *ssTop;
static struct node *typeListHead;

/* For symbol table */
void initType(){
	symbolTableHead = NULL;
	ssTop=NULL;
	typeListHead = NULL;

	pushScope();
	struct decl *intType, *voidType, *charType; 
	intType = makeTypeDecl(DECL_TYPE_INT);
	voidType = makeTypeDecl(DECL_TYPE_VOID);
	charType = makeTypeDecl(DECL_TYPE_CHAR);

	declare(enter(0, "int", 3), intType);	
	declare(enter(0, "void", 4), voidType);
	declare(enter(0, "char", 4), charType);
	enter(0, "returnId", 8);

}

void pushScope(){
	printf("\n\n*******PUSH SCOPE*******\n\n");
	//1. Make new stack entry.
	struct node *newNodePtr = (struct node*) malloc(sizeof(struct node));

	//2. Check if there's entry in stack.
	if(ssTop ) 
	{
		//assign ste pointed by stack top to new stack entry.
		newNodePtr->data = ssTop->data; 
	}

	//add new stack entry to stack.	
	addToHead(&ssTop, newNodePtr);

	//print scope stack
	//printf("*****scope Stack******\n");
	//printList(&ssTop);	

}

struct ste* popScope(){
	printf("\n\n*******POP SCOPE*******\n\n");
	//1. Save poped ste list.
	struct node* popedTop=ssTop;

	//2. Recover stack top.	
	removeFromHead(&ssTop);

	//3. change head of symbol table.
	symbolTableHead = ssTop->data;

	//4. Set prev of poped tail to NULL.
	struct ste* curStePtr = popedTop->data; 
	struct ste* pointedByFinal = ssTop->data; 
	if(curStePtr->scope == ssTop){
		printf("no var in scope.\n");
		//printf scope stack 
		printf("*****scope Stack******\n");
		printList(&ssTop);	
		return NULL;
	}else{	
		while(curStePtr->prev->scope==popedTop){
			curStePtr=curStePtr->prev;
		}
		curStePtr->prev = NULL;
	}
	//5. Reverse STE.
	popedTop -> data = reverseSte(popedTop->data);
	//print poped stes.
	//printf("*****poped ste******\n");
	//printSymbolTable(popedTop->data);

	//printf scope stack 
	//printf("*****scope Stack******\n");
	//printList(&ssTop);

	return popedTop->data;

}

void changeSSTopPnting(struct ste* newSte){
	//1. Change ste ssTop is pointing to.
	newSte->prev = ssTop->data;
	ssTop->data = newSte;
}

struct ste* lookupSymbol(struct id* name){
	//1. find symbol in symbol table.
	struct ste* curSte = symbolTableHead;
	if(curSte != NULL){
		while(curSte->prev != NULL){
			if(curSte->name == name){
				return curSte;
			}
			curSte = curSte -> prev;
		}
		if(curSte -> name == name){
			return curSte;
		}
	}	

	//2. find symbol in type list.
	struct node* curTle = typeListHead;
	if(curTle!=NULL){
		struct node* tailTle = curTle->prev;

		struct ste* curTleSte = curTle -> data; 
		while(curTle != tailTle){//if not tail,
			if(curTleSte -> name == name){
				return curTleSte;
			}
			curTle = curTle->next;
			curTleSte = curTle-> data;
		}
		curTleSte = curTle -> data;
		if(curTleSte->name == name){
			return curTleSte;
		}
	} 

	return NULL;
}

int checkIsRedecl(struct id* name){
	//printf("check is redecl\n");
        struct ste* curSte = symbolTableHead;
        while(curSte && curSte->scope == ssTop){
               if(curSte->name == name){
			printf("redecl in scope\n");
                        return 1;
               }
               curSte = curSte -> prev;
        }

	//2. find symbol in type list.
	struct node* curTle = typeListHead;
	if(curTle!=NULL){
		struct node* tailTle = curTle->prev;

		struct ste* curTleSte = curTle -> data; 
		while(curTle != tailTle){//if not tail,
			if(curTleSte -> name == name){
				printf("redecl in type\n");
				return 1;
			}
			curTle = curTle->next;
			curTleSte = curTle-> data;
		}
		curTleSte = curTle -> data;
		if(curTleSte->name == name){
			printf("redecl in type\n");
			return 1;
		}
	} 

	return 0;
}

int declare(struct id* name, struct decl* type){
	//printf("declare************\n");	
	//1. Check redeclaration.
	if( checkIsRedecl(name)){
		return REDECL;
	} 

	//2. Add new ste to symbol table. 
	struct ste* newSte = (struct ste*) malloc(sizeof(struct ste));
	newSte -> name = name;
	newSte -> decl = type; 		
	newSte -> prev = symbolTableHead;

	symbolTableHead = newSte;

	//3. if (decl==struct||int||void||char), add ste to typeList
	int typeClass = type->typeClass;
	if( typeClass== DECL_TYPE_STRUCT||typeClass== DECL_TYPE_INT||typeClass== DECL_TYPE_VOID||typeClass== DECL_TYPE_CHAR){
		if(name != enter(0, "returnId", 8)){
			struct node* newNode = (struct node*) malloc(sizeof(struct node));
			newNode->data = newSte;
			addToHead(&typeListHead, newNode);
			//printf("*****type List******\n");
			//printList(&typeListHead);	
		}
	}

	//4. add ste to scope stack && set ste scope.
	setSteScope();
	//printf("*****scope Stack******\n");
	//printList(&ssTop);

	//5. print symbol table 
	printSymbolTable(symbolTableHead);

	return SUCCESS;
}

void setSteScope(){
	//1. add new ste to scope stack
	ssTop->data = symbolTableHead;
	//2. set scope of new ste.
	symbolTableHead->scope = ssTop; 
	//printf("ssTop :%p\n", ssTop);
}

int pushSteList(struct ste* steList){
	struct ste* curSte = steList;
    int errorNum=SUCCESS;
	while(curSte){
		errorNum = declare(curSte->name, curSte->decl);
        if(errorNum != SUCCESS){
            return errorNum;
        }
		curSte = curSte->prev;
	}
    return SUCCESS;
}

struct ste* makeSte(struct id* namePtr, struct decl* declPtr) {
    struct ste* stePtr = (struct ste*) malloc(sizeof(struct ste));
    stePtr->name = namePtr;
    stePtr->decl = declPtr;
    return stePtr;
}

void removeTopSte(){
    //1. remove from symbol table
    symbolTableHead = symbolTableHead->prev;
    //2. remove from scope stack.
    ssTop->data = symbolTableHead;
}

//Make Var decl.
struct decl* makeVarDecl(struct decl* varType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_VAR;
	declPtr->type = varType;
	return declPtr; 
}

//Make CHAR const declaration struct.
struct decl* makeCharConstDecl(char* str){
	//1. Make const decl.
	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_CONST;
	declPtr->charValue = str;
    declPtr->type = findDeclByStr("char");
 
	return declPtr;
}
//Make const declaration struct.
struct decl* makeConstDecl(struct decl* arrDecl, int intValue){
	//1. Make const decl.
	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_CONST;

	//2-1. if it's arrary, assign arrDecl to type.
	if(arrDecl){
		declPtr->type = arrDecl;
	}
	//2-2. else assign intValue to value.
	else{
		declPtr->value = intValue;
        declPtr->type = findDeclByStr("int");
	}
 
	return declPtr;
}

//Make Func decl.
struct decl* makeFuncDecl(){
	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_FUNC;
	return declPtr; 
}

//Make type decl(int, void, char)
struct decl* makeTypeDecl(int typeClass){
	struct decl* declptr = (struct decl*) malloc(sizeof(struct decl));	
	declptr->declClass = DECL_TYPE;
	declptr->typeClass = typeClass;
	return declptr;
}

//Make type decl(array)
struct decl* makeArrDecl(int elementNum, struct decl* elementType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->typeClass = DECL_TYPE_ARRAY;
	declPtr->type = elementType;
	declPtr->numIndex = elementNum;
	return declPtr; 
}

//Make type decl(ptr)
struct decl* makePtrDecl(struct decl* pointingType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->type = pointingType;
	declPtr->typeClass = DECL_TYPE_PTR;
	return declPtr; 
}

//Make type decl(struct)
struct decl* makeStructDecl(struct ste* fieldList){
	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->typeClass = DECL_TYPE_STRUCT;
	declPtr->fieldList = fieldList;
	return declPtr; 
}

/*
void addTypeToVar(struct decl* type, struct decl* varListHead){
	//check if the varList is empty.	
	if(varListHead == NULL){
		printf("There's no VarList.\n");
		return;
	}
	//assign correct type to entry of valList.	
	struct decl* curVar = varListHead;
	while(curVar->next != NULL){
		curVar->type = type;
		curVar = curVar->next;
	}
	curVar->type = type;	
}
*/

/*
struct decl* findCurDecl(struct decl* declPtr){
}
*/

int checkIsVar(struct decl* declPtr){
	if(declPtr == NULL || declPtr->declClass != DECL_VAR){
		return (NOT_VAR);	
	}
	return SUCCESS;
} 

int checkIsConst(struct decl* declPtr){
	if(declPtr == NULL || declPtr->declClass != DECL_CONST){
		return NOT_CONST;	
	}
	return SUCCESS;
} 

int checkIsFunc(struct decl* declPtr){
	if(declPtr == NULL || declPtr->declClass != DECL_FUNC){
		return NOT_FUNC;	
	}
	return SUCCESS;
} 

int checkIsType(struct decl* declPtr){
	if(declPtr == NULL || declPtr->declClass != DECL_TYPE){
		return NOT_TYPE;	
	}
	return SUCCESS;
}
int checkIsInt(struct decl* declPtr){
	if(declPtr == NULL || declPtr->declClass != DECL_TYPE || declPtr->typeClass != DECL_TYPE_INT){
		return NOT_INT;	
	}
	return SUCCESS;
}
int checkIsArray(struct decl* declPtr){
	if(declPtr == NULL || declPtr->typeClass != DECL_TYPE_ARRAY){
		return NOT_ARRAY;	
	}
	return SUCCESS;
}

int checkIsPtr(struct decl* declPtr){
	if(declPtr == NULL || declPtr->typeClass != DECL_TYPE_PTR){
		return NOT_PTR;	
	}
	return SUCCESS;
}

int checkIsStruct(struct decl* declPtr){
	if(declPtr == NULL || declPtr->typeClass != DECL_TYPE_STRUCT){
		return NOT_STRUCT;	
	}
	return SUCCESS;
}

void printSymbolTable(struct ste* head){
	struct ste* curSte = head;
	if(curSte != NULL){
		int leng;
		printf("****symbol table****\n"); 
		printf("name\t\tdecl\ttype\tvarType\n");
		while(curSte->prev != NULL){
			leng = curSte->name->leng;
			printf("%.*s\t\t%d\t%d\t", leng, curSte->name->name, curSte->decl->declClass, curSte->decl->typeClass);
			if(curSte->decl->type){
				printf("%d\t",curSte->decl->type->typeClass);
			}
			printf("\n");
			curSte = curSte->prev;
		}
		leng = curSte->name->leng;
		printf("%.*s\t\t%d\t%d\n", leng, curSte->name->name, curSte->decl->declClass, curSte->decl->typeClass);


	printf("******************\n\n");
	}
}


void printList(struct node **head){
	struct node* curNode = *head;
	if(curNode != NULL&&curNode -> data != NULL){
		struct ste* stePtr;
		int leng;
		while(checkIsTail(head,curNode) ==0){
			stePtr = curNode->data;
			leng = stePtr->name->leng;
			printf("%.*s\n", leng, stePtr->name->name);
			curNode = curNode->next;
		}
		stePtr = curNode->data;
		leng = stePtr->name->leng;
		printf("%.*s\n", leng, stePtr->name->name);
	}
	printf("******************\n\n");
}

void addToTail(struct node **head, struct node *newNode) {
	if (*head) {
		newNode -> prev = (*head) -> prev;
		(newNode -> prev) -> next = newNode;
		newNode  -> next = (*head);
		(newNode -> next ) -> prev = newNode;
	} else {
		(*head) = newNode;
		newNode -> prev = newNode;
		newNode -> next = newNode;
	}
}

void addToHead(struct node **head, struct node *newNode) {
	if ((*head)) {
		//printf("head not NULL\n"); 
		newNode -> prev = (*head) -> prev;
		newNode  -> next = (*head);
		newNode  -> prev -> next = newNode ;
		newNode  -> next -> prev = newNode ;
		(*head) = newNode ;
	} else {
		//printf("head NULL\n");	
		(*head) = newNode ;
		newNode  -> prev = newNode ;
		newNode  -> next = newNode ;
	}
}

void removeFromHead(struct node **head){
	if (checkIsListEmpty(head)!=1) {
		if(checkIsTail(head, *head)){//if there's only one struct node int list.
			resetList(head); //remove it.
		}else{
			(*head) ->prev->next = (*head) ->next;
			(*head)->next->prev = (*head) -> prev;
			(*head) = (*head) -> next;
		}	
	} else {//if there's no struct node in list, do nothing.
	}
}


void resetList (struct node **head){
	(*head) = NULL;
}

int checkIsListEmpty (struct node **head){
	if((*head) == NULL)
		return 1;
	else
		return 0;
}

int checkIsTail (struct node **head, struct node* targetNode){
	if((*head) == targetNode->next)
		return 1;
	else
		return 0;
}

/*
struct node* findPointingTo(struct node** head, struct node* targetNode){
	struct node* curNodePtr = (*head);

	if(curNodePtr == targetNode){
		return curNodePtr;
	}

	while(checkIsTailNode(head, curNodePtr)==0){
		if(curNodePtr->next == targetNode){
			return curNodePtr;
		}
		curNodePtr = curNodePtr->next;
	}
}
*/

struct node* getTail(struct node** head){
	struct node* curNodePtr = (*head);
	if(curNodePtr==NULL){
		return NULL;
	}

	while(checkIsTail(head, curNodePtr)==0){
		curNodePtr = curNodePtr->next;
	}
}

struct ste* reverseSte(struct ste* steList){
	if(steList == NULL||steList->prev==NULL){
		return	steList;
	}	

	struct ste* newHead;
	newHead = recurReverSte(steList);
	//printf("new Head : %s\n" , newHead->name->name);

	steList->prev = NULL;
	return newHead;
}

struct ste* recurReverSte(struct ste* steList){
	if(steList->prev->prev == NULL){
		struct ste* newHead = steList -> prev;
		//printf("tail ->name : %s\n", newHead->name->name);
		steList->prev->prev = steList;
		return newHead;
	}else{
		struct ste* newHead = recurReverSte(steList->prev);
		steList->prev->prev = steList;
		return newHead;
	}
}

struct decl* findDecl(struct id* name){
	struct ste* curSte = lookupSymbol(name);
	if(curSte == NULL){
		//printf("thers no decl\n");
		return NULL;	
	}	
	return curSte->decl;
}
struct decl* findDeclByStr(char* name){
	struct id* curId = enter(0, name, strlen(name));
	struct ste* curSte = lookupSymbol(curId);
	if(curSte == NULL){
		printf("thers no decl\n");
		return NULL;	
	}	
	return curSte->decl;
}

int checkSameType(struct decl* decl1, struct decl* decl2){
    //printf("decl1->typeClass = %d, decl2->typeClass = %d\n", decl1->typeClass, decl2->typeClass);
    if(decl1== decl2){
        return SUCCESS;
    }else{
        return WRONG_RETURN_VALUE;
    }
}

struct decl* plusType(struct decl* typeDecl1, struct decl* typeDecl2){
    if(typeDecl1->typeClass == DECL_TYPE_INT && typeDecl2->typeClass == DECL_TYPE_INT){
        return findDeclByStr("int");
    }else{
        return NULL;
    }
}

struct decl* minusType(struct decl* typeDecl1, struct decl* typeDecl2){
    if(typeDecl1->typeClass == DECL_TYPE_INT && typeDecl2->typeClass == DECL_TYPE_INT){
        return findDeclByStr("int");
    }else{
        return NULL;
    }
}

void semErr(int errNum){
	if(errNum == SUCCESS ){
        //printf("SUCCESS\n");
		return;
	}else{
		printf("+++++++++++++++%d: error: ", read_line());
		switch(errNum){
		case NOT_DECLARED :            
			printf("NOT_DECLARED \n");
			break;                 
		case REDECL:                  		
			printf("REDECL\n");
			break;                 
		case NOT_SAME_TYPE:           
			printf("NOT_SAME_TYPE\n");
			break;                 
		case LHS_NOT_VAR:             
			printf("LHS_NOT_VAR\n");
			break;                 
		case RHS_NOT_VAR_CONST:       
			printf("RHS_NOT_VAR_CONST\n");
			break;                 
		case NOT_STRUC_FIELD:         
			printf("NOT_STRUC_FIELD\n");
			break;                 
		case INCOMPLETE_STRUCT:       
			printf("INCOMPLETE_STRUCT\n");
			break;                 
		case WRONG_RETURN_VALUE:      
			printf("WRONG_RETURN_VALUE\n");
			break;                 
		case MULTIPLE_RETURN_TYPE:    
			printf("MULTIPLE_RETURN_TYPE\n");
			break;                 
		case IMCOPATIBLE_COMPARE:     
			printf("IMCOPATIBLE_COMPARE\n");
			break;                 
		case NOT_COMPUTABLE: 
			printf("NOT_COMPUTABLE\n");
			break;                 
		case NOT_VAR:        
			printf("NOT_VAR\n");
			break;                 
		case NOT_CONST_VAR:  
			printf("NOT_CONST_VAR\n");
			break;                 
		case NOT_PROPER_TYPE:
			printf("NOT_PROPER_TYPE\n");
			break;                 
		case NOT_FORMAL_ARGS:
			printf("NOT_FORMAL_ARGS\n");
			break;                 
		case NOT_CONST: 
			printf("NOT_CONST\n");
			break;                 
		case NOT_FUNC:  
			printf("NOT_FUNC\n");
			break;                 
		case NOT_TYPE:  
			printf("NOT_TYPE\n");
			break;                 
		case NOT_INT:   
			printf("NOT_INT\n");
			break;                 
		case NOT_VOID:  
			printf("NOT_VOID\n");
			break;                 
		case NOT_CHAR : 
			printf("NOT_CHAR\n");
			break;                 
		case NOT_ARRAY: 
			printf("NOT_ARRAY\n");
			break;                 
		case NOT_PTR:   
			printf("NOT_PTR\n");
			break;                 
		case NOT_STRUCT:
			printf("NOT_STRUCT\n");
			break;                 
		defualt :
			printf("not success, but no matching error num\n");
		}
	}
}

