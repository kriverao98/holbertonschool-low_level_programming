#include<stdio.h>
/**
 * main - entry point
 * Description - Program that prints all the numbers of base 16 in lowercase
 * followed by a newline.
 * Return: Always 0 (Success)
 */
int main (void)
{
	int y;
	int x;

	for (y = 0; y <= 9; y++)
	{
		putchar(y + '0');
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
