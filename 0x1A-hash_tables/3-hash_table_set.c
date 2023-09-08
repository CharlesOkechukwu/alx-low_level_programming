#include "hash_tables.h"

/**
 * hash_table_set - insert value and key into hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *table;
	hash_node_t *node, *item;
	unsigned long int index, size;

	table = ht;
	if (table == NULL)
		return (0);
	node = create_node(key, value);
	if (node == NULL)
	{
		return (0);
	}
	size = table->size;
	index = key_index((const unsigned char *)key, size);
	if (index > table->size)
	{
		free(node);
		return (0);
	}
	item = table->array[index];
	if (item == NULL)
	{
		table->array[index] = node;
		return (1);
	}
	if (strcmp(key, item->key) == 0)
	{
		free(item->value);
		item->value = strdup(value);
		return (1);
	}
	node->next = item;
	table->array[index] = node;
	return (1);
}


/**
 * create_node - create node
 * @key: key
 * @value: value
 *
 * Return: node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	if (key == NULL || strcmp(key, "") == 0 || strcmp(key, " ") == 0)
		return (NULL);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}
