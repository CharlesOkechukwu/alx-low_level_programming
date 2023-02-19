#include <stdio.h>

/**
 * main - print all single digit of base 10 including 0
 *
 * Return: 0
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
