#include "main.h"

/**
 * _memcpy - copies a part of string to another string
 * @dest: destination string
 * @src: string source
 * @n: number of times to copy
 *
 * Return: character dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
