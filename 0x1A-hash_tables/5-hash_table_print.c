#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char *comma = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s' : '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
