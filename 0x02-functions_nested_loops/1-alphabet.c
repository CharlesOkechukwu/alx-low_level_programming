#include "main.h"

/**
 * print_alphabet - prints all alphabets in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph < 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');

}
