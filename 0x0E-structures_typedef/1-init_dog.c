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
int name_len = strlen(name);
int owner_len = strlen(owner);
d->name = malloc((name_len + 1) * sizeof(char));
if (d->name == NULL)
{
return;
}
d->owner = malloc((owner_len + 1) * sizeof(char));
if (d->owner == NULL)
{
free(d->name);
return;
}
strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;
return;
}
 
