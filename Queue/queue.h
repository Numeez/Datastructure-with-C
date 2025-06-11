typedef struct Queue{
    size_t count;
    size_t head;
    size_t tail;
    int capacity;
    int* data;
}queue_t;



queue_t* init(int capacity);
void enqueue(queue_t* queue,int value);
void printQueue(queue_t* queue);
void freeQueue(queue_t* queue);
int deQueue(queue_t* queue);