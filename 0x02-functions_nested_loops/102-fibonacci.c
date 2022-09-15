#include <stdio.h>

/**
 *main - prints the first 50
 *Fibonacci numbers
 *
 *Return: Always 0.
 */
int main(void)
{
	int x;
	long int a, b, sum;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (x = 0; x < 48; x++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
