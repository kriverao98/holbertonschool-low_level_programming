#include "main.h"
#include <stdlib.h>

/**
 * array_range - this function creates an array of ints
 * @min: the first value of array
 * @max: the last value of array
 * Return: Return NULL if min > max, or if malloc fails,
 * otherwise, total_val
 */

int *array_range(int min, int max)
{
	int *total_val;
	int in;

	if (min > max)
	{
		return (0);
	}

	total_val = malloc((max - min + 1) * sizeof(int));

	if (total_val == 0)
	{
		return (0);
	}

	for (in = 0; in <= max; ++in)
	{
		total_val[in] = min++;
	}

	return (total_val);
}
