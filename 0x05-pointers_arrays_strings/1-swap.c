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
int a;
int b;
a = 5;
b = 4;
_putchar("a = %d\n", a);
_putchar("b = %d", b);
swap (&a, &b);
_putchar("a = %d", a);
_putchar("b = %d", b);
return (0);
}
 
