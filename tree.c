#include "tree.h"

/**
 * main - Entry point 
 * 
 * Return: Always 0
*/
int main() {
    // Example of a binary tree
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // In-order traversal: 4 2 5 1 3
    printf("In-order traversal: ");
    inorderTraversal(root);
    printf("\n");

    // Pre-order traversal: 1 2 4 5 3
    printf("Pre-order traversal: ");
    preorderTraversal(root);
    printf("\n");

    // Post-order traversal: 4 5 2 3 1
    printf("Post-order traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}