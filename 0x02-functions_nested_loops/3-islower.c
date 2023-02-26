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
c = 98;
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
   
