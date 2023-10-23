#include <stdio.h>
#include "main.h"
/**
 * main - Prints Fizz - Buzz
 * @c: int to be checked
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fixx");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", c);
		}
		if (c != 100)
		{
			printf(" ");
		}
		printf("\n");

		return (0);
	}
}
