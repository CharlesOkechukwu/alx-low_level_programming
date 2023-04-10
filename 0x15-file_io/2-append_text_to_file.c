#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - at text to end of a file
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	long wt;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_APPEND);
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
 * _len - returns length of text
 * @text: text
 *
 * Return: int
 */

int _len(char *text)
{
	int count = 0;

	while (text[count])
	{
		count++;
	}
	return (count);
}
