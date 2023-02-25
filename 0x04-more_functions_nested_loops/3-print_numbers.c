#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int cnt;

	cnt = '0';
	while (cnt <= '9')
	{
		_putchar(cnt);
		cnt++;
	}
	_putchar('\n');
}
