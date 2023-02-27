#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses string
 *@s: string reversed
 *Return: 0
*/
void rev_string(char *s)
{
int count;
 while (*(s + count) != '\0')
count++;
while (count--)
{
_putchar(*(s + (count)));
}
_putchar('\n');
}
