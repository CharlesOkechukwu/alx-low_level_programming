#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: the data type
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ag;
	unsigned int i = 0, j = 0;
	char *separator = "";

	f_dt form_types[] = {
		{"c", print_a_char},
		{"i", print_a_integer},
		{"f", print_a_float},
		{"s", print_a_char_ptr}
	};
	va_start(ag, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, ag);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ag);
	printf("\n");
}

/**
 * print_a_integer - print an int
 * @separator: separator
 * @ag: list of variadic arguments
 *
 * Return: void
 */

void print_a_integer(char *separator, va_list ag)
{
	printf("%s%i", separator, va_arg(ag, int));
}

/**
 * print_a_char - prints a character
 * @separator: separator
 * @ag: list of variadic args
 *
 * Return: void
 */

void print_a_char(char *separator, va_list ag)
{
	printf("%s%c", separator, va_arg(ag, int));
}

/**
 * print_a_float - prints a float
 * @separator: the separator
 * @ag: variadic arguments
 *
 * Return; void
 */

void print_a_float(char *separator, va_list ag)
{
	printf("%s%f", separator, va_arg(ag, double));
}

/**
 * print_a_char_ptr - prints a character pointer
 * @separator: separator
 * @ag: variadic argument
 *
 * Return: void
 */

void print_a_char_ptr(char *separator, va_list ag)
{
	char *s = va_arg(ag, char *);

	if (s == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, s);
}
