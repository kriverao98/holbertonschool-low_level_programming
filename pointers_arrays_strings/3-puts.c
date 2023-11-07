#include "main.h"

/**
 * _puts - This function prints a string, followed by a new line.
 *@str: Parameter used
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);

		x++;
	}
	_putchar('\n');
}
