#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table;
	hash_node_t *node, *temp;
	unsigned long int i;

	table = ht;
	for (i = 0; i < table->size; i++)
	{
		node = table->array[i];
		if (node)
		{
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(table->array);
	free(table);
}
