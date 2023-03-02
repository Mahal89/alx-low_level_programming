#include <stdio.h>
#include "main.h"
/**
 *_strncpy - copies 2 strings
 *@dest: 1st string
 *@src: 2nd string
 *@n: integer
 *Return: 0
*/
int *_strncpy(char *dest, char *src, int n)
{
int k = 0;
while (dest[k] != '\0')
{
src[k] = dest[k];
k++;
}
src[k] = '\0';
}

