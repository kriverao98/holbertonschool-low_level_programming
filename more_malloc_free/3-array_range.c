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
	int size = max - min + 1;

	if (min > max)
	{
		return (0);
	}

	total_val = malloc(sizeof(int) * size);

	if (total_val == 0)
	{
		return (0);
	}

	for (in = 0; in < size; in++)
	{
		total_val[in] = min++;
	}

	return (total_val);
}
