#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal
 * @n: int used
 */

void print_line(int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
