#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - This function searches for an int
 * @size: number of elements in array
 * @array: array
 * @cmp: pointer
 *
 * Return: index if succesful, else return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if ((size <= 0) || (array == NULL) || (cmp == NULL))
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			{
				return (index);
			}
	}
	return (-1);
}


