#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of array
 * @a: array passed into the function
 * @n: number of array item to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, x;

	x = n - 1;
	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (a[i] != a[x])
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
