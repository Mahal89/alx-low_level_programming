#include <stdio.h>
#include <stdlib>
#include "lists.h"
/**
 *print list - entry point
 *@h: argument
 *Return: 0 if null,number of elements if successful
*/
size_t print_list(const list_t *h)
{
size_t info = 0;
while (h != NULL)
printf("%d", h->info);
h = h->next;
if (str == NULL)
printf("(nil)")
}
