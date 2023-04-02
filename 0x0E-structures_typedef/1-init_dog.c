#include <stdio.h>
#include <string.h>
#include "dog.h"
#include "main.h"
#include <stdlib.h>
/**
 *init_dog - entry point
 *@d: 1st arg
 *@name: 2nd arg
 *@age: 3rd arg
 *@owner: 4th arg
 *Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL || name == NULL || owner == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
return;
}
