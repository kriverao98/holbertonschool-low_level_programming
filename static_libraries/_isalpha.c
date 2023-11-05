#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the parameter to be checked
 * Return: 1 if lower or upper case, 0 otherwise (Success)
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	{
		return (1);
	}

	return (0);
}
