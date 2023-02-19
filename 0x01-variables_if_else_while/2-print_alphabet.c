#include <stdio.h>

/**
 * main - prints all alphabets in small letters
 *
 * Return: 0
 */

int main(void)
{
	char alph;
	/*set alph variable to a*/
	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}
	putchar('\n');

	return (0);
}
