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
int k;
for (k = 0; src[k] != '\0'; k++)
if (k < n)
dest[k] = src[k];
while (k < n)
dest[k++] = '\0';
return (dest);
}
