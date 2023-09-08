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
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			flag = 1;
			printf("'%s' : '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}