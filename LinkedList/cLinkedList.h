typedef struct  Node{
    int value;
    struct Node* next;
}linkedList_node_t;



linkedList_node_t* createNode(int val);

void  free_linkedList(linkedList_node_t* node);

linkedList_node_t* addNode(linkedList_node_t* head, int node);

void printLinkedList(linkedList_node_t* head);