#include "main.h"
/**
 * swap_int - main
 * @a: the variable to swap
 * @b: the variable to swap
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
