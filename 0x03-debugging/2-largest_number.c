#include <stdio.h>
#include "main.h"
/**
 *main - prints the largest number
 *Return: always 0
*/
int main(void)
{
int a, b, c;
a = 972;
b = -98;
c = 0;
largest = largest_number(a, b, c);
printf("%d is the largest number\n", largest);
return (0);
}
#include "main.h"
/**
 *largest_number prints the kargest of 3 integers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
  
