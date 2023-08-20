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
	unsigned int count = 0, len = 0;
	dlistint_t *temp, *new, *current;

	if (*h == NULL)
		return (NULL);
	current = *h;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			if (count == len - 1)
			{
				return (add_dnodeint_end(h, n));
			}
			temp->next->prev = new;
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
