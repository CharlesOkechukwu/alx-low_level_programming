#include "lists.h"

/**
 * add_dnodeint - add node to the begining
 * @head: head node
 * @n: number to add
 *
 * Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;
	*head = new;
	return (*head);

}
