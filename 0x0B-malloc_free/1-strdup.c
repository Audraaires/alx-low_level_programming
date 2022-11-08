#include "main.h"
#include <stdlib.h>
/**
 * _strdup - main
 * @str: string
 * Return: pointer to duplicate of str
 */
char *_strdup(char *str)
{
	char *cp;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	cp = malloc(sizeof(char) * (j + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		*(cp + i) = *(str + i);

	return (cp);

	free(cp);
}
