#include "main.h"

/**
 * get_endianness - cjecks for endianness
 * @void: ....
 *
 * Return: int
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *str;

	str = (char *)&i;
	return ((int) *str);
}
