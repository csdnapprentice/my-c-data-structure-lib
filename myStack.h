#ifndef STACK_MYSTACK_H
#define STACK_MYSTACK_H
#define MAX_STACK 20
struct Stack{
    void ** item;
    int top;
    int maxSize;
};
void *myStackPop(struct Stack *s);
void myStackPush(struct Stack *s, void *i);
void myStackClear(struct Stack *s);
void myStackInit(struct Stack *s, int maxSize);
int myStackChangeSize(struct Stack *s, int maxSize);
int myStackLength(struct Stack *s);
#endif //STACK_MYSTACK_H