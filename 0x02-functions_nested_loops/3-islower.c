#include <stdio.h>
#include "main.h"
/**
 *_islower - prints value when character is passed to _islower
 *Return: 1 if its a lower case
 *Return: 0 if not a lower case
*/
int _islower(int c)
{
int c;
c = 'b';
_putchar("%c : %d", c, _islower);
c = 'E';
_putchar("%c : %d", c, _islower);
}
