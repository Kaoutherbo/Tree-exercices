#include "tree.h"

/**
 * main - Entry point 
 * 
 * Return: Always 0
*/
int main() {
    TreeNode* root = NULL;
    int n, value;

    // Get the number of nodes from the user
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Get values from the user and insert them into the tree
    printf("Enter the values:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &value);
        root = insertNode(root, value);
    }

    // In-order traversal
    printf("In-order traversal: ");
    inorderTraversal(root);
    printf("\n");

    // Pre-order traversal
    printf("Pre-order traversal: ");
    preorderTraversal(root);
    printf("\n");

    // Post-order traversal
    printf("Post-order traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}