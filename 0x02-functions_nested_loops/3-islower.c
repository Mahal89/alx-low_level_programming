#include <stdio.h>
#include "main.h"
/**
 *_islower - prints value when character is passed to _islower
 *@c: the character to be checked
 *Return: 1 if its a lower case
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
