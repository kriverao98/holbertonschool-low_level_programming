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
	unsigned int total = nmemb * size;
	char *dex;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
	{
		return (0);
	}

	in = malloc(total);

	if (in == 0)
	{
		return (0);
	}

	dex = in;

	for (; i < total; ++i)
	{
		dex[i] = 0;
	}

	return (in);
	free(in);

}
