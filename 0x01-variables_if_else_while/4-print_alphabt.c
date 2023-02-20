#include <stdio.h>
/**
 *main - entry point
 *Descriprition: variables
 *Return: always 0
*/
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'q' && ch != 'e')
putchar(ch);
putchar('\n');
return (0);
}

