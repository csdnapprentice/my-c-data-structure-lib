#ifndef LEETCODE_MYBINARYTREE_H
#define LEETCODE_MYBINARYTREE_H
struct TreeNode{
    void *val;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct Array;
void* myInOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize);
void* myPreOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize);
void* myPostOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize);
int initBinaryTreeByArray(struct TreeNode* root, struct Array *array, int elementSize);
#endif //LEETCODE_MYBINARYTREE_H
