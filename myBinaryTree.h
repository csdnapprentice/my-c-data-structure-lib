#ifndef LEETCODE_MYBINARYTREE_H
#define LEETCODE_MYBINARYTREE_H
struct TreeNode{
    void *val;
    struct TreeNode* left;
    struct TreeNode* right;
};
void* myInOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize);
void* myPreOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize);
void* myPostOrderTraversal(struct TreeNode* root, int* returnSize, int elementSize);
#endif //LEETCODE_MYBINARYTREE_H
