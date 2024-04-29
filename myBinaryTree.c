#include "myBinaryTree.h"
#include <stdlib.h>
#include <string.h>
/*
 * Written by HengYuan Hu on April 27, 2024.
 * This function is used to traverse a binary tree and return a sequence representing the structure of the tree.
 * The time complexity depends on the number of nodes. It is O(n), where n is the number of nodes.
 */
void* myInOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize){
    if(root!=NULL){
        void* left = myInOrderTraversal(root->left, returnSize, elementSize);
        int leftLength = *returnSize;
        void* right = myInOrderTraversal(root->right, returnSize, elementSize);
        int rightLength = *returnSize;
        int num = leftLength + rightLength;
        void* answer = (void *)malloc(elementSize*(num+1));
        int k = 0;
        for (int i = 0; i < leftLength; i++) {
            memcpy(answer + k, left + i, elementSize);
            k++;
        }
        memcpy(answer+k, &(root->val), elementSize);
        k++;
        for (int i = 0; i < rightLength; i++) {
            memcpy(answer + k, right + i, elementSize);
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
/*
 * Written by HengYuan Hu on April 27, 2024.
 * This function is used to traverse a binary tree and return a sequence representing the structure of the tree.
 * The time complexity depends on the number of nodes. It is O(n), where n is the number of nodes.
 */
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
        for (int i = 0; i < leftLength; i++) {
            memcpy(answer + k, left + i, elementSize);
            k++;
        }
        for (int i = 0; i < rightLength; i++) {
            memcpy(answer + k, right + i, elementSize);
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
/*
 * Written by HengYuan Hu on April 27, 2024.
 * This function is used to traverse a binary tree and return a sequence representing the structure of the tree.
 * The time complexity depends on the number of nodes. It is O(n), where n is the number of nodes.
 */
void* myPostOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize){
    if(root!=NULL){
        void* left = myInOrderTraversal(root->left, returnSize, elementSize);
        int leftLength = *returnSize;
        void* right = myInOrderTraversal(root->right, returnSize, elementSize);
        int rightLength = *returnSize;
        int num = leftLength + rightLength;
        void* answer = (void *)malloc(elementSize*(num+1));
        int k = 0;
        for (int i = 0; i < leftLength; i++) {
            memcpy(answer + k, left + i, elementSize);
            k++;
        }
        for (int i = 0; i < rightLength; i++) {
            memcpy(answer + k, right + i, elementSize);
            k++;
        }
        memcpy(answer+k, &(root->val), elementSize);
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
/*
 * Written by HengYuan Hu on April 28, 2024.
 * This function create a binary tree by an array, the array represent the binary tree's sequence traversal sequence
 * This function can let you init a binary tree very easy.
 */
void initBinaryTreeByArray(struct TreeNode* root, int arraySize, void *array){

}