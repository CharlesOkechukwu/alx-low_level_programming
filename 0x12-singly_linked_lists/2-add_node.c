#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to beginning of list
 * @head: head of string
 * @str: the string to add to the node
 *
 * Return: address to the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	return (0);
}

/**
 * _strlen - returns the string length
 * @s: the string to count
 *
 * Return: strlen
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
