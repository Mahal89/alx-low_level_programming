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
size_t count = 0;
while (h != NULL)
{
printf("[%d] %s", h->len, h->str);
h = h->next;
count++
}
if (h->str == NULL)
{
printf("[0] (nil)");
}
}
