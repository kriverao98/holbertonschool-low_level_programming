#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - this function executes a function given as a parameter
 * @array: function array
 * @size: size variable
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t in;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (in = 0; in < size; in++)
		action(array[in]);

}
