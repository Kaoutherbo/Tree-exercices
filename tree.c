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

    // get the key 
    int key = getNum("Enter the number that you want to search about it in the tree: ");
    
    // check if key is in tree or not
    if(searchNode(root, key))
        printf("\n%d is found in the tree.\n",key);
    else
        printf("\n%d is not found in the tree.\n",key);
    
    int min, max;
    min = minNode(root);
    max = minNode(root);
    // print the min and max of tree
    printf("\nMinimum value : %d \nMaximum value : %d ",min, max);

    return 0;
}