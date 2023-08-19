#include "lists.h"

/**
 * sum_dlistint - calculates the sum of n in a doubly linked list
 * @head: doubly linked list
 *
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
