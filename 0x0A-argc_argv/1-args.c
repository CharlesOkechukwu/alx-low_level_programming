#include "main.h"
#include <stdio.h>

/**
 * main - print the argument count
 * @argc: argument count
 * @argv: argument array
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
