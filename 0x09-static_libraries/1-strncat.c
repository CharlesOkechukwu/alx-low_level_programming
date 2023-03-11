#include "main.h"

/**
 * _strncat - cocantenates two strings with n or more bytes
 * @dest: the first string
 * @src: the second string
 * @n: size of bytes
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int count, i;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}
	dest[count + i] = '\0';
	return (dest);
}
