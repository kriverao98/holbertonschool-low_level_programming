#include <stdio.h>
#include "main.h"

/**
 * entry point - void print_alphabet(void)
 * Return: Void (Success)
 */

void print_alphabet(void)
{
	char a;
	{
		for (a = 'a'; a <= 'z'; a++)
		putchar(a);
		{
			putchar('\n');
		}
	}
}
