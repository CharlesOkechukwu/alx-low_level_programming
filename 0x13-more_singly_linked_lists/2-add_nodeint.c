#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds new node to the begining ofsingly linked list
 * @head: the first node
 * @n: data to put in the node
 *
 * Return: address of the singly stringed list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr =  malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
