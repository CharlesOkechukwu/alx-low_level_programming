#include "main.h"

/**
 * read_textfile - reads a text file tostandard output
 * @filename: name of file to be read
 * @letters: number of characters to be read
 *
 * Return: int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);
	rd = read(op, buffer, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer);
		close(op);
		return (0);
	}
	free(buffer);
	close(op);
	return (rd);
}
