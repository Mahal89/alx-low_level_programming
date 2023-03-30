#include <stdio.h>
#include <stdlib>
#include "lists.h"
/**
 *struct list_s - singly linked list
 *@str: string (malloc'ed string)
 *@len: length of the string
 *@next: points to the next node
 *
 *Description: singly linked list node structure
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

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

  
