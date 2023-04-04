#include "lists.h"
#include <string.h>

/**
 * sum_listint - sum all elements in a list
 * @head: head file
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
