#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @head: doubly linked list
 * @n: number
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	return (new);
}
