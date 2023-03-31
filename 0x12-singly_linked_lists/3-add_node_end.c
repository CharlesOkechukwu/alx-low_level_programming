#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node to the end of list
 * @head: head of the list
 * @str: string to add to node
 *
 * Return: address to new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;
		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new_list;
			return (temp);
		}
	}
	return (NULL);
}

/**
 * _strlen - return string length
 * @s: string to count
 *
 * Return: int
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
