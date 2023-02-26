#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - print alphabet 10 times
 *Return: always 0
*/
void print_alphabet_x10(void)
{
char ch;
int n = 0;
while (n < 10)
{
ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
n++;
}
}
  
