#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*p)(int, int);
	char *ag;

	ag = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ag == '/' && argv[3] == 0) || (*ag == '%' && argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
