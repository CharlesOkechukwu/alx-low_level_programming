#include "lists.h"
#include <string.h>

/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: first node
 * @idx: index to insert node
 * @n: data of node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int nodelen = 0, count = 0;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		nodelen++;
		temp = temp->next;
	}
	if (nodelen < idx)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (idx == count)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	temp = *head;
	while (count != idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (count == idx - 1)
	{
		ptr->next = temp->next;
		temp->next = ptr;
	}
	return (ptr);
}
