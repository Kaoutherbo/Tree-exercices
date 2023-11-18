#include "tree.h"

// Function to insert a key into the binary tree
TreeNode* insertNode(TreeNode* root, int data)
{
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}