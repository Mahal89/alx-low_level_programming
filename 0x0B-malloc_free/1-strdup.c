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
str2 = malloc(k * sizeof(int));
if (str2 == NULL)
return (NULL);
else if (str2 = strdup(str) != NULL)
return (str2);
free(str2);
return (0);
}
