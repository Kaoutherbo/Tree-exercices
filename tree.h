#ifndef TREE_H
#define TREE_H

// Header files
#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;

// prototypes of functions
TreeNode* createNode(int key);
void inorderTraversal(TreeNode* root);
void preorderTraversal(TreeNode* root);
void postorderTraversal(TreeNode* root);

#endif  /* TREE_H */
