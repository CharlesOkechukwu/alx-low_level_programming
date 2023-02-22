#include "main.h"

/**
 * _islower - checks if character is upper or lower case
 * @c: The character passed that will be checked
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
