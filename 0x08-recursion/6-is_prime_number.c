#include <stdio.h>
#include "main.h"
/**
 *is_prime_number - entry point
 *@n: argument
 *Return: return 1 if its prime,0 if its not
*/
int is_prime_number(int n)
{
if (n >= 2 && n % 2 != 0)
{
return (1);
}
else
return (0);
}
