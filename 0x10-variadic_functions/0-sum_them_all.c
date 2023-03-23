#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - entry point
 *@n: argument
 *Return: 0 if n is nil
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int k, sum;
va_start(ap, n);
sum = 0;
for (k = 0; k < n; k++)
{
sum += va_arg(ap, n);
}
va_end(ap);
return (sum);
}
  
