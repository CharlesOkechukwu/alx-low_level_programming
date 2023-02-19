#include <stdio.h>

/**
 * main - prints all letters of the alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
			++alph;
		}
		else
		{
			++alph;
		}
	}
	putchar('\n');
	return (0);
}
