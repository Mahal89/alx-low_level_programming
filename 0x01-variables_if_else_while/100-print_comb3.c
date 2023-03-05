#include <stdio.h>
/**
 *main - entry point
 *Return: 0
*/
int main(void)
{
int k, j;
for (k = 0; k < 9; k++)
{
for (j = j + 1; j < 10; j++)
{
putchar((k % 10) + '0');
putchar((j % 10) + '0');
if (k == 8 && j == 10)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
