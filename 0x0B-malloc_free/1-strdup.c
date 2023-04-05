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
str2 = malloc(sizeof(char) * (strlen(str) + 1));
if (str2 == NULL)
{
return (NULL);
}
str2 = strcpy(str2, str);
return (str2);
}
  
  
