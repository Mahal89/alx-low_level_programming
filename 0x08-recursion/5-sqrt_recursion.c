#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 *_sqrt_recursion - entry point
 *@n: argument
 *Return: return -1 if n has no square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
sqrt(n);
return (0);
}
