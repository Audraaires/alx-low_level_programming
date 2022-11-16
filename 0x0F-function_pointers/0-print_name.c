#include "function_pointers.h"

/**
 * print_name - calls another function with arg name
 * @name: argument
 * @f: funtion pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
