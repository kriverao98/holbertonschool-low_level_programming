#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the parameter to be checked
 * Return: x (Success)
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)

	{
		x = x * -1;
	}
	_putchar(x + '0');

	return (x);
}
