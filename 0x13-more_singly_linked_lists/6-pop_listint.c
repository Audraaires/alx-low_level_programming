#include "lists.h"

/**
 * pop_listint - deletes the head of  list
 * @head: head of a list
 * Return: the data stored in the head
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	listint_t *prev;

	if (*head == NULL)
		return (0);

	temp = *head;

	n = temp->n;

	prev = temp->next;

	free(temp);

	*head = prev;

	return (n);
}
