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
printf("%s\n", d->name ? d->name : "(nil)");
printf("%d\n", d->age);
printf("%s\n", d->owner ? d->owner : "(nil)");
return;
}
    
