#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterate through an array
 * @array: the array
 * @size: sizeof array
 * @action: action to perform
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
