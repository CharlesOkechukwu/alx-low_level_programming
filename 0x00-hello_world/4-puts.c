#include <stdio.h>

/**
 * main - prints a string with put
 * @str[]: A char variable, made up of multiple characters
 *
 * stdio.h: included the stdio.h header that hold the put function
 * Return: 0
 */

int main(void)
{
	/* initializing the str[] variable and giving it a value */
	char str[] = "\"Programming is like building a multilingual puzzle";

	/* writing to stdout */
	puts(str);

	return (0);
}
