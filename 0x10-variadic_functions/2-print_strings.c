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
va_list ap;
unsigned int k;
va_start(ap, n);
for (k = 0; k < n; k++)
printf("%s", k);
if (separator != NULL)
printf("%s", va_arg(ap, int));
else if (k == NULL)
printf("(nil)", k);
va_end(ap);
}
