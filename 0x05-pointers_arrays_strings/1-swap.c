#include <stdio.h>
#include "main.h"
/**
 *swap_int - swaps two integers
 *@*a: first integer to be swapped
 *@*b: second integer to be swaped
 *Return: 0
*/
void swap_int(int *a, int *b)
{
int new;
new = *a;
*a = *b;
*b = new;
}
{
int n;
int h;
n = 5;
h = 4;
_putchar("n = %d\n", n);
_putchar("h = %d", h);
swap (&n, &h);
_putchar("n = %d", n);
_putchar("h = %d", h);
return (0);
}
 
