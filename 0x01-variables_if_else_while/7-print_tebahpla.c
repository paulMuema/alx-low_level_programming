#include <stdio.h>

/**
  *main - prints lowercase alphabets in reverse
  *
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int p;

	for (p = 122; p > 96; p--)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
