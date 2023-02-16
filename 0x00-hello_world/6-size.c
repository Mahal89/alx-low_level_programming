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
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
