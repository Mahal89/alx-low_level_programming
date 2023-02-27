#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses string
 *@s: string reversed
 *Return: 0
*/
void rev_string(char *s)
{
int length, b;
char *begin, *end,temp;
length = string_length(s);
*begin = s;
end = s;
for (c = 0; c < length - 1; c++)
end++;
for (c = 0; c < length/2; c++)
{
temp = *begin;
*begin = *end;
*end = temp;
begin++;
end--;
}
}
