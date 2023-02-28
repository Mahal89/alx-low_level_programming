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
char s[] = "love programming";
int i;
for (i = 0; s[i] != '\0'; ++i)
_putchar("%d", i);
return (0);
}
