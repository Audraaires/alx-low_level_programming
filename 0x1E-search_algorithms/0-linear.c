#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers using the Linear
* search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: the nmber of elements in array
* @value: is the value to search for
* Return: If value is not present in array or if array
* is NULL, your function must return -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		if (array[i] != value)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}