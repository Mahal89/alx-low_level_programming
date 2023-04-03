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
else
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age ? d->age : "(nil)");
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
