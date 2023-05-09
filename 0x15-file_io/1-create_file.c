#include "main.h"

/**
 * create_file - create a file and write content to it
 * @filename: filename of the file
 * @text_content : the content to write into the file
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int op, count = 0, wr;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		wr = write(op, text_content, count);
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
