#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 * @n: number to be checked
 * Return: n
 */

int factorial(int n)

{
	int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
