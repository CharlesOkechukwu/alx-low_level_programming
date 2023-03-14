#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, sum;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	sum = i + j;
	s = malloc((sum * sizeof(char)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (k < sum)
	{
		if (k <= i)
		{
			s[k] = s1[k];
		}
		if (k >= i)
		{
			s[k] = s2[l];
			l++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
