#include "tree.h"

/**
 * getValues - procedure that get values from user
 * and insert them into the tree
 * 
 * @root: the root of the tree
 * @size: the size of tree
*/
void getValues(TreeNode *root, int size)
{
    int value;

    // Get values from the user and insert them into the tree
    for (size_t i = 0; i < size; ++i)
    {
        printf("Enter value number %d:\n", i + 1);
        scanf("%d", &value);
        root = insertNode(root, value);
    }
}