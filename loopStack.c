#include "subc.h"

struct node *loopStackHead;

void pushLoop(int contLabel, int breakLabel){
    struct node *newNodePtr = (struct node*) malloc(sizeof(struct node));

    newNodePtr->contLabel = contLabel; 
    newNodePtr->breakLabel = breakLabel; 

    //add new stack entry to stack.	
    addToHead(&loopStackHead, newNodePtr);
}

void popLoop(){
    //add new stack entry to stack.	
    removeFromHead(&loopStackHead);
}

int getContLabel(){
    return loopStackHead->contLabel;
}

int getBreakLabel(){
    return loopStackHead->breakLabel;
}
