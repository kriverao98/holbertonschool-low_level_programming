#include "main.h"

/**
 * print_rev - This function prints a string, in reverse,
 * followed by a new line.
 * @s: variable to be checked
 */

void print_rev(char *s)
{
	int x = 0, i = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (i = x; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
