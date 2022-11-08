#include"main.h"
#include <stdlib.h>
/**
 * str_concat - main
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or possible errors
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	con = malloc(sizeof(char) * (i + j + 1));

	if (con == NULL)
	{
		free(con);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		con[k] = s1[k];

	for (l = 0; l < j; k++, l++)
		con[k] = s2[l];

	return (con);

	free(con);
}
