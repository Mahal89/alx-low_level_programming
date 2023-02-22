#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - print the alphabet
 *Return: void
*/
char print_alphabet(char ch);
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
