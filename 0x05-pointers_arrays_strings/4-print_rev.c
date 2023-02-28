#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses string
 *@s: string reversed
 *Return: 0
*/
void rev_string(char *s)
{
if (*s)
{
reverse(s+1);
_putchar("%c", s);
}
