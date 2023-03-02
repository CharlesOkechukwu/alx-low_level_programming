#include "main.h"

/**
 * cap_string - capitalize words in a string
 * @s: string passed in the function
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int cnt = 0, i;
	int slen = 13;
	char sc[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[cnt])
	{
		i = 0;
		while (i < slen)
		{
			if ((cnt == 0 || s[cnt - 1] == sc[i]) && (s[cnt] >= 'a' && s[cnt] <= 'z'))
			{
				s[cnt] -= 32;
			}
			i++;
		}
		cnt++;
	}
	return (s);
}
