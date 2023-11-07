#include "main.h"

/**
 * swap_int - This function swaps the value of two ints.
 * @a: Variable to be swapped.
 * @b: Variable to be swapped.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
