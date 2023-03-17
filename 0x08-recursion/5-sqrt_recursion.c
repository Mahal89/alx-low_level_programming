#include <stdio.h>
#include "main.h"
/**
 *_sqrt_recursion - entry point
 *@n: argument
 *Return: return -1 if n has no square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n > 0)
{
_sqrt_recursion(n);
}
return (0);
}
