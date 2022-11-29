#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nmem = 0;

	if (h == NULL)
	{
		return (nmem);
	}
	else
	{
		while (h != NULL)
		{
			nmem += 1;
			h = h->next;
		}
	}
	return (nmem);
}
