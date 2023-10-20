#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * c: the parameter to be checked
 * Return: 1 if lowercase, 0 otherwise (Success)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);

}
