#include <stdio.h>

/**
 * main - prints all single digits of base ten using putchar
 *
 * Return: 0
 */

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
