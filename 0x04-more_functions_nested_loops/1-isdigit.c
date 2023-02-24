#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: the character that is parsed in the function
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
