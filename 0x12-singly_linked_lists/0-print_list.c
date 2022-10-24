#include "lists.h"
/**
  *print_list - prints all elements of a list named list_t
  *@h: a list
  *Return: number of elements in the list.
  */

size_t print_list(const list_t *h)
{
	size_t x;/*x is used as a return variable for the elements*/

	x = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);/*prints the length and string*/
		h = h->next;
		x++;
	}
	return (x); /*returns number of elements*/
}
