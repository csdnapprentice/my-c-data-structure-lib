#include "myBinaryTree.h"
#include <stdlib.h>
#include <string.h>
void* myInOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize){
    if(root!=NULL){
        void* left = myInOrderTraversal(root->left, returnSize, elementSize);
        int leftLength = *returnSize;
        void* right = myInOrderTraversal(root->right, returnSize, elementSize);
        int rightLength = *returnSize;
        int num = leftLength + rightLength;
        void* answer = (void *)malloc(elementSize*(num+1));
        int k = 0;
        for(int i=0; i<leftLength; i++){
            memcpy(answer+k, left+i, elementSize);
            k++;
        }
        memcpy(answer+k, &(root->val), elementSize);
        k++;
        for(int i=0; i<rightLength; i++){
            memcpy(answer+k, right+i, elementSize);
            k++;
        }
        free(left);
        free(right);
        left = NULL;
        right = NULL;
        *returnSize = num+1;
        return answer;
    }
    *returnSize = 0;
    return NULL;
}
void* myPreOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize){
    if(root!=NULL){
        void* left = myInOrderTraversal(root->left, returnSize, elementSize);
        int leftLength = *returnSize;
        void* right = myInOrderTraversal(root->right, returnSize, elementSize);
        int rightLength = *returnSize;
        int num = leftLength + rightLength;
        void* answer = (void *)malloc(elementSize*(num+1));
        int k = 0;
        memcpy(answer+k, &(root->val), elementSize);
        k++;
        for(int i=0; i<leftLength; i++){
            memcpy(answer+k, left+i, elementSize);
            k++;
        }
        for(int i=0; i<rightLength; i++){
            memcpy(answer+k, right+i, elementSize);
            k++;
        }
        free(left);
        free(right);
        left = NULL;
        right = NULL;
        *returnSize = num+1;
        return answer;
    }
    *returnSize = 0;
    return NULL;
}
void* myPostOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize){
    if(root!=NULL){
        void* left = myInOrderTraversal(root->left, returnSize, elementSize);
        int leftLength = *returnSize;
        void* right = myInOrderTraversal(root->right, returnSize, elementSize);
        int rightLength = *returnSize;
        int num = leftLength + rightLength;
        void* answer = (void *)malloc(elementSize*(num+1));
        int k = 0;
        for(int i=0; i<leftLength; i++){
            memcpy(answer+k, left+i, elementSize);
            k++;
        }
        for(int i=0; i<rightLength; i++){
            memcpy(answer+k, right+i, elementSize);
            k++;
        }
        memcpy(answer+k, &(root->val), elementSize);
        k++;
        free(left);
        free(right);
        left = NULL;
        right = NULL;
        *returnSize = num+1;
        return answer;
    }
    *returnSize = 0;
    return NULL;
}