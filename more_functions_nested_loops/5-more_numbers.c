#include "main.h"
/**
 * more_numbers - This function prints 10 times the numbers 0 to 14,
 * it's followed by a newline.
 * Return: Void (Success)
 */

void more_numbers(void)
{
	int x, c;

	for (x = 0; x <= 9; x++)

	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar((c % 10) + '0');
		}
		{
			_putchar('\n');
		}
	}
}

