#include "main.h"
#include <stdio.h>

/**
* flip_bits - Counts the number of bits needed to flip
* to convert one number to another.
* @n: The first input number.
* @m: The second input number.
*
* Return: The number of bits needed to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int flip_count = 0;

	while (result > 0)
	{
		flip_count += result & 1;
		result >>= 1;
	}
	return (flip_count);
}
