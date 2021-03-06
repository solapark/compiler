#include "subc.h"

//functions to calculate offset
void procOffset(struct decl* newDecl, struct node* curSsTop){
    //printf("procOffset\n");
    setOffset(curSsTop, newDecl);
    setDeclSize(newDecl);
    setScopeSize(curSsTop, newDecl);
}
int getScopeSize(){
    return ssTop->size;
}
void resetScopeSize(){
    //printf("resetScopeSize\n");
    ssTop->size = 0;
}

void setScopeSize(struct node *curSsTop,struct decl* curDecl){
    //printf("setScopeSize()\n");
    curSsTop -> size += curDecl->size;
}
void minusScopeSize(struct node *curSsTop, int operand){
    //printf("minusScopeSize()\n");
    curSsTop->size -= operand;
}
void setOffset(struct node *curSsTop, struct decl *curDecl){
    //printf("setOffset()\n");
    curDecl -> offset = curSsTop->size +1;
}


int getGlobalSize(){
    return globalScope->size;
}
void setDeclSize(struct decl* curDecl){
   //printf("setDeclSize()\n");
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
   //printf("calcVoidSize()\n");
    return 1;
}

int calcIntSize(){
   //printf("calcintSize()\n");
    return 1;
}

int calcCharSize(){
   //printf("calcCharSize()\n");
    return 1;
}

int calcPtrSize(){
   //printf("calcPtrSize()\n");
    return 1;
}

int calcStructSize(struct ste* fields){
   //printf("calcStructSize()\n");
    struct ste* curSte = fields;
    int sumFieldSize = 0;
    while(curSte) {
        sumFieldSize += curSte->decl->size;
        curSte = curSte-> prev;
    }
    return sumFieldSize;
}

int calcEleSize(struct decl* arrType){
    int sizeEle = arrType->elementVar->type->size;
    return sizeEle;
}


int calcArraySize(struct decl* arrType){
   //printf("calcArraySize()\n");
    int numEle = arrType ->numIndex; 
    int sizeEle = calcEleSize(arrType);
    return numEle * sizeEle;
}

void setTypeSize(struct decl* typeDecl, struct ste* structFields){
   //printf("setTypeSize()\n");
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
   //printf("setVarSize()\n");
   if(varDecl->type->typeClass == DECL_TYPE_PTR){
       varDecl->size = varDecl->type->ptrTo->size;
   }else{
       varDecl->size = varDecl->type->size;
   }
}

void setConstSize(struct decl* constDecl){
   //printf("setConstSize()\n");
    setTypeSize(constDecl->type, NULL);
    constDecl->size = constDecl->type->size;
}

int checkIsParam(struct decl* declPtr){
    struct ste* funcSte = findSteByStr("returnId")->prev;
    struct ste* paramList = funcSte->decl->formals;
    while(paramList){
        if(paramList->decl == declPtr){
            return 1;
        }
        paramList = paramList -> prev;
    }
    return 0;
}
int checkIsGlobal(struct decl* declPtr){
   if(declPtr-> scope == globalScope ){
       return 1;
   }else{
       return 0;
   }
}
int getReturnSize(struct decl* funcDecl){
    return funcDecl->returnType->type->size;
}

int getParamSize(struct decl* funcDecl){
    struct ste* paramList = funcDecl->formals;
    int paramSize = 0;
    while(paramList){
        if(checkIsStruct(paramList->decl->type) == SUCCESS){
            paramSize += paramList->decl->type->size;
        }else{
            paramSize++;
        }
        paramList = paramList->prev;
    }
    return paramSize;
}

int getRecentFuncReturnSize(){
    struct ste* retSte = findSteByStr("returnId");
    /*
    struct ste* paramList = funcSte->decl->formals;
    int paramSize = 0;
    while(paramList){
        paramSize++;
        paramList = paramList->prev;
    }
    */
    int returnSize = retSte->decl->size;
    return returnSize;
}
int getRecentFuncParamSize(){
    struct ste* funcSte = findSteByStr("returnId")->prev;
    /*
    struct ste* paramList = funcSte->decl->formals;
    int paramSize = 0;
    while(paramList){
        paramSize++;
        paramList = paramList->prev;
    }
    */
    int paramSize = getParamSize(funcSte->decl);
    return paramSize;
}

struct decl* getRecentFuncReturnType(){
    struct ste* funcSte = findSteByStr("returnId");
    return funcSte->decl;
}


int getOffsetByDecl(struct decl* targetDecl){
    return targetDecl->offset;
}

int getOffsetById(struct id* name){
    struct decl* targetDecl = findDecl(name);
    return getOffsetByDecl(targetDecl);
}
int getVarScope(struct decl* declPtr){
    if(checkIsGlobal(declPtr)){//global
        //printf("global\n");
        return VAR_GLOBAL;
    }else{
        if(!checkIsParam(declPtr)){//local
            //printf("local\n");
            return VAR_LOCAL;
        }else{//param
            //printf("param\n");
            return VAR_PARAM;
        }
    }

}
int getRealOffset(struct decl* declPtr){
    int offset = getOffsetByDecl(declPtr);
    switch(getVarScope(declPtr)){
        case VAR_GLOBAL :
            offset  = offset-1;
            break;
        case VAR_LOCAL :
            offset += getRecentFuncParamSize();
            break;
        case VAR_PARAM :
            break;
    }
    return offset;
}

int getStructSize(struct decl* declPtr){
    return declPtr -> size;
}
