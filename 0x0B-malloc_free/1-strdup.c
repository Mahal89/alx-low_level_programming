#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strdup - entry point
 *@str: pointer
 *Return: returns Null if str is null
*/
char *_strdup(char *str)
{
char *str2;
unsigned int size, k;
str2 = malloc(size * sizeof(char));
if (str == NULL || str2 > size)
return (NULL);
for (k = 0; k < size; k++)
str[k] = str2[k];
return(str2);
}

