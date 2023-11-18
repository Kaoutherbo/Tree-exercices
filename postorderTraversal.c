#include "tree.h"

/**
 * postorderTraversal - Procedure that print data 
 * Post-order traversal (Left-Right-Root)
 * 
 * @root: pointer to the root of tree
 * Return: void
*/

void postorderTraversal(TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}