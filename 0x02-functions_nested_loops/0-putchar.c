#include "main.h"

/**
  *main - prints _putchar
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int x[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, size;

	size = sizeof(x) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(x[count]);
	}
	_putchar('\n');
	return (0);
}
