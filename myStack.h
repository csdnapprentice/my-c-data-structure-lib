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
/*
 *
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 100

struct Stack {
    void **items;  // 用于存储任意类型元素的void指针数组
    int size;      // 栈的当前大小
    int capacity;  // 栈的最大容量
};

void *myStackPop(struct Stack *s) {
    if (s->size == 0) {
        printf("栈下溢\n");
        return NULL;
    }
    void *item = s->items[--s->size];
    return item;
}

void myStackPush(struct Stack *s, void *i) {
    if (s->size == s->capacity) {
        printf("栈上溢\n");
        return;
    }
    s->items[s->size++] = i;
}

void myStackClear(struct Stack *s) {
    s->size = 0;
}

void myStackInit(struct Stack *s, int capacity) {
    s->items = (void **)malloc(capacity * sizeof(void *));
    if (s->items == NULL) {
        printf("内存分配失败\n");
        exit(EXIT_FAILURE);
    }
    s->size = 0;
    s->capacity = capacity;
}

void myStackDestroy(struct Stack *s) {
    free(s->items);
    s->size = 0;
    s->capacity = 0;
}

int main() {
    // 示例用法
    struct Stack stack;
    myStackInit(&stack, MAX_STACK);

    // 将整数压入栈中
    for (int i = 0; i < 5; ++i) {
        int *val = (int *)malloc(sizeof(int));
        *val = i;
        myStackPush(&stack, val);
    }

    // 从栈中弹出整数
    printf("从栈中弹出元素:\n");
    while (stack.size > 0) {
        int *val = (int *)myStackPop(&stack);
        if (val != NULL) {
            printf("%d\n", *val);
            free(val);
        }
    }

    myStackDestroy(&stack);

    return 0;
}

 */
#endif //STACK_MYSTACK_H
