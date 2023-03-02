#include <stdio.h>
#include "main.h"
/**
 *strcat - concatenates strings
 *@dest: first string
 *@src: second string
 *Return: return dest
*/
char *_strcat(char *dest, char *src);
{
char s[100];
int k = 0, j = 0;
char *str;
while (dest[k] != '\0')
{
str[j] = dest[k];
k++;
j++;
}
while (src[k] != '\0')
{
str[j] = src[k];
k++;
j++;
}
str[j] = '\0';
return (dest);
}
	
