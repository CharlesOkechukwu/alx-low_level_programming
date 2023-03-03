#include "main.h"

/**
 * print_number - print an integer
 * @n: the number to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	x = n;
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
