#include "main.h"

/**
 * binary_to_unit - converts binary number to int
 * @b: pointer pointing to the binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, index = 0, sum = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] != '0')
			sum += 1 << index;
		index++;
	}
	return (sum);
}

/**
 * _strlen - calculate length of the string
 * @str: the pointer to string
 *
 * Return: int
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
