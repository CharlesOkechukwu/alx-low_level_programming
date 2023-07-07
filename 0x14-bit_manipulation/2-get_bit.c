#include "main.h"

/**
 * get_bit -  get index where a bit occured
 * @n: the long int
 * @index: index of the bit
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int compare;

	if ((sizeof(unsigned long int) * 8) < index)
	{
		return (-1);
	}
	n = n >> index;
	compare = n & 1;
	return (compare);
}
