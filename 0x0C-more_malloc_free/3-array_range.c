#include "main.h"
#include <stdlib.h>
/**
 * array_range - main
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
