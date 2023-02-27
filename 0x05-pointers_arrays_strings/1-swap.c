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
 
