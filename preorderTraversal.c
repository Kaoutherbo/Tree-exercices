#include "tree.h"

/**
 * preorderTraversal - Procedure that print data 
 * Pre-order traversal (Root-Left-Right)
 * 
 * @root: pointer to the root of tree
 * Return: void
*/

void preorderTraversal(TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}