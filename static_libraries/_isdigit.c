#include "main.h"

/**
 * _isdigit - Function that checks if variable is a digit,
 * it returns 1 if its a digit, and 0 otherwise.
 * @c: Variable to be checked
 * Return: 1 if its a digiti, 0 if otherwise (Success)
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
