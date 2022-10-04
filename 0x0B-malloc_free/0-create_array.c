#include <stdlib.h>
#include "main.h"

/**
  *create_array - creates array of chars
  *@size: size of the array
  *@c: storage char
  *
  *Return: Pointer to the array
  *Otherwise NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		p[a] = c;

	return (p);

}
