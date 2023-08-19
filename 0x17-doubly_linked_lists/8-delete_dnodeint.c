#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index in doubly linked list
 * @head: the doubly linked list
 * @index: index to delete from
 *
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0, len = 0;
	dlistint_t *temp = NULL;

	if (*head == NULL)
		return (-1);
	len = dnode_len(head);
	if (index == 0)
	{
		temp = *head;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (count == index)
		{
			if (count == len - 1)
			{
				if (temp->prev != NULL)
					temp->prev->next = NULL;
				else
					*head = temp->next;
				free(temp);
				return (1);
			}
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}

/**
 * dnode_len -  check doubly linked list length
 * @h: doubly linked list
 *
 * Return: int
 */

unsigned int dnode_len(dlistint_t **h)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = *h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
