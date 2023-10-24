#include "main.h"

/**
 * print_rev - This function prints a string, in reverse,
 * followed by a new line.
 * @s: variable to be checked
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] < '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		_putchar(x);
	}
	_putchar('\n');
}
