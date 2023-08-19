#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index in doubly linked list
 * @h: doubly linked list
 * @idx: index to insert at
 *  @n: value in new node
 *
 *  Return: new node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, index = 0;
	dlistint_t *temp = NULL, *new, *current = NULL;

	current = *h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (idx > count - 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h != NULL)
	{
		temp = *h;
		while (index != idx - 1)
		{
			index++;
			temp = temp->next;
		}
		temp->next->prev = new;
		new->next = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
	}
	return (new);
}

