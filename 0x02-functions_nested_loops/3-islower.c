#include "main.h"

/**
  *_islower - returns 1 if input is lowercase
  *Otherwise returns 0
  *
  *@c: The character in ASCII code
  *
  *Return: 1 for lowercase character. Otherwise 0.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
