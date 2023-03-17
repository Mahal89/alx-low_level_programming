#include <stdio.h>
#include <stdlib>
#include "main.h"
/**
 *malloc_checked - entry point
 *@b: unsigned int
 *Return: return pointer or 98 if unsuccesful
*/
void *malloc_checked(unsigned int b)
{
int *str;
if (*str == NULL)
return (98);
else
str = malloc(b * sizeof(unsigned int));
return (str);
}
