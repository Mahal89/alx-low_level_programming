#include <stdio.h>
#include "main.h"
/**
 *_puts_recursion - function
 *@s- argument
 *Return- 0
*/
void _puts_recursion(char *s)
{
if(s == NULL)
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
