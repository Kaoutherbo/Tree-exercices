#include "tree.h"

/**
 * heightTree - fuction that return
 * the height of the tree
 * 
 * @root: pointer to the root of tree
 * Return: height of the tree
*/
int heightTree(TreeNode* root)
{
    if(root == NULL) return 0;

    if( heightTree(root->left) > heightTree(root->right))
       return 1 + heightTree(root->left);
    else 
       return 1 + heightTree(root->right);
}