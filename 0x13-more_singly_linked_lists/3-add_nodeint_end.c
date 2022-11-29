#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a list
 * @head: the head of the list
 * @n: data to be stored
 * Return: new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *last;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	last = *head;

	if (*head == NULL)
		*head = temp;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (temp);
}
