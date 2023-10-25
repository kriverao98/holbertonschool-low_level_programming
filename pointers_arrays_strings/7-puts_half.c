#include "main.h"
#include "2-strlen.c"
/**
 *
 *
 */

void puts_half(char *str)
{
	int x, i;

	x = _strlen(str);
	x--;

	for (i = (x / 2) + 1; i <= x; j++)
		_putchar(str[x]);
	_putchar('\n');
}
