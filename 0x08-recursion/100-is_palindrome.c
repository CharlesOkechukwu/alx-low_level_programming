#include "main.h"

int strlen_(char *s);
int cmp(char *s, int a, int b);

/**
 * is_palindrome - checks if a string is an empty string
 * @s: the string
 *
 * Return: 1 0r 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (cmp(s, 0, strlen_(s) - 1));
}

/**
 * cmp - checks each string character
 * @s: the string
 * @a: small iterator
 * @b: big iterator
 *
 * Return: int
 */

int cmp(char *s, int a, int b)
{
	if (s[a] == s[b])
	{
		if (a == b || a == b + 1)
		{
			return (1);
		}
		return (cmp(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * strlen_ - get length of string
 * @s: string
 *
 * Return: int
 */

int strlen_(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_(s + 1));
}
