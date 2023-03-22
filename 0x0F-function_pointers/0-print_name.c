#include <stdio.h>
#include "function_pointer.h"
/**
 *print_name - entry point
 *@name: 1st argument
 *@f: 2nd argument
 *Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
