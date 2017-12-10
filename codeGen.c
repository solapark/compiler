#include "subc.h"


//functions to calculate offset
void resetScopeSize(struct node *curSsTop){
    curSsTop->size = 0;
}

void setScopeSize(struct node *curSsTop,struct decl* curDecl){
    curSsTop -> size =+ curDecl->size;
}

void calcOffset(struct node *curSsTop, struct decl *curDecl){
    curDecl -> offset = curSsTop->size;
}

int calcIntSize(){
    return 1;
}

int calcCharSize(){
    return 1;
}

int calcPtrSize(){
    return 1;
}

int setVarSize(struct decl* varDecl){
    int sizeEle = 0;
    switch(varDecl->type->typeClass){
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
            sizeEle = varDecl->type->size;
            break;
        default :
            printf("caclArrSize() Error\n");
            return -1;
    }
    return sizeEle;
}

void setArrSize(struct decl* arrType){
    int numEle = arrType ->numIndex; 
    int sizeEle = setVarSize(arrType->elementVar);
    arrType -> size =  numEle * sizeEle;
}

void setStructSize(struct node *curSsTop, struct decl* structTypeDecl){
    structTypeDecl->size = curSsTop->size;
}













