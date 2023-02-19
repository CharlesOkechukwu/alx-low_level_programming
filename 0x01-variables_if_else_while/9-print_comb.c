#include <stdio.h>

/**
 * main - prints single digit numbers separated by comma and spaces
 *
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
			n++;
		}
		else
		{
			n++;
		}
	}
	putchar('\n');
	return (0);

}
