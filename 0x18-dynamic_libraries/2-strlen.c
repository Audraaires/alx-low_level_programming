#include "main.h"
/**
 * _strlen - main
 * @s: the array to count
 * Return: the length
 */
int _strlen(char *s)
{
	int n, i;

	n = 0;
	for (i = 0; s[i]; i++)
		if (s[i] != '\0')
			n++;

	return (n);
}
