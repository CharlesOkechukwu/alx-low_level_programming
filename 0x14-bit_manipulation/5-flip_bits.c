#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns number of bits to flip from 1 number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, comp = 0, test = 1;

	comp = n ^ m;
	while (comp)
	{
		if (test == (comp & test))
			count++;

		comp >>= 1;
	}
	return (count);
}
