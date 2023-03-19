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
if (str2 == NULL)
return (NULL);
str2 = (char *) malloc(sizeof(char));
str2 = _strdup(str);
return(str2);
free(str2);
}

