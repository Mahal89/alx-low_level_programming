#include <stdio.h>
#include "main.h"
/**
 *_puts_recursion - prints string
 *@s: string
 *Return: 0
*/
void _puts_recursion(char *s)
{
_puts_recursion(*s);
}
