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
char *new_str = strdup(str);
if (new_str == NULL)
{
return (NULL);
}
list_t *new_node = (list_t *) malloc(sizeof(list_t));
if (new_node == NULL)
{
free(new_str);
return (NULL);
}
new_node->str = new_str;
new_node->len = new_len;
new_node->next = *head;
*head = new_node;
return (new_node);
}

  
