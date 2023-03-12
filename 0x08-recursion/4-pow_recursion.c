#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion - entry point
 *@x: first argument
 *@y: second argument
 *Return: 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
return (x * _pow_recursion(x, y-1));
}
