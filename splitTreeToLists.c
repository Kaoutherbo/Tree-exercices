#include "tree.h"
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