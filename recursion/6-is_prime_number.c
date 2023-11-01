#include "main.h"

/**
 * prime_num: This function checks if num is divisible
 * @x: num to be checked
 * @div: The divisor
 * Return: 1 if number is divisible, return 0 otherwise
 */

int prime_num(int x, int div)
{
	if (x % div == 0)
		return (0);

	if (div == x / 2)
		return (1);

	return (prime_num(x, div +1));
}

/**
 * is_prime_number: This function checks if num is prime or not
 * @n: number to be checked
 * Return: 1 if num is prime, return 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (00);

	if (n >= 2 && n <= 3)
		return (1);

	return (prime_num(n, div));
}
