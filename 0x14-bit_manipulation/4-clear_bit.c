#include "main.h"

/**
 * clear_bit - set a bit at an index to 0
 * @n: pointer to bit that would be set
 * @index: index at which bit to be reset to 0
 *
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	comp = ~(1 << index);
	*n = *n & comp;
	return (1);
}
