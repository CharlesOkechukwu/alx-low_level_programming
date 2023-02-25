#include "main.h"

/**
 * print_diagonal - prints the / character
 * @n: the number of times to print the character
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
