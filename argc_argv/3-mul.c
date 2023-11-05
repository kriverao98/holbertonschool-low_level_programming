#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: parameter used
 * @argv: parameter used
 * Return: 1 if wrong, return 0 otherwise
 */

int main(int argc, char *argv[])
{

	int a;
	int b;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		a = atoi(argv[1]);

		b = atoi(argv[2]);

		result = a * b;

		printf("%d\n", result);
	}

	return (0);
}
