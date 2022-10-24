#include "main.h"
/**
 * rev_string - main
 * @s: the value to reverse
 */
void rev_string(char *s)
{
	int c, i, n;
	char temp;

	n = 0;
	for (i = 0; s[i]; i++)
		if (s[i] != '\0')
			n++;

	n = n - 1;

	for (c = 0; c < n; c++)
	{
		temp = s[c];
		s[c] = s[n];
		s[n] = temp;
		n--;
	}
}
