#include "tree.h"
/**
 * insertNode - Function to insert a key into the binary tree
 * 
 * @root: the root of the tree
 * @data: the data that we'll be in the created Node
 * Return: pointer to the root of the tree after 
 * insert the new Node
*/

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