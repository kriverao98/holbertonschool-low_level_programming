#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: The string to be reversed
 * Return: Void (Success)
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[i++])
	{
		len++;
	}

	for (i = len - 1; i >= len / 2; i--)

	{
		temp = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = temp;

	}

}
