#include "main.h"
#include <stdlib.h>

/**
 * *create_array - This function creates an array of chars
 * @size: The size of the array to be initialized
 * @c: Var. to specifically initialize array with
 * Return: If function fails, NULL, otherwise, s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int in;
	char *s;

		if (size <= 0)
			return (0);

	s = malloc(size * sizeof(char));

	if (s == 0)
		return (0);


	for (in = 0; in < size; ++in)
	{
		s[in] = c;
	}

	return (s);
}
