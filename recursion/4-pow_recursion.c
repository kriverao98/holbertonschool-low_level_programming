#include "main.h"

/**
 * pow_recursion - This function returns the value of x raised to the
 * power of y.
 * @x: The base number
 * @y: The power
 * Return: The value of x raised to the power of y
 */

int _pow_recursion(int x, int y)

{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
