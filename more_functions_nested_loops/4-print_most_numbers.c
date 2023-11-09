#include "main.h"

/**
 * print_most_numbers - This function prints the numbers 0 to 9,
 * except 2 and 4, this is followed by a new line.
 * Return: Void (Success)
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)

	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}

	{
		_putchar('\n');
	}
}
