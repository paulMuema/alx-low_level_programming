#include "main.h"

/**
  *jack_bauer - prints every minute of the day
  *
  *Return: zero return
  */
void jack_bauer(void)
{
	int a, b, x, y;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (x = 48; x <= 53; x++)
			{
				for (y = 48; y <= 57; y++)
				{
					if (a >= 50 && b >= 52)
						break;
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(x);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}
}
