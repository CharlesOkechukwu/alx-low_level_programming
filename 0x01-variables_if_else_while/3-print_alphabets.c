#include <stdio.h>

/**
 * main - print both capital and small alphabet letters
 *
 * Return: 0
 */

int main(void)
{
	char calph;
	char salph;

	calph = 'A';
	salph = 'a';
	while (salph <= 'z')
	{
		putchar(salph);
		++salph;
	}
	while (calph <= 'Z')
	{
		putchar(calph);
		++calph;
	}
	putchar('\n');
	return (0);
}
