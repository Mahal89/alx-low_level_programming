#include <stdio.h>
#include "main.h"
/**
 *reverse_array - reverses array
 *@a: string
 *@n: integer
 *Return: 0
*/
void reverse_array(int *a, int n)
{
int k, last;
last = n - 1;
for (k = 0; k < n/2; k++)
{
int start, end;
start = a[k];
end = a[last];
a[k] = end;
a[last] = start;
last--;
}
}
