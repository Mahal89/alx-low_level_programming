#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - entry point
 *@name: 1st arg
 *@age: 2nd arg
 *@owner: 3rd arg
 *Return: Null if all fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}
newdog->name = malloc(strlen(name) + 1);
strcpy(newdog->name, name);
newdog->age = age;
newdog->owner = malloc(strlen(owner) + 1);
strcpy(newdog->owner, owner);
return (newdog);
}
