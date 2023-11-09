#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - this function allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of bytes
 * Return: NULL if it fails, return (in) otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *in;
	unsigned int total = 0;

	if ((nmemb == 0) || (size == 0))
	{
		return (0);
	}

	 total = nmemb * size;

	in = calloc(total, sizeof(int));

	if (in == 0)
	{
		return (0);
	}

	return (in);

}
