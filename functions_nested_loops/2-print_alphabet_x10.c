#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - program that prints the alphabet
 * Return: Void (Success)
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)

		putchar(a);
		{
			putchar('\n');
		}
	}
}
