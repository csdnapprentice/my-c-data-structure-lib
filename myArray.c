#include "myArray.h"
#include <stdlib.h>
/*
 * Written by HengYuan HU on the eighteenth of April 2024.
 * this function can obtain an array's length. Sometimes will be useful.
 * the Time complexity is O(1),this is indicates that the function can finish in the const time.
 *
 * ----------Comment was modified by ChatGpt----------
 *
 * Written by HengYuan HU on the eighteenth of April 2024.
 * This function can obtain the length of an array, which can be useful at times.
 * The time complexity is O(1), indicating that the function can finish in constant time.
*/
int arrayLength(int size, int type_size){
    int length = size / type_size;
    return length;
}
/*
 * Written by HengYuan Hu on April 24, 2024.
 * This function can init the array.if init is successful then return 1, otherwise return 0.
 */
int initArray(struct Array *a, int maxSize){
    a->item = (void **)malloc(sizeof(void *)*maxSize);
    if(a->item==NULL){
        return 0;
    }
    a->maxLength = maxSize;
    a->length = 0;
    for(int i = 0; i < a->maxLength; i++){
        a->item[i] = NULL;
    }
    return 1;
}
int insertItem(struct Array *a, int index, void* element){

}
void *deleteItem(struct Array *a, int index){

}