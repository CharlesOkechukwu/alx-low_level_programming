#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with separators
 * @separator: separator
 * @n: size of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ag, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ag);
	putchar('\n');
}
