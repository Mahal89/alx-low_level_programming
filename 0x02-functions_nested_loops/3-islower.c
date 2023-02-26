#include <stdio.h>
#include "main.h"
/**
 *_islower - prints value when character is passed to islower
 *Return: 1 if its a lower case
 *Return: 0 if not a lower case
*/
int _islower(int c)
{
char c;
c = 'b';
_putchar("%c : %d", c, islower);
c = 'E';
_putchar("%c : %d", c, islower);
}
