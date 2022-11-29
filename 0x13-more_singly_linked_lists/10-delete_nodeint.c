#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a specific node
 * @head: pointer to the head
 * @index: index to delete
 * Return: 1 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next;
	unsigned int i;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
			prev = prev->next;
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
