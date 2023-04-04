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

	temp = (*head);
	num = (*head)->n;
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		return (num);
	}
}
