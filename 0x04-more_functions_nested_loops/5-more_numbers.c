#include "main.h"

/**
 * more_numbers - print more numbers ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int l;

	l = 0;
	while (l < 10)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		l++;
	}
}
