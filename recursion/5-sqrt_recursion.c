#include "main.h"

/**
 * _sqrt - This function find the square root of a natural number
 * @num: The number to be checked
 * @root: The root to be tested
 * Return: sqrt if it's a natural number, else return -1
 */

int _sqrt(int num, int root);

int _sqrt_recursion(int n);

int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Find the sqrt of a natural number
 * @n: The number to be checked
 * Return: sqrt if natural number, else return -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
