#include <stdio.h>
/**
 *main - entry point
 *Description: combinations
 *Return: always 0
*/
int main(void)
{
int a = 0;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a < 9)
putchar(',');
putchar(' ');
}
return (0);
}
