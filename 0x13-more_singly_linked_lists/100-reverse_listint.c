#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: first node
 *
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = prev;
		prev = temp;
	}
	*head = prev;
	return (*head);
}
