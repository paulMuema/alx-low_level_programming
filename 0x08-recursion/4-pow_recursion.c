#include "main.h"

/**
  *_pow_recursion - returns value of x raised to power of y
  *@x: integer input one - base
  *@y: integer input two - exponent
  *
  *Return: result
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
