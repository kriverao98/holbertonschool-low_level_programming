#include "main.h"

/**
 *
 *
 *
 */

char *_strcat(char *dest, char *src)

{
	int in = 0;
	int ni = 0;

	while (dest[in] != '\0' || src[ni] != '\0')
		in++;
		ni++;

		{
			dest[in] = src[ni];
		}

		return (dest);

}
