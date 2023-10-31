#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 * @n: number to be checked
 * Return: n
 */

int factorial(int n)

{
	if (n <= 0)

	{
		return -1;
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	return n * factorial(n - 1);
}
