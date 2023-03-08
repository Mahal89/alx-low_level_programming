#include <stdio.h>
#include "main.h"
/**
 *_strlen_recursion - prints length
 *@s: character
 *Return: 0
*/
int _strlen_recursion(char *s)
{
if (*s)
{
_strlen_recursion(s + 1);
_putchar(*s);
}
return (0);
}     
