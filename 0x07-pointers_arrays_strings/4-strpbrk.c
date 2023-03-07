#include "main.h"

/**
 * _strpbrk - search for occurence of a set of characters
 * @s: string to be searched
 * @accept: string searched for
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
		}
	}
	return ('\0');
}
