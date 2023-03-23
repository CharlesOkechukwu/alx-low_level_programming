#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separator
 * @n: size
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	char *s;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ag, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("%s", "(nil)");
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ag);
	putchar('\n');
}
