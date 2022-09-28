#include "main.h"

/**
  *_strlen_recursion - returns length os a string
  *@s: input type string
  *
  *Return: length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /*Null terminator*/
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
