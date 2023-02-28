#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strlen - prints length of string
 *@s: points at the string
 *Return: 0
 */
int _strlen(char *s)
{
char s[];
int i;
for (i = 0; s[i] != '\0'; ++i)
_putchar("%c", i);
return (0);
}
