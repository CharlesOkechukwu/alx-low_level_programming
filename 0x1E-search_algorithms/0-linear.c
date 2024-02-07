#include "search_algos.h"

/**
 * linear_search - search for a value using linear algorithm
 * @array: array to search from
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}
