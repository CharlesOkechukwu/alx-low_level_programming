#include "main.h"
#include <stdlib.h>

/**
 * print_binary - convert unsigned int to binary
 * @n: the number to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	divider(n);
}

/**
 * divider - convert to binary with recursive function
 * @n: int
 *
 * Return: void
 */

void divider(unsigned long int n)
{
	if (n < 1)
		return;
	divider(n >> 1);
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
