#include "main.h"
#include <stdio.h>

/**
  *print_to_98 - prints all natural numbers from
  *n to 98
  *
  *@x: input as an integer
  *
  *Return: nothing
  */
void print_to_98(int x)
{
	if (x < 98)
	{
		for (; x < 98; x++)
		{
			printf("%d", x);
			printf(",");
			printf(" ");
		}
	}
	else if (x > 98)
	{
		for (; x > 98; x--)
		{
			printf("%d", x);
			printf(",");
			printf(" ");
		}
	}
	printf("%d\n", x);
}
