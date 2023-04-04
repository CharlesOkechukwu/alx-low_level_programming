#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - get node at nth index
 * @head: first node
 * @index: index
 *
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0, nodelen = 0;

	temp = head;
	while (temp != head)
	{
		nodelen++;
		temp = temp->next;
	}
	if (index > nodelen - 1)
	{
		return (NULL);
	}
	temp = head;
	while (temp != NULL && count != index)
	{
		count++;
		temp = temp->next;
	}
	return (temp);
}
