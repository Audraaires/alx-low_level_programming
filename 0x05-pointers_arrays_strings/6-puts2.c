#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */

void puts2(char *str)
{
	char c;
	int n, i, j = 0;

	n = 0;
	for (i = 0; str[i]; i++)
		if (str[i] != '\0')
			n++;

	while (j < n)
	{
		c = str[j];
		_putchar(c);
		j += 2;
	}
	_putchar('\n');
}
