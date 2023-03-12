#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints sum of positive numberws
 * @argc: argument count
 * @argv: argument array
 *
 * Return: number
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int add;
	char *st;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			st = argv[i];

			for (j = 0; j < strlen(st); j++)
			{
				if (st[j] < 48 || st[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(st);
			st++;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
