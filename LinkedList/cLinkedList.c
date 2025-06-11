#include<stdio.h>
#include<stdlib.h>

#include "cLinkedList.h"


linkedList_node_t* createNode(int val){
    linkedList_node_t* newNode = malloc(sizeof(linkedList_node_t));
    if (newNode==NULL){
        fprintf(stderr,"Unable to allocate the memory for the linked list node");
        return NULL;
    }
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}

void free_linkedList(linkedList_node_t* head){
    linkedList_node_t* current = head;
    linkedList_node_t* next;

    while(current!=NULL){
        next = current->next;
        free(current);
        current =next;
    }

}

linkedList_node_t* addNode(linkedList_node_t* head, int value){
    linkedList_node_t* node = createNode(value);

    if (node == NULL) {
        return head;
    }

    if (head == NULL) {
        return node;
    }
    

    linkedList_node_t* current = head;
    while(current->next!=NULL){
        current = current->next;
    }
    current->next=node;
    node->next = NULL;
    return head;
}

void printLinkedList(linkedList_node_t* head){
    linkedList_node_t* current = head;
    while(current!=NULL){
        printf("%d->",current->value);
        current = current->next;
    }
     printf("NULL\n");
}