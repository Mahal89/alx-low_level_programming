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
char str;
va_start(ap, n);
for (k = 0; k < n; k++)
{
str = va_arg(ap, char);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (k != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
