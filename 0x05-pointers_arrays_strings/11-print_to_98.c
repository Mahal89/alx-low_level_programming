#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - entry point
 *@n: integer
 *Return: 0
*/
void print_to_98(int n)
{
int n = 0;
for (n = 0; n <= 98; n++)
{
_putchar("%d", n);
_putchar(", ");
}
_putchar("\n");
return (0);
}
