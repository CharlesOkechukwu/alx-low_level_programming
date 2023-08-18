#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: list to free
 *
 * Reurn: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
