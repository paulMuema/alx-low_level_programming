#include "lists.h"
/**
  *add_node - adds a new node at beginning of
  *list named list_t
  *@head: head of the list
  *@str: string
  *Return: address of new element
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t x;

	new = malloc(sizeof(list_t)); /*allocates the node */
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /*puts in the data*/

	for (x = 0; str[x]; x++)
		;

	new->len = x;
	new->next = *head;/*makes next of new node as head*/
	*head = new; /*moves head to point at new node*/

	return (*head);
}
