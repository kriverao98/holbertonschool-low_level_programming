#include "main.h"

/**
 * print_numbers - Function prints the numbers from 0 to 9.
 * Return: Void (Success)
 */

void print_numbers(void)
{
	int a;
	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
