#include "function_pointers.h"

/**
 * array_iterator - executes a funtion on each array element
 * @array: the stated array
 * @size: the size of the array
 * @action: the function to be called
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
