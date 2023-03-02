#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *strcat - concatenates strings
 *@dest: first string
 *@src: second string
 *Return: return dest
*/
char *_strcat(char *dest, char *src);
{
  int k, j;
for (k = 0; dest[k] != '\0'; k++)
for (j = 0; src[j] != '\0'; j++)
{
dest[k] = src[j];
k++;
}
rerurn (dest);
	
