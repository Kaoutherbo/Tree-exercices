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
TreeNode* insertNode(TreeNode* root, int data);
int getSize(char *msg);
void getValues(TreeNode **root, int size);
void printUsageTraversal(TreeNode *root, int option);

#endif  /* TREE_H */
