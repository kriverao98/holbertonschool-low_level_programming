#include "main.h"

/**
 * reset_to_98 - This function that takes a pointer to an
 * int as parameter and updates the value it points to to 98.
 * @n: variable to be pointed to
 */

void reset_to_98(int *n)
{
	if (n)
	{
		*n = 98;
	}
}
