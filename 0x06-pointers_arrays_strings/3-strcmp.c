#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int l, k, diff;

	i = 0;
	j = 0;
	k = 0;
	diff = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i <= j)
	{
		l = i;
	}
	else
	{
		l = j;
	}
	while (k <= l)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			diff = s1[k] - s2[k];
			break;
		}
		k++;
	}
	return (diff);
}
