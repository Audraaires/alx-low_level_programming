#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, lname, lowner;

	new = malloc(sizeof(*new));
	if (new == NULL || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	new->name = malloc(lname + 1);
	new->owner = malloc(lowner + 1);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	for (i = 0; i < lowner; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	new->age = age;

	return (new);
}
