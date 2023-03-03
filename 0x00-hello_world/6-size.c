#include <stdio.h>
/**
 *main - entry point
 *Description: types sizes
 *Return: always 0
*/
int main(void)
{
int charType;
int intType;
int longintType;
int longlongintType;
int floatType;
printf("Size of a char: %d bytes\n", sizeof(charType));
printf("Size of an int: %d bytes\n", sizeof(intType));
printf("Size of a long int: %d bytes\n", sizeof(longintType));
printf("Size of a long long int: %d bytes\n", sizeof(longlongintType));
printf("Size of a float: %d bytes\n", sizeof(floatType));
return (0);
}
