#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - entry point
 *@separator: string between strings
 *@n: argument
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list(ap);
unsigned int k;
char *str;
va_start(ap, n);
for (k = 0; k < n; k++)
{
str = va_arg(ap, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (separator != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
