#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int cnt;

	cnt = '0';
	while (cnt <= '9')
	{
		if (cnt != '2' && cnt != '4')
		{
			_putchar(cnt);
			cnt++;
		}
		else
		{
			cnt++;
		}
	}
	_putchar('\n');
}
