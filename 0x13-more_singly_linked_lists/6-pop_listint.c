#include "lists.h"
#include <string.h>

/**
 * pop_listint -  delete first node in list
 * @head: first node
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (num);
}
