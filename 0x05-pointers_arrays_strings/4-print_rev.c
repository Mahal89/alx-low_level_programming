#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses string
 *@s: string reversed
 *Return: 0
*/
void rev_string(char *s)
{
int length, c;
char *begin, *end, temp;
length = string_length(s);
*begin = s;
*end = s;
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
