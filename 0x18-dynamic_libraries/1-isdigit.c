#include "main.h"
/**
*_isdigit - Checks for digits (0 through 9)
*@c: Takes in a character/digit
*Return: 1 if digit, and 0 if anything else
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	return (1);

	return (0);
}
