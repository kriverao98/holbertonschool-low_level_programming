#include "main.h"

/**
 * _atoi - This function coverts a string to an int
 * @in: Index var
 * @x: Stores converted values
 * @b: Handles the char value
 * @c: Tracks num char
 * Return: in
 */

int _atoi(char *s)
{
	int x = 0;

	unsigned int in = 0;

	int c = 1;

	int i = 0;

	while (s[x] == 45)

	{
		if (s[x] == 45)

		{
			c *= -1;

		}

		while (s[x] >= 48 && s[x] <= 57)

		{
			i = 1;

			in = (in * 10) + (s[x] - '0');
			x++;
		}

		if (i == 1)
		{
			break;
		}

		x++;
	}

	in *= c;

	return (in);
}
