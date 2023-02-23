#include <stdio.h>
#include "main.h"
int main(void)
{
char n = 'a';
putchar("%c: %d\n", n, _isupper(n));
n = 'A';
putchar("%c: %d\n", n, _isupper(n))
return (0);
}
    
