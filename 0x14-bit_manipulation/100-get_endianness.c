#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - checks for endianness
 *
 * Return: int
 */

int get_endianness(void)
{
	int i = 1;
	char *p;

	p = (char *) &i;

	return ((int) *p);
}
