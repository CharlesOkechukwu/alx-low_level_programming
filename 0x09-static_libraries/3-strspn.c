#include "main.h"

/**
 * _strspn - searches for a substring in a string
 * @s: the string to search
 * @accept: string to search for
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int count;

	count = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				count++;
				break;
			}
		}
		if (s[a] != accept[b])
		{
			return (count);
		}
	}
	return (count);
}
