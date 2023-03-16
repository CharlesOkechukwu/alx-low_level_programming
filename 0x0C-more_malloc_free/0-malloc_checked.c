#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - assign a space with malloc
 * @b: size of space
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);

	return (d);
}
