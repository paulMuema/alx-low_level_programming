#include "lists.h"

/**
  *add_node_end - adds a new node at the end
  *of a list named list_t
  *@head: head of the list
  *@str: string
  *Return: address of new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t x;

	new = malloc(sizeof(list_t)); /*allocates the memory*/
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /*puts in the data*/

	for (x = 0; str[x]; x++)
		;

	new->len = x;
	new->next = NULL;
	last = *head;

	/*if list is empty make new node as head*/

	if (last == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}


