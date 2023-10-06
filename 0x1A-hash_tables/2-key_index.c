#include "hash_tables.h"

/**
 * key_index - generate the index to store a key
 * @key: the key to generate code for
 * @size: size of the table
 *
 * Return: int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_code;

	hash_code = hash_djb2(key);
	index = hash_code % size;
	return (index);
}
