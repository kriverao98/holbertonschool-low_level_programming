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
	int in = 0;

	unsigned int x = 0;

	int b = 1;

	int c = 0;

	{

		while (s[in])

		{
			if (s[in] == 45)

			{
				b *= -1;
			}

			while (s[in] >= 48 && s[in] <= 57)

			{
				c = 1;

				x = (x * 10) + (s[c] - '0');

				in++;
			}

			if (c == 1)
			{
				break;
			}

			in++;
		}
		x *= b;

		return (in);
	}
}



