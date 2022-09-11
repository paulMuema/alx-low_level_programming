#include <stdio.h>

/**
  *main - prints all letters lowercase except q and e
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a;
	char x[24] = "abcdfghijklmnoprstuvwxyz";

	for (a = 0; a < 24 ; a++)
	{
		putchar(x[a]);
	}
	putchar('\n');
	return (0);
}
