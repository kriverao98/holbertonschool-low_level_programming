#include "main.h"

/**
 * _isupper - Program returns (1) if int c is upper case,
 * returns (0) otherwise.
 * @c: parameter to be checked
 * Return: 1 if c is upper case, 0 otherwise (Success)
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 97))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
