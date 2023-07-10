#include "main.h"

/**
 * append_text_to_file - append a text to a file
 * @filename: name of file to append text to
 * @text_content: content to append to file
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		wr = write(op, text_content, count);
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(op);
	return (1);
}
