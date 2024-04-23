#include "myArray.h"
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
