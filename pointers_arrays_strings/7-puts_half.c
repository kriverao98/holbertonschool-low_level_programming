#include "main.h"
/**
 * puts_half - This function prints out half of a string
 * @str: String to be checked
 */

void puts_half(char *str)
{
	int x, i;
	x = 0;

	while (str[x])
		x++;
	x--;

	for (i = (x / 2) + 1; i <= x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
