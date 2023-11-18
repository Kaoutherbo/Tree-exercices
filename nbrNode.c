#include "tree.h"

/**
 * nbrNode - function that return the
 * number of nodes in the tree
 * 
 * @root: pointer of the root of tree
 * Return: number of nodes in the tree
*/

int nbrNode(TreeNode* root)
{
    if(root == NULL) 
        return 0;
    else
        return 1 + nbrNode(root->left) + nbrNode(root->right);
}