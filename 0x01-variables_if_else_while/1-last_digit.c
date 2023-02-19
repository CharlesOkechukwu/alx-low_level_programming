#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks for the last digit of a number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*a variable that captures last digit of n */
	lstd = n % 10;
	if (lstd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstd);
	}
	else if (lstd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	else if (lstd != 0 && lstd < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	}

	return (0);
}
