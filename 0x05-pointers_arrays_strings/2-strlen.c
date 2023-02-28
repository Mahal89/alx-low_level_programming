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
char [100];
int i;
for (i = 0; s[i] != '\0'; ++i)
_putchar("length is: %d", i);
}
