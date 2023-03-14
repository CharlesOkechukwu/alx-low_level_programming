#include "main.h"
#include <stdlib.h>

/**
 * argstostr - cocantenate arguments
 * @ac: arguments count
 * @av: argument array
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			k++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((k * sizeof(char)) + ac + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[l] = av[i][j];
			l++;
			j++;
		}
		s[l] = '\n';
		j = 0;
		l++;
		i++;
	}
	l++;
	s[l] = '\0';
	return (s);
}
