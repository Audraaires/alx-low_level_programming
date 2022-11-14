#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes the variable d
 * @d: struct dog
 * @name: name of dog
 * @age: dog's age
 * @owner: name of owner
 * Return: no returny
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
