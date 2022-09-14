#include "main.h"

/**
  *_isalpha - returns 1 is character
  *is a letter. Otherwise returns 0
  *
  *@c: The character in ASCII code
  *
  *Return: 1 for a letter. Otherwise return 0.
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
