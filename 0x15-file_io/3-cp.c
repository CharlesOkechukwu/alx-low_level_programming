#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies one file content to another
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copy(argv[1], argv[2]);
	exit(0);
}

/**
 * _copy - copy file content
 * @file_src: source file
 * @file_to: destination file
 *
 * Return: void
 */

void _copy(const char *file_src, const char *file_to)
{
	int op1, op2, rd, wt;
	char buffer[1024];

	op1 = open(file_src, O_RDONLY);
	if (file_src == NULL || op1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_src);
		exit(98);
	}
	op2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(op1, buffer, 1024)) != 0)
	{
		wt = write(op2, buffer, rd);
		if (wt != rd || op2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_src);
		exit(98);
	}
	if (close(op1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1);
		exit(100);
	}
	if (close(op2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100);
	}
}
