#include <stdio.h>
#include <stdlib>
#include "lists.h"
/**
 *add_node - entry point
 *@head: current head
 *@str: string to be duplicated
 *Return: Null if it fails,else new node
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
else
new_node->str = new_str;
new_str = strdup(str);
new_node->len = new_len;
new_node->next = **head;
**head = new_node;
return (new_node);
}

  
