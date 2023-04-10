#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - set bit at an index to zero
 * @n: pointer to the long int
 * @index: index to set to zero
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
