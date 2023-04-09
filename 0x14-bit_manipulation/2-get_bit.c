#include "main.h"
#include <stdlib.h>

/**
 * get_bit - get number at a given index
 * @n: the long number
 * @index: index
 *
 * Return: unsigned int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, div;

	if  (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	div = 1 << index;
	num = n & div;
	if (num == div)
		return (1);

	return (0);
}
