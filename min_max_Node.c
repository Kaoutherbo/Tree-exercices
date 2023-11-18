#include "tree.h"

/**
 * minNode - recursion function that return the
 * minimum element in the tree
 * 
 * @root: the root ponter of the tree
 * Return: minimum element in the tree
*/
int minNode(TreeNode* root)
{
   if( root->left == NULL) 
        return root->data;
    else
        return minNode(root->left);
    
}

/**
 * maxNode - recursion function that return the
 * maximum element in the tree
 * 
 * @root: the root ponter of the tree
 * Return: maximum element in the tree
*/
int maxNode(TreeNode* root)
{
    if( root->right == NULL) 
        return root->data;
    else
        return maxNode(root->right);
}