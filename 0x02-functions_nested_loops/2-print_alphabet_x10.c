#include "main.h"

/**
 * print_alphabet_x10 - prints all letters of alphabet 10x times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int l;
	char alph;

	l = 0;
	while (l < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}

		_putchar('\n');
		l++;
	}
}
