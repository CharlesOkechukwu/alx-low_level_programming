#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: s2 size
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, sum, len1 = 0, len2 = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		sum = len1 + len2;
	else
		sum = len1 + n;

	s = malloc(sizeof(char) * sum + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < sum; i++)
	{
		if (i <= len1)
			s[i] = s1[i];

		if (i >= len1)
		{
			s[i] = s2[j];
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
