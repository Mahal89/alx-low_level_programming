#include <stdio.h>
/**
 *main - entry point
 *Description: learning SE
 *Return: always 0
*/
int main(void)
{
int num = 0;
char ch = 'a';
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
return (0);
}
