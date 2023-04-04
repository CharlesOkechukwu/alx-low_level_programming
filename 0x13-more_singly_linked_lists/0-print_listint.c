#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint - print elements in a singly linked list
 * @h: the head node of the linked list
 *
 * Return: ....
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
