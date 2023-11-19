#include "tree.h"

/**
 * createNodeList - function that create a Node
 * 
 * @val: value of node
 * Return: new node
*/

Node* createNodeList(int val)
{
    Node* newNode = malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

/**
 * insertNodeList - function that insert a node at the end
 * 
 * @head: pointer to list
 * @val: a value to be add in list
 * Return: pointer to the first element of list
*/
Node* insertNodeList(Node*head, int val)
{
    if(head == NULL)
        head = createNodeList(val);
    else
    {

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = createNodeList(val);
    }
    return head;
}

/**
 * printList - procedure that print list 
 * 
 * @head: pointer to the first element of list
 * Return: void
*/
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d \t",temp->val);
        temp = temp->next;
    }
}