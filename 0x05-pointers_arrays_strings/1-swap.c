#include "main.h"
#include <stdio.h>

/**
  *swap_int - swaps values of two integers
  *@a : integer value one
  *@b : integer value two
  *
  *Return: no return
  */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;

}
