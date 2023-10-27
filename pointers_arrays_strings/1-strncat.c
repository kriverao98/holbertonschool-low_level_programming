#include "main.h"

/**
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)

{
	int in = 0;
	int len = 0;

	while (dest[len])
	{
		len++;
	}

	while (src[in] && in < n)
	{
		dest[len] = src[len];

		in++;
		len++;
	}

	dest[len + in] = '\0';

	return (dest);

}
