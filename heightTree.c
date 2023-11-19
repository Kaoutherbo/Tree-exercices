#include "tree.h"

int heightTree(TreeNode* root)
{
    if(root == NULL) return 0;
    int x = heightTree(root->left);
    int y = heightTree(root->right);

    if( x > y) return 1 + heightTree(root->left);
    else return 1 + heightTree(root->right);
}