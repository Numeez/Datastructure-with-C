#include<stdio.h>
#include "stack.h"



int main(){
    Stack_t* stack = init(10);
    push(stack,1);
    push(stack,2);
    push(stack,3);
    push(stack,4);
    printStack(stack);
    int  e1= pop(stack);
    int e2 =pop(stack);
    int e3 =pop(stack);
    printStack(stack);
}