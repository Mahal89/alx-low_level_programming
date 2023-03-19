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
str2 = _strdup(str);
if (str == NULL)
return (NULL);
else
str2 = (char *) malloc(sizeof(str2));
return (str2);
free(str2);
return (0);
}
