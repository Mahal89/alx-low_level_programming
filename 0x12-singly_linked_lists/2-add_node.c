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
list_t *newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->len = strlen(str);
newnode->str = strdup(str);
newnode->next = *head;
*head = newnode;
return (newnode);
}
  
