#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - entry point
 *@str: pointer
 *Return: returns Null if str is null
*/
char *_strdup(char *str)
{
char *str2;
int k = strlen(str);
str2 = _strdup(str);
if (str == NULL)
return (NULL);
else
str2 = (char*) malloc(k * sizeof(int));
return (str2);
free(str2);
return (0);
}
