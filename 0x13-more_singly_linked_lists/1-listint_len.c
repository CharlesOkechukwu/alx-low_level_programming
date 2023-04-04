#include "lists.h"
#include <string.h>

/**
 * listint_len - prints number of nodrs in a singly linked list
 * @h: the first node of the singly linked list
 *
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
