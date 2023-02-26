#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - print the alphabet
 *Return: void
*/
void print_alphabet();
int _putchar(int ch);
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}
return (0);
}

  
