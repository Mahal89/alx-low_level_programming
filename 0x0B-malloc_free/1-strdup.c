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
char *c;
int k;
c = malloc(size * sizeof(char));
if (str == NULL || k > size)
return (Null);
for (k = 0; k < size; k++)
c[k] = str;
_strdup(str);
}
