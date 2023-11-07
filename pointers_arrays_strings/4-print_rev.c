#include "main.h"

/**
 * print_rev - This function prints a string, in reverse,
 * followed by a new line.
 * @s: variable to be checked
 */

void print_rev(char *s)
{
	int x = 0, i = 0;

	while (s[x])
	{
		x++;
	}
	for (i = x; i >= 0; i--)
	{
		if (s[i] != '\0')
		{
			_putchar(s[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
