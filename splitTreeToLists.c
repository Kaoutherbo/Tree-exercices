#include "tree.h"

/**
 * splitTreeToLists - function that classifies elements of a binary tree
 * into two linked lists based on val using infix Treaveral ,if elementes of tree are greater then
 * or equal to val the we add it into list1, otherwise we add it list2.
 * 
 * @root: Pointer to the root of the tree.
 * @list1: Pointer to the head of the first linked list.
 * @list2: Pointer to the head of the second linked list.
 * @val: The value used as a condition for classification.
 * Return: void
*/

void splitTreeToLists(TreeNode* root, Node** list1, Node** list2, int val)
{
    if (root == NULL) {
        return;
    }
    splitTreeToLists(root->left, list1, list2, val);

    // if data >= val we add it to list1
    if (root->data >= val)
    {
        *list1 = insertNodeList(*list1, root->data);
    }
    // else we add it to list2
    else
    {
        *list2 = insertNodeList(*list2, root->data);
    }
    splitTreeToLists(root->right, list1, list2, val);
}