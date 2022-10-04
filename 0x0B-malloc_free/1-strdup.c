#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns pointer to newly allocated space in memory.
  *@str: string.
  *
  *Return: pointer of an array of characters
  */
char *_strdup(char *str)
{
	char *p;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	p = (char *)malloc(sizeof(char) * (a + 1));

	if (p == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		p[b] = str[b];

	return (p);
}
