#include "3-calc.h"

/**
  *op_add - adds two numbers.
  *@a : first integer
  *@b : second integer
  *
  *Return: sum.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - subtracts two numbers
  *@a : first integer
  *@b : second integer
  *
  *Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplies two numbers
  *@a : first integer
  *@b : second integer
  *
  *Return: multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides two numbers
  *@a: first integer
  *@b: second integer
  *
  *Return: division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Divide by 0\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod - calculates modulus
  *@a : first integer
  *@b : second integer
  *
  *Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error Divide by 0\n");
		exit(100);
	}
	return (a % b);
}
