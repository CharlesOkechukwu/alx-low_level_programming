#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all arguments together
 * @n: size of arguments
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(ag, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);
	return (sum);
}
