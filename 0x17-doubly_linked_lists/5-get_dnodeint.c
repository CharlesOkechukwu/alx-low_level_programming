#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at an index
 * @head: the doubly linked list
 * @index: indext of the node
 *
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}
	temp = head;
	return (temp);
}
