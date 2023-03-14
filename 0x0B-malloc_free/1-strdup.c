#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string to copy
 *
 * Return: character
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int j;
	int k;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	s = malloc(j * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		s[k] = str[k];
	}
	s[k] = '\0';
	return (s);
	free(s);
}
