#include<stdio.h>
#include<stdlib.h>


#include "stack.h"


Stack_t* init(size_t capacity){
    Stack_t* stack = malloc(sizeof(Stack_t));
    if (stack==NULL){
        fprintf(stderr,"Unable to allocate memory for stack\n");
        return NULL;
    }
    stack->capacity = capacity;
    stack->count = 0;
    int* data = malloc(sizeof(int)*capacity);
    if (data == NULL) {
    fprintf(stderr, "Unable to allocate memory for stack data\n");
    free(stack);
    return NULL;
}
    stack->data = data;
    return stack;

}

void push(Stack_t* stack, int value){
    if(stack->capacity==stack->count){
        stack->capacity*=2;
        int* result = realloc(stack->data, sizeof(int) * stack->capacity);
        if (result==NULL){
            fprintf(stderr,"Unable to re-allocate memory for stack data\n");
            return ;
        }
        stack->data = result;
    }
    stack->data[stack->count] = value;
    stack->count++;

}

int pop(Stack_t* stack){
    if (stack->count==0){
     fprintf(stderr,"Empty stack\n");
            return 0;   
    }
    stack->count--;
    int element = stack->data[stack->count];
    return element;
}

void printStack(Stack_t* stack){
    printf("____________________________\n");
    for (int i = stack->count - 1; i >= 0; i--) {
    printf("%d\n", stack->data[i]);
}
}

void freeStack(Stack_t* stack){
    free(stack->data);
    free(stack);
}