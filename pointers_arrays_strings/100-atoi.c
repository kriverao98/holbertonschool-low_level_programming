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
	int sign = 1; 

	unsigned int num = 0;

	do
	{
		if (*s == '-')

			sign *= -1;

		else if (*s >= '0'  && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	}

	while (*s++);

	return (num * sign);
}
