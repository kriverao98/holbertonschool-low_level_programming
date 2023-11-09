#include <stdio.h>

/**
 * main - entry point of the program.
 *
 * Description - Simple program that outputs a reversed alphabet
 * and ends with a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');

	return (0);
}
