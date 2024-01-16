#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: sorted array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		middle = (right + left) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
