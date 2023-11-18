#include "tree.h"

/**
 * createNode - Function to create a new tree node
 * @data: a number to add it in the tree
 * 
 * Return: a TreeNode 
*/
 
TreeNode* createNode(int data) {
     TreeNode* newNode = ( TreeNode*)malloc(sizeof( TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
