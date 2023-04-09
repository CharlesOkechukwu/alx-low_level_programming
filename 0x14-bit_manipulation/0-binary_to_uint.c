#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary number to convert
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);
	while  (b[count])
	{
		count++;
	}
	while (count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		if (b[count] == '1')
		{
			sum += 1 << i;
		}
		i++;
	}
	return (sum);
}
