#ifndef MYQUEUE_H
#define MYQUEUE_H
struct Queue{
    void ** item;
    int front;
    int rear;
    int maxSize;
};
void *myDeQueue(struct Queue *q);
int myEnQueue(struct Queue *q, void *i, int elementSize, int copy);
void myQumeueClear(struct Queue *q, int copy);
int myQueueInit(struct Queue *q, int maxSize);
int myQueueChangeSize(struct Queue *q, int maxSize);
int myQueueLength(struct Queue *q);
int myQueueEmpty(struct Queue *q);
int myQueueFull(struct Queue *q);
#endif //MYQUEUE_H
