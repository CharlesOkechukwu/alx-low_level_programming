#include "main.h"

/**
 * leet - encode some alphabet
 * @s: string to enccde
 *
 * Return: char
 */

char *leet(char *s)
{
	int i = 0, j = 0, len = 5;
	char alph[5] = {'A', 'E', 'O', 'T', 'L'};
	char nos[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;
		while (j < len)
		{
			if ((s[i] == alph[j]) || (s[i] - 32 == alph[j]))
			{
				s[i] = nos[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
