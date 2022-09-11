#include <stdio.h>

/**
  *main - prints alphabet in lowercase then uppercase
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a;
	char x[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (a = 0;a < 52; a++)
	{
		putchar(x[a]);
	}
	putchar('\n');
	return (0);
}
