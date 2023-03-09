#include <stdio.h>
#include "main.h"
/**
 *factorial - prints factorial
 *@n: integer argument
 *Return: -1 for an error,return 0 if success
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
