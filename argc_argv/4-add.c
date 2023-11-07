#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive int
 * @argv: parameter used
 * @argc: parameter used
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int dec1, sum = 0, dec2, a;

	for (dec1 = 1; dec1 < argc; dec1++)
	{
		for (dec2 = 0; argv[dec1][dec2] != '\0'; dec2++)
		{
			if (!isdigit(argv[dec1][dec2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[dec1]);
		sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
