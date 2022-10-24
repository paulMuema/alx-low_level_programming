#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *list_len - returns number of elements in linked list list_t
  *@h: a list
  *
  *Return: number of elements in a list
  */

size_t list_len(const list_t *h)
{

	size_t x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);

}
