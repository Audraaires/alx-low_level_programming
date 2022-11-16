#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: function to compare
 * Return: index of the first non-zero return of cmp
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
