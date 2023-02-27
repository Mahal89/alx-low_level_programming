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
int temp;
temp = *a;
*a = *b;
*b = temp;
}
int main(void)
{
int d = 5, int e = 4;
_putchar("d = %d\n", d);
_putchar("e = %d", e);
swap (&d, &e);
_putchar("d = %d", d);
_putchar("e = %d", e);
return (0);
}
 
