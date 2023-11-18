#include "tree.h"
/**
 * inorderTraversal - Procedure that print data 
 * In-order traversal (Left-Root-Right)
 * 
 * @root: pointer to the root of tree
 * Return: void
*/

void inorderTraversal(TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}