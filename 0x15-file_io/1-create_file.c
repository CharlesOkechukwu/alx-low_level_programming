#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file and writes content to it
 * @filename: name of file
 * @text_content: the content to write
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wt;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		wt = write(op, text_content, _len(text_content));
	}
	if (wt == -1)
		return (-1);

	close(op);
	return (1);
}

/**
 * _len - return length of text-content
 * @text: the text to count
 *
 * Return: int
 */

int _len(char *text)
{
	int count = 0;

	while (text[count] != '\0')
	{
		count++;
	}
	return (count);
}
