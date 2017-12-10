#include "subc.h"

//functions to calculate offset
void procOffset(struct decl* newDecl, struct node* curSsTop){
    printf("procOffset\n");
    setOffset(curSsTop, newDecl);
    setDeclSize(newDecl);
    setScopeSize(curSsTop, newDecl);
}

void resetScopeSize(struct node *curSsTop){
    printf("resetScopeSize\n");
    curSsTop->size = 0;
}

void setScopeSize(struct node *curSsTop,struct decl* curDecl){
    printf("setScopeSize()\n");
    curSsTop -> size += curDecl->size;
}

void minusScopeSize(struct node *curSsTop, int operand){
    printf("minusScopeSize()\n");
    curSsTop->size -= operand;
}
void setOffset(struct node *curSsTop, struct decl *curDecl){
    printf("setOffset()\n");
    curDecl -> offset = curSsTop->size;
}

void setDeclSize(struct decl* curDecl){
   printf("setDeclSize()\n");
   switch(curDecl->declClass){
       case DECL_VAR :
           setVarSize(curDecl);
           break;
       case DECL_CONST :
           setConstSize(curDecl);
           break;
       case DECL_TYPE :
           setTypeSize(curDecl, curDecl->fieldList);
           break;
       case DECL_FUNC :
           break;
       default :
           printf("setDeclSize() Error\n");
   }
           
}

int calcVoidSize(){
   printf("calcVoidSize()\n");
    return 1;
}

int calcIntSize(){
   printf("calcintSize()\n");
    return 1;
}

int calcCharSize(){
   printf("calcCharSize()\n");
    return 1;
}

int calcPtrSize(){
   printf("calcPtrSize()\n");
    return 1;
}

int calcStructSize(struct ste* fields){
   printf("calcStructSize()\n");
    struct ste* curSte = fields;
    int sumFieldSize = 0;
    while(curSte) {
        sumFieldSize += curSte->decl->size;
        curSte = curSte-> prev;
    }
    return sumFieldSize;
}

int calcArraySize(struct decl* arrType){
   printf("calcArraySize()\n");
    int numEle = arrType ->numIndex; 
    int sizeEle = arrType->elementVar->type->size;
    return numEle * sizeEle;
}

void setTypeSize(struct decl* typeDecl, struct ste* structFields){
   printf("setTypeSize()\n");
    int sizeEle = 0;
    switch(typeDecl->typeClass){
         case DECL_TYPE_VOID :
            sizeEle = calcVoidSize();
            break;
        case DECL_TYPE_INT :
            sizeEle = calcIntSize();
            break;
        case DECL_TYPE_CHAR :
            sizeEle = calcCharSize();
            break;
        case DECL_TYPE_PTR :
            sizeEle = calcPtrSize();
            break;
        case DECL_TYPE_STRUCT :
            sizeEle = calcStructSize(structFields);
            break;
        case DECL_TYPE_ARRAY :
            sizeEle = calcArraySize(typeDecl);
            break;
        default :
            printf("caclTypSize() Error\n");
            return;
    }
    typeDecl->size = sizeEle;
}

void setVarSize(struct decl* varDecl){
   printf("setVarSize()\n");
   if(varDecl->type->typeClass == DECL_TYPE_PTR){
       varDecl->size = varDecl->type->ptrTo->size;
   }else{
       varDecl->size = varDecl->type->size;
   }
}

void setConstSize(struct decl* constDecl){
   printf("setConstSize()\n");
    setTypeSize(constDecl->type, NULL);
    constDecl->size = constDecl->type->size;
}













