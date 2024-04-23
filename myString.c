#include "myString.h"

#include <stdio.h>
#include <stdlib.h>
/*
 * written by HengYuan Hu, eighteen April 2024
 * this function is to catch the s2 to the tail of the string s1
 * the parameter returnSize is optional, can use this parameter to return the new string's length
 * the time complexity is O(m+n), the m is the s1's length, and the n is s2's length
 *
 * ----------Comment was modified by ChatGpt.----------
 *
 * Written by HengYuan Hu on the eighteenth of April 2024.
 * This function is to concatenate string s2 to the tail of string s1.
 * The parameter returnSize is optional; it can be used to return the new string's length.
 * The time complexity is O(m + n), where m is the length of s1, and n is the length of s2.
 *
 */
char * myStringCatch(const char *s1, const char *s2, int *returnSize){
    int length1 = 0;
    while(s1[length1]!='\0'){
        length1++;
    }
    int length2 = 0;
    while(s2[length2]!='\0'){
        length2++;
    }
    char * ans = (char *)malloc(sizeof(char)*(length1+length2+1));
    int length3 = 0;
    for(int i = 0; i<length1; i++){
        ans[length3++] = s1[i];
    }
    for(int i = 0; i<length2; i++){
        ans[length3++] = s2[i];
    }
    ans[length3] = '\0';
    if(returnSize!=NULL){
        *returnSize = length3;
    }
    return ans;
}
/*
 * Written by HengYuan Hu on the eighteenth of April 2024.
 * this function can convert a class 'int' data to 'char *'
 * the complexity of the function is depended on the number of bit of the number, O(n)
 * the n is indicated the number of bit of the number will be converted.
 *
 * ----------Comment was modified by ChatGpt----------
 *
 * Written by HengYuan Hu on the eighteenth of April 2024.
 * This function converts an 'int' data type to 'char *'.
 * The complexity of the function depends on the number of bits in the number, O(n),
 * where 'n' indicates the number of bits to be converted.
 */
char * intToChar(int num, int *returnSize){
    int length = 0;
    int n = num;
    char *ans = NULL;
    while(n!=0){
        n /= 10;
        length++;
    }
    if(num>0) {
        ans = (char *) malloc(sizeof(char) * (length + 1));
        n = num;
    }else if(num==0){
        ans = (char *)malloc(sizeof(char)*2);
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }else{
        ans = (char *)malloc(sizeof(char)*(length+2));
        length += 1;
        n = num;
    }
    if(returnSize != NULL) {
        *returnSize = length;
    }
    ans[length--] = '\0';
    for(; n != 0; n/=10){
        ans[length--] = (char)(n%10>0?n%10:-1*(n%10))+'0';
    }
    if(num<0){
        ans[0] = '-';
    }
    return ans;
}
/*
* Written by HengYuan Hu on April 22, 2024.
* This function is used to solve LeetCode's problem 228.
* It implements a function that takes a sequence of numbers and converts them into a set of strings representing ranges of numbers.
 */
char** summaryRanges(const int* nums, int numsSize, int* returnSize) {
    char ** ans = (char **)malloc(sizeof(char *)*numsSize);
    int count = 0;
    if(numsSize!=0){
        char x[] = "->";
        int start = nums[0];
        int end = nums[0];
        for(int i=1; i<numsSize; i++){
            if(nums[i] != end+1){
                char *s1 = NULL;
                char *s2 = NULL;
                char *s3 = NULL;
                char *a_ans;
                if(start != end) {
                    s1 = intToChar(start, NULL);
                    s2 = intToChar(end, NULL);
                    s3 = myStringCatch(s1, x, NULL);
                    a_ans = myStringCatch(s3, s2, NULL);
                }else{
                    a_ans = intToChar(start, NULL);
                }
                ans[count++] = a_ans;
                start = nums[i];
                end = nums[i];
                free(s1);
                free(s2);
                free(s3);
            }if(nums[i]-1 == end){
                end = nums[i];
            }
        }
        {
            char *s1 = NULL;
            char *s2 = NULL;
            char *s3 = NULL;
            char *a_ans;
            if(start != end) {
                s1 = intToChar(start, NULL);
                s2 = intToChar(end, NULL);
                s3 = myStringCatch(s1, x, NULL);
                a_ans = myStringCatch(s3, s2, NULL);
            }else{
                a_ans = intToChar(start, NULL);
            }
            ans[count++] = a_ans;
            free(s1);
            free(s2);
            free(s3);
        }
    }
    *returnSize = count;
    return ans;
}