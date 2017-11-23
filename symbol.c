#include "subc.h"

static struct symbolTable *symbolTPtr;
static struct scopeStack *scopeSPtr;

/* For symbol table */
void initType(){
	struct decl* intType, voidType, charType; 
	intType = makeTypeDecl(DECL_TYPE_INT);
	voidType = makeTypeDecl(DECL_TYPE_VOID);
	charType = makeTypeDecl(DECL_TYPE_CHAR);
	
}
void pushScope(){
}
struct ste* popScope(){
}
void insert(struct id* name, struct decl* type){
}
struct ste* lookupSymbol(struct id* name){
}



void declare(struct id* name, struct decl* type){
}


//Make type decl
struct decl* makeTypeDecl(int typeClass){
	struct decl* declptr = (struct decl*) malloc(sizeof(struct decl));	
	declptr->declClass = DECL_TYPE;
	declptr->typeClass = typeClass;
	return declptr;
}

//Make Var decl.
struct decl* makeVarDecl(struct decl* varType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_VAR;
	declPtr->type = varType;
	return declPtr; 
}
//Make const declaration struct.
struct decl* makeConstDecl(struct decl* arrDecl){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_CONST;
	declPtr->type = arrDecl;
	return declPtr; 

}
struct decl* makeArrDecl(int elementNum, struct decl* elementType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->typeClass = DECL_TYPE_ARRAY;
	declPtr->type = elementType;
	declPtr->numIndex = elementNum;
	return declPtr; 
}
struct decl* makePtrDecl(struct decl* pointingType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->type = pointingType;
	return declPtr; 

}

struct decl* makeStructDecl(struct ste* fieldList){
	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->fieldList = fieldList;
	return declPtr; 
}

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

struct decl* findCurDecl(struct decl* declPtr){
}

void checkIsType(struct decl* declPtr){
	if(declPtr->declClass != DECL_TYPE){
	printf("error. declClass is notTYPE.\n");  
	}
}
 
void checkIsVar(struct decl* declPtr){
	if(declPtr->declClass != DECL_TYPE){
	printf("error. declClass is notTYPE.\n"); 
	}
} 
void checkIsConst(struct decl* declPtr){
	if(declPtr->declClass != DECL_CONST){
	printf("error. declClass is notCONST.\n"); 
	}
} 
void checkIsArr(struct decl* declPtr){
	if(declPtr->declClass != DECL_TYPE ||declPtr->typeClass != DECL_TYPE_ARRAY){
	printf("error. declClass is notARRAY.\n"); 
	}
} 
void checkIsPtr(struct decl* declPtr){
	if(declPtr->declClass != DECL_TYPE || declPtr->typeClass != DECL_TYPE_PTR){
	printf("error. declClass is notPOINTER.\n"); 
	}
} 
void checkIsStruct(struct decl* declPtr){
	if(declPtr->declClass != DECL_TYPE|| declPtr->typeClass != DECL_TYPE_STRUCT){
	printf("error. declClass is notSTRUCT.\n"); 
	}
} 
