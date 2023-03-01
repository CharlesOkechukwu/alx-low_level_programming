#include "main.h"

/**
 * rev_string - reverse a string
 * @s: is the string passed
 *
 * Return: void;
 */

void rev_string(char *s)
{
	int c = 0;
	int k, l;
	char *a, temp;

	while (s[c] != '\0')
	{
		c++;
	}
	a = s;

	for (k = 0; k < (c - 1); k++)
	{
		for (l = k + 1; l > 0; l--)
		{
			temp = *(a + l);
			*(a + l) = *(a + (l - 1));
			*(a + (l - 1)) = temp;
		}
	}
}
