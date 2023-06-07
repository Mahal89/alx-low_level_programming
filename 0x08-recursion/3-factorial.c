#include <stdio.h>
#include "main.h"
/**
 *factorial - function
 *@n: argument
 *Return: -1 if an error,0 if factorial
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
