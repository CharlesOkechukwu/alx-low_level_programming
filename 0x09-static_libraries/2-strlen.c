#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: variable string passed
 *
 * Return: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
