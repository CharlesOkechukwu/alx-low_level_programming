#include "main.h"

/**
 * flip_bits - count bits flipped from a number to another
 * @n: number flipping started from
 * @m: number to flip to
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0, count = 0;

	diff = n ^ m;
	while (diff != 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff = diff >> 1;
	}
	return (count);
}
