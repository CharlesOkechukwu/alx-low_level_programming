#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file
 * @filename: name of the file
 * @letters: size of letters to be read
 *
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wt;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	rd = read(op, buffer, letters);
	if (rd == -1)
		return (0);

	wt = write(STDOUT_FILENO, buffer, rd);
	if (wt == -1)
		return (0);

	free(buffer);
	close(op);
	return (rd);
}
