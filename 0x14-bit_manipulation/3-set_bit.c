#include "main.h"

/**
 * set_bit -  set bit value to 1 at a given index
 * @n: number to be changed
 * @index: index at which to change number
 *
 * Return: index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	num = (*n |= 1 << index) ? 1 : -1;
	return (num);
}
