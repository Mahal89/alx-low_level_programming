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
int length = 0;
while (s[length] != '\0')
length++
return (length);
}
