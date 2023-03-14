#include <stdio.h>
#include "main.h"
/**
 *create_array - entry point
 *@size: size of char
 *@c: character variable
 *Return: Null if size is 0,pointer if successful
*/
char *create_array(unsigned int size, char c)
{
unsigned int k;
char *s;
s = malloc(sizeof(char) * size);
if (size == 0 && s = NULL)
return (NULL);
for (k = 0; k < size; k++)
s[k] = c;
return (s);
}
