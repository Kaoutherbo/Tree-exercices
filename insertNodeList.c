#include "tree.h"


Node* createNodeList(int val)
{
    Node* newNode = malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}



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

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d \t",temp->val);
        temp = temp->next;
    }
}