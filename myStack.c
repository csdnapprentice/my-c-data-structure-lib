#include "myStack.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * Written by HengYuan Hu 22 on April 2024
 * this function can implement the stack pop, the Time complexity is O(1)
 * this return is a pointer that point to an element.
 */
void * myStackPop(struct Stack *s){
    if(s->top > 0){
        void * x = NULL;
        x = s->item[s->top-1];
        s->item[s->top-1] = NULL;
        s->top = s->top - 1;
        return x;
    }
    return NULL;
}
/*
 * Written by HengYuan Hu 22 on April 2024
 * this function can implement the stack push, the Time complexity is O(1)
 */
void myStackPush(struct Stack *s, void * i){
    if(s->top < s->maxSize) {
        s->item[s->top] = i;
        s->top = s->top + 1;
    }else{
        printf("An error occur when want to push a element to stack! the reason is the stack is full!");
    }
}
/*
 * Written by HengYuan Hu 22 on April 2024
 * this function can implement stack clear,the Time complexity is O(1)
 */
void myStackClear(struct Stack *s){
    for(int i=0; i < s->top; i++){
        free(s->item[i]);
        s->item[i] = NULL;
    }
    s->top = 0;
}
/*
 * Written by HengYuan Hu on April 22, 2024.
 * this function is used to init a stack.
 */
void myStackInit(struct  Stack *s, int maxSize){
    s->item = (void *)malloc(sizeof(void *)*maxSize);
    for(int i=0; i<maxSize; i++){
        s->item[i] = NULL;
    }
    s->top = 0;
    s->maxSize = maxSize;
}