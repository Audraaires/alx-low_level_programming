#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node
 * at given position.
 * @head: head of the list
 * @idx: where new node should be created
 * @n: data to be stored at new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *srch, *temp;

	srch = *head;

	if (idx != 0)
	{
		while ((count < (idx - 1)) && (srch != NULL))
		{
			srch = srch->next;
			count++;
		}
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if ((idx != 0) && (srch == NULL))
		return (NULL);

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = srch->next;
		srch->next = temp;
	}
	return (temp);
}
