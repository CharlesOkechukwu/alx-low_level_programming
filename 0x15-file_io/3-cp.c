#include "main.h"
#include <stdio.h>

/**
 * main - create copy of a file
 * @argc: argument count
 * @argv: argument array
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
	cpy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * cpy_file - duplicate content of a file
 * @file_from: the origin file
 * @file_to: the file to recieve content
 *
 * Return; void
 */

void cpy_file(const char *file_from, const char *file_to)
{
	int op1, op2, wr, rd;
	long int append;
	char buffer[1024];

	op1 = open(file_from, O_RDONLY);
	rd = read(op1, buffer, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	append = S_IRUSR | S_IWUSR | S_IRGRP | S_IRGRP | S_IWGRP | S_IROTH;
	op2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, append);
	wr = write(op2, buffer, rd);
	if (wr == -1 || op2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(op1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1);
		exit(100);
	}
	if (close(op2) == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100);
	}
}
