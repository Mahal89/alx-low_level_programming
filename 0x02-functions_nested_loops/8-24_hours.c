#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - prints 24 hours
 *Return: 0
*/
void jack_bauer(void)
{
int k,j;
for (k = 0; k <= 23; k++)
{
for (j = 0; j <= 59; j++)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
}
}
}
  
