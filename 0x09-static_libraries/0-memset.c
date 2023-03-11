#include "main.h"

/**
 * _memset - fill a memory with a character n times
 * @s: this is the pointer that points to a memory
 * @b: this is the character to be filled
 * @n: number of times to fill
 *
 * Return: char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
