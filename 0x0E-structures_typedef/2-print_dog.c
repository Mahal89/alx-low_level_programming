#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 *print_dog - entry point
 *@d: parameter
 *Return: return nothing if d is null,nil if an element is null
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else if (d->name == NULL || d->age == NULL || d->owner == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %d\n", d->age);
printf("Owner: %s\n", d->owner);
}
return;
}
    
