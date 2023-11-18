#include "tree.h"

/**
 * getNum - function that get a number 
 * 
 * @msg: a message to be printed
 * Return: a number
*/
int getNum(char *msg)
{
    int num;

    printf("%s", msg);
    scanf("%d", &num);
    return num;
}
