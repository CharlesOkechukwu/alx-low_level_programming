#include "main.h"

/**
 * set_string - set a pointer to a pointer
 * @s: pointer to pointer
 * @to: pointer
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
