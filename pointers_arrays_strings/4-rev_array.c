#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of ints.
 * @a: array to be reversed
 * @n: number of array elements
 */

void reverse_array(int *a, int n)

{
	int temp, in;

	for (in = n - 1; in >= n / 2; in--)
	{

		temp = a[n - 1 - in];

		a[n - 1 - in] = a[in];

		a[in] = temp;
	}
}
