#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end -  adds node to the end of a singly linked list
 * @head: first node of the list
 * @n: the data to add to the node
 *
 * Return: adress to the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
		return (temp);
	}
}
