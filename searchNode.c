#include "tree.h"

/**
 * searchNode - function that search about
 * a value in the tree, if it is in the tree
 * the the return is true , false otherwise
 * 
 * @root: pointer to the root of tree
 * @key: tha value that we gonna search about it in tree
 * Return: true or false
*/
bool searchNode(TreeNode* root, int key)
{
    if (root == NULL || root->data == key) {
        return true;
    } 
    else if (root->data > key)
    {
        return searchNode(root->left, key);
    } 
    else if (root->data < key)
    {
        return searchNode(root->right, key);
    }
    else
        return false;

}