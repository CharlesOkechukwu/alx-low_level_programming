#include "main.h"

/**
 * _strcat - cocantenates two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int count, i;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
