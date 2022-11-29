#include "lists.h"

/**
 * sum_listint - sums all the data in the list
 * @head: head of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *srch;

	srch = head;

	if (srch == NULL)
		return (0);

	while (srch != NULL)
	{
		sum += srch->n;
		srch = srch->next;
	}

	return (sum);
}
