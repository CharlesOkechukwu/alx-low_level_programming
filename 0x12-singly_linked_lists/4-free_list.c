#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: the first node pointint to lsit
 *
 * Return; void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
