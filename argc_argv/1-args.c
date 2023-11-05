#include <stdio.h>

/**
 * main - print argc
 * @argc: number of arguments
 * @argv: unused var
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
