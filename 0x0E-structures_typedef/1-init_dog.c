#include <stdio.h>
#include <string.h>
#include "dog.h"
#include "main.h"
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
int k;
for (k = 0; name[k] != '\0'; k++)
{
d->name[k] = name[k];
}
d->name[k] = '\0';
d->age = age;
for (k = 0; owner[k] != '\0'; k++)
{
d->owner[k] = owner[k];
}
d->owner[k] = '\0';
}
 
