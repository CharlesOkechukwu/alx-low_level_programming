#include <stdio.h>

/**
 * main - print all numbers of base 16
 *
 * Return: 0
 */

int main(void)
{
	int bnum;
	char alph;

	bnum = '0';
	alph = 'a';
	while (bnum <= '9')
	{
		putchar(bnum);
		bnum++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		++alph;
	}
	putchar('\n');
	return (0);

}
