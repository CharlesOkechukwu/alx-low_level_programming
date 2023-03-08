#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonal lines in a matrix
 * @a: array name
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x = 0, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size + 1) * x];
		sum2 += a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
