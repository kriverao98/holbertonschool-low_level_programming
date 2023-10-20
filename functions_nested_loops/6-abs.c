#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - this program computes the absolute value of an int
 * Return: ALways 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		int abs;

		abs = x * -1;

		return (abs);
	}

	return (x);
}
