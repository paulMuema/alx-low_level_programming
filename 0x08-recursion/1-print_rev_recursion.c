#include "main.h"

/**
  *_print_rev_recursion - prints string in reverse
  *@s:input type string
  *
  *Returns: no return
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1); /*pointer notation or arithmetic*/
	_putchar(*s);

	}

}
