#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array name
 * @n: the number of array items
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
