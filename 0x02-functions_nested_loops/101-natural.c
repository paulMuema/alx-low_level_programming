#include <stdio.h>

/**
  *main - prints all natural numbers
  *that are multiples of 3 or 5
  *below 1024
  *
  *Return: Always 0.
  */
int main(void)
{
	int x, result;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			result += x;
	}
	printf("%d\n", result);
	return (0);
}

