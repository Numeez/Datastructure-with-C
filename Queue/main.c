#include<stdio.h>
#include<stdlib.h>
#include "queue.h"


int main(){
    queue_t* queue = init(1);
    enqueue(queue,1);
    enqueue(queue,2);
    enqueue(queue,3);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);
    // int element  = deQueue(queue);
    // printf("Deleted element %d\n",element);
    printQueue(queue);
    freeQueue(queue);
}