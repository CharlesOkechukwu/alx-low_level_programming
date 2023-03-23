#include <stdio.h>
#include <stdlib.h>

/**
 * main - print an opcode
 * @argc: argument count
 * @argv: argument araay
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)main;

	for (b = 0; b < a; b++)
	{
		if (b == a - 1)
		{
			printf("%02hhx\n", s[b]);
			break;
		}
		printf("%02hhx", s[b]);
	}
	return (0);
}
