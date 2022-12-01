#include "main.h"

/**
 * clear_bit - set the value of a bit to 1
 * @n: pointer to inrger
 * @index: index of the bit
 * Return: 1 (success) or -1 (otherwise)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
