#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create two dimensional array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (l = i; l >= 0; l--)
			{
				free(s[l]);
			}
			free(s);
			return (NULL);
		}
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			s[j][k] = 0;
		}
	}
	return (s);
	free(s);
}
