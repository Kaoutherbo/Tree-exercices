#include "tree.h"

/**
 * getSize - function that return
 * the size of the tree
 * 
 * @msg: a message to be printed
 * Return: the size of the tree
*/
int getSize(char *msg)
{
    int size;
    printf("%s", msg);
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Error! , Invalid size please try again ! \n");
        return getSize(msg);
    }
    else
        return size;
    
}