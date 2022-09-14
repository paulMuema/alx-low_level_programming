#include "main.h"

/**
  *print_sign - determines whether number
  *is postive, negative or equal to zero.
  *
  *@n :The input number as an interger.
  *
  *Return: 1 if greater than zero
  *0 if equal to zero
  *-1 if less than zero.
  */
int print_sign(int n)
{
	if (n  > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return  (0);
	}
	_putchar('\n');
}
