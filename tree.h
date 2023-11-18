#ifndef TREE_H
#define TREE_H

// Header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definition for a binary tree node
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;

// prototypes of functions
TreeNode* createNode(int data);
void inorderTraversal(TreeNode* root);
void preorderTraversal(TreeNode* root);
void postorderTraversal(TreeNode* root);
TreeNode* insertNode(TreeNode* root, int data);
int getSize(char *msg);
int getNum(char *msg);
void getValues(TreeNode **root, int size);
void printUsageTraversal(TreeNode *root, int option);
bool searchNode(TreeNode* root, int key);
int minNode(TreeNode* root);
int maxNode(TreeNode* root);
int nbrNode(TreeNode* root);
#endif  /* TREE_H */
