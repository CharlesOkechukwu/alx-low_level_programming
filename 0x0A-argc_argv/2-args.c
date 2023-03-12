#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments in aprogram
 * @argc: argument count
 * @argv: arguments in the function
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
