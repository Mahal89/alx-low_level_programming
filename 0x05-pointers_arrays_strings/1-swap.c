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
void swap_int(int *a, int *b)
{
int x;
int y;
_putchar("%d", x);
_putchar("%d", y);
swap(&x, &y);
_putchar("%d", x);
_putchar("%d", y);
return (0);
}
 
