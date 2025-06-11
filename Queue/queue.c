#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

queue_t* init(int capacity){
    queue_t* queue = malloc(sizeof(queue_t));
    if (queue==NULL){
        fprintf(stderr,"Unable to allocate memory for the queue");
        return NULL;
    }
    queue->capacity=capacity;
    queue->count=0;
    queue->head = 0;
    queue->tail = 0;
    int* q_data = malloc(sizeof(int)*capacity);
    if (q_data==NULL){
        fprintf(stderr,"Unable to allocate memory for the queue data");
        return NULL;
    }
    queue->data = q_data;
    return queue;
}

void enqueue(queue_t* queue,int value){
    if(queue->count==queue->capacity){
        queue->capacity*=2;
        int* result = realloc(queue->data,sizeof(int)*queue->capacity);
        if (result==NULL){
            fprintf(stderr,"Unable to re-allocate memory for the queue data");
            return;
        }
        queue->data = result;
    }
    queue->data[queue->tail] =value; 
    queue->count++;
    queue->tail++;
    return;
}

int deQueue(queue_t* queue){
    if (queue->count==0){
        fprintf(stderr,"Empty queue\n");
        return 0;
    }
    int head = queue->data[queue->head];
    queue->head++;
    queue->count--;
    return head;
}

void printQueue(queue_t* queue){
    int count = queue->count;
    int head = queue->head;
    int tail = queue->tail;
    for(int i=head;i<tail;i++){
        printf("%d\n",queue->data[i]);
    }
}

void freeQueue(queue_t* queue){
    free(queue->data);
    free(queue);
}