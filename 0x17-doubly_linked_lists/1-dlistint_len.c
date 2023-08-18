#include "lists.h"

/**
 * dlistint_len - return leugth of doubly linked lists
 * @h: doubly linked list
 *
 * Return: number
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
