#include "main.h"

int sqr(int n, int a);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number whose square root is checked for
 *
 * Return: int square root
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - iterating to find square root of n
 * @n: number whose square root is sort for
 * @i: the iterative number
 *
 * Return: int square root
 */

int sqr(int n, int i)
{
	int sq = i * i;

	if (sq > n)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (i);
	}
	return (sqr(n, i + 1));
}
