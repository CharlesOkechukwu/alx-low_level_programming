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
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ag = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(ag);
	if (p == NULL || ag[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ag == '/' && num2 == 0) || (*ag == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(num1, num2));
	return (0);
}
