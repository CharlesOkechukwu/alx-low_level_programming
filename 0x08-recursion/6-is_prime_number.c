#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	return (_prime(n, 2));
}

/**
 * _prime - check for prime number using recursion
 * @n: integer checked
 * @i: iterator
 *
 * Return: 1 or 0
 */

int _prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (_prime(n, i + 1));
}
