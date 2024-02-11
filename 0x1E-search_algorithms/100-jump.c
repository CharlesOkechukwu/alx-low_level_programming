#include "search_algos.h"

/**
 * jump_search - jump search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev;

	if (array == NULL || size == 0)
		return (-1);
	jump = sqrt(size);
	prev = 0;
	while (array[jump] < value && jump < size - 1)
	{
		prev = jump;
		jump += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	jump = _min(jump, size - 1);
	while (array[prev] < value && prev < jump)
	{
		prev++;
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}


/**
 * _min -  get the minimum value
 * @step: jump index
 * @len: length
 *
 * Return: minimum value
 */

size_t _min(size_t step, size_t len)
{
	if (step < len)
		return (len);
	return (step);
}
