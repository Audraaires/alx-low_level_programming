#include "lists.h"

/**
 * add_nodeint - adds a node to the begining of list
 * @head: head of the list
 * @n: data to be stored int the list
 * Return: the new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
