#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free memory
 * @head: first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	head = NULL;
}
