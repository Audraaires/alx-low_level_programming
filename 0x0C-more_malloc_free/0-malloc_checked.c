#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - main
 * @b: amount of bytes
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}
