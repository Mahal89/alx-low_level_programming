#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - entry point
 *@separator: string between numbers
 *@n: number of integers
 *Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...);
{
va_list ap;
unsigned int k;
va_start(ap, n);
if (separator == NULL)
return;
else
if (seperator != NULL)
printf("%s", seperator);
for (k = 0; k < n; k++)
printf("%d", va_arg(ap, int));
printf("\n");
va_end (ap)
}
     
