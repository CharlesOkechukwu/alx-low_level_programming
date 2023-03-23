#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - get function operation
 * @s: the string for the operator
 *
 * Return: function
 */

int (*get_op_func(char *s))(int, int)
{
	/* an array mad with the tpedef op_t structure */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;


	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}

