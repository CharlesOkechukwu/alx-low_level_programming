#include "main.h"

/**
 * puts2 - prints one in every 2 characters of a string
 * @str: string passed in the function
 *
 * Return: void
 */

void puts2(char *str)
{
	int count;
	int i;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
