#include "lists.h"

/**
  *free_list - frees a list
  *@head: head of list
  *
  *Return: no return
  */

void free_list(list_t *head)
{
	list_t *x;

	while ((x = head) != NULL)
	{
		head = head->next;
		free(x->str);
		free(x);
	}
}
