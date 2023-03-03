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
printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d byte(s)\n", sizeof(intType));
printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %d byte(s)n", sizeof(floatType));
return (0);
}
