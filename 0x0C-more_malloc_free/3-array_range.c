#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints array of a range
 * @max: max number
 * @min: minimum number
 *
 * Return: array int
 */

int *array_range(int min, int max)
{
	int *s, i = 0;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
