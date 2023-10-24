#include "main.h"

/**
 * print_rev - This function prints a string, in reverse,
 * followed by a new line.
 * Return: Void (Success)
 */

void print_rev(char *s)
{
	int len, l;
	char *start, *end, temp;

	len = _strlen(s);
	start = s;
	end = s;

	for (l = 0; l < len -1; l++)
		end++;

	for(l = 0; l < len/2; l++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	_putchar(l);
}
