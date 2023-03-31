#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print list - entry point
 *@h: argument
 *Return: 0 if null,number of elements if successful
*/
size_t print_list(const list_t *h)
{
while (h != NULL)
{
printf("%d", h->len, h->str, h->next);
}
if (h->str == NULL)
{
printf("(nil)");
}
}
