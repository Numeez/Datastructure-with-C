#include<stdio.h>

typedef struct Stack{
    size_t count;
    size_t capacity;
    int* data;
} Stack_t;

Stack_t* init(size_t capacity);
void push(Stack_t* stack,int value);
int pop(Stack_t* stack);
void printStack(Stack_t* stack);
void freeStack(Stack_t* stack);