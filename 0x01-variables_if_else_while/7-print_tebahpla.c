#include <stdio.h>

/**
 * main - print alphabets in reverse order lower case
 *
 * Return: 0
 */

int main(void)
{
	char alph;

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
		--alph;
	}
	putchar('\n');
	return (0);
}
