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
		while (temp != NULL)
		{
			if (index == idx - 1)
			{
				if (idx == count - 1)
					return (add_dnodeint_end(h, n));
				temp->next->prev = new;
				new->next = temp->next;
				temp->next = new;
				new->prev = temp;
				return (new);
			}
			index++;
			temp = temp->next;
		}
		return (NULL);
	}
	else if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));
	return (NULL);
}

