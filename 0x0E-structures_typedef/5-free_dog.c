#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - entry point
 *@d: pointer to struct
 *Return: 0
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
