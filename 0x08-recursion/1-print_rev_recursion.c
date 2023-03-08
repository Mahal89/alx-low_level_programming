#include <stdio.h>
#include "main.h"
/**
 *_print_rev_recursion - prints string
 *@s: character
 *Return: 0
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_print_rev_recursion(s + 1);
}
  
