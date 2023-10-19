#include <stdio.h>

/**
 * main - entry point
 * Description - This program prints all posible combinations 
 * of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for(x = '0'; x <= '9'; x++)

	{
		putchar(x);

		{
			putchar(',');

			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
