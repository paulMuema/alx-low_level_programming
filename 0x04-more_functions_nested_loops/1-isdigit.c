#include "main.h"

/**
  * _isdigit - checks if character is
  * a number between 0 and 9
  * @x : input number as an integer
  *
  *Return: 1 if number is between 0 and 9
  *Otherwise 0
  */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
