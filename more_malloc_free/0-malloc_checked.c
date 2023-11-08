#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - this function allocates memory using malloc
 * @b: parameter
 * Return: in if succesfull
 */

void *malloc_checked(unsigned int b)
{
	void *in = malloc(b);

	if (in == 0)
	{
		exit(98);
	}

	return (in);
}
