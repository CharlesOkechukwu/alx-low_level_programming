#include "main.h"

/**
 * puts_half - prints half the characters of a string
 * @str: string passed into the function
 *
 * Return: void
 */

void puts_half(char *str)
{
	int count;
	int n, even;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if ((count % 2) == 0)
	{
		even = count / 2;
		while (even < count)
		{
			_putchar(str[even]);
			even++;
		}
	}
	else
	{
		n = ((count - 1) / 2) + 1;
		while (n < count)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
