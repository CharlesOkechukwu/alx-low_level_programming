#include "lists.h"
#include <string.h>

/**
 * free_listint -  free memory
 * @head: first node in list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	temp = head;
	while (temp != NULL)
	{
		ptr = temp->next;
		free(temp);
		temp = ptr;
	}
}
