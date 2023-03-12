#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers and print
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
