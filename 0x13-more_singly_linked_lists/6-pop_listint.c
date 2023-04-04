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

	num = (*head)->n;
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (num);
}
