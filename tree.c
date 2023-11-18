#include "tree.h"

/**
 * main - Entry point 
 * 
 * Return: Always 0
*/
int main() {
    TreeNode* root = NULL;
    int option;

    // Get the number of nodes from the user
    int size = getSize("Enter the number of nodes: ");

    // Get values from the user and insert them into the tree
    getValues(&root, size);

    // get the option of traversal
    printf("Press: \n1) for Inorder Traversal\n2) for Preorder Traversal\n3) for Postorder Traversal\n");
    scanf("%d",&option);

    // print the usage traversal corresponding to the user input
    printUsageTraversal(root, option);
    return 0;
}