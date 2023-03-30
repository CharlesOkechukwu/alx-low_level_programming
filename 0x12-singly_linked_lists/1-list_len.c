#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints length of list
 * @h: linked list
 *
 * Return: length of linked list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
