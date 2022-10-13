#include "function_pointer.h"

/**
  *int_index - searches for an integer
  *@array : input integer array
  *@size: size of array
  *@cmp : pointer to function to compare the values
  *
  *Return: index of first element for which cmp function does
  *not return 0
  *Otherwise returns -1 if no element matches
  *and size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
