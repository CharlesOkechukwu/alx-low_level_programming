#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character which would be checked
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
