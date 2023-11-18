#include "tree.h"
/**
 * printUsageTraversal - Procedure that print the usage travesal 
 * corresponding to user option
 * 
 * @root: the root of the tree
 * @option: the option of the user
 * Return: void
*/

void printUsageTraversal(TreeNode *root, int option)
{
    // In-order traversal
    if (option == 1)
    {
        printf("In-order traversal: ");
        inorderTraversal(root);
        printf("\n");
    }
    // Pre-order traversal
    else if (option == 2)
    {
        printf("Pre-order traversal: ");
        preorderTraversal(root);
        printf("\n");
    } 
    // Post-order traversal
    else
    {
    printf("Post-order traversal: ");
    postorderTraversal(root);
    printf("\n");
    }
}