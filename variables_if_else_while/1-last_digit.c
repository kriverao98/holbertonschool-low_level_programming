#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry line
 * Description: Simple program that assigns a random num to the 'n' variable.
 * Return: Always 0 (Success)
:wq */

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is %d", n, y);
	{
		if (n > 5)
			printf(" and is greater than 5");

		else if (n == 0)
			printf(" and is 0");

		else
			printf(" and is less than 6 and not 0");
	}
	return (0);
}
