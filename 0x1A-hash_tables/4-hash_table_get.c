#include "hash_tables.h"

/**
 * hash_table_get - the hash table
 * @ht: hash table
 * @key: the key
 *
 * Return: the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || (strcmp(key, "") == 0) || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	if (node->next != NULL)
	{
		while (strcmp(key, node->key) != 0)
			node = node->next;
	}
	return (node->value);
}
