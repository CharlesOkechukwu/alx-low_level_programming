#include "main.h"

/**
 * _strcpy - copies string from one pointer to the another pointer
 * @dest: the pointer the string is copied to
 * @src: the pointer bearing the source string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
