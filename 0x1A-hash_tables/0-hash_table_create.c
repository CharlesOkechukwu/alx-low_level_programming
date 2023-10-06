#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 *
 * Return: hash table pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * table->size);
	if (table->array == NULL)
		return (NULL);
	i = 0;
	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
