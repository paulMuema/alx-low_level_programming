#include <stdio.h>

/**
  *main - prints alphabet in lowercase
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char p[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(p[x]);
	}
	putchar('\n');
	return (0);
}
