#include<stdio.h>
#include "cLinkedList.h"


int main(){
    linkedList_node_t* head  = createNode(1);
    addNode(head,2);
    addNode(head,3);
    addNode(head,4);
    addNode(head,5);
    addNode(head,6);
    addNode(head,7);
    printLinkedList(head);
    free_linkedList(head);


}