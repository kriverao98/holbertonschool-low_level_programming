#include <stdio.h>

/**
 * entry point - simple program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x;
	{
		for (x = 'a'; x <= 'z'; x++)

		putchar(x);
			{
				putchar('\n');
			}
	}
}

int main(void)
{
	print_alphabet();
	
	return (0);
}
