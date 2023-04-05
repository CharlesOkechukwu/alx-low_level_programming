#include "lists.h"
#include <string.h>

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: first node
 * @index: index to delete at
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int count = 0, node = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	prev = *head;
	while (count != index - 1)
	{
		prev = prev->next;
		count++;
	}
	while (node != index)
	{
		current = current->next;
		node++;
	}
	if (node == index)
	{
		prev->next = current->next;
		free(current);
	}
	return (1);
}
