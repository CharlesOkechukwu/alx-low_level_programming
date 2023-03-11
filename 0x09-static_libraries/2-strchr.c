#include "main.h"

/**
 * _strchr - find character in a string
 * @s: string to scan
 * @c: character to search for
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i, count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i <= count; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
