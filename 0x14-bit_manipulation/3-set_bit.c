#include "main.h"
#include <stdlib.h>

/**
 * set_bit - set bit at an index to 1
 * @n: pointer to the number
 * @index: the index to set to 1
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1 << index;
	return (1);
}
