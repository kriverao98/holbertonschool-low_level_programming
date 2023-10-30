#include "main.h"

/**
 *
 *
 *
 *
 */

void _print_rev_recursion(char *s)
{
	int len = 0, i =0;

	char temp;

	while (s[i++])

	{
		len++;
	}

	for (i = - 1; i >= len / 2; i--)

	{
		temp = s[i];

		s[i] = s[len -i - 1];

		s[len - 1 - 1] = temp;

	}

	_putchar(temp);

	_putchar('\n');
}


