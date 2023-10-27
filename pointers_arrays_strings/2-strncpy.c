#include "main.h"

/**
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)

{
	int in = 0, src_len = 0;

	while (src[in++])
		src_len++;

	for (in = 0; src[in] && in < n; in++)
		dest[in] = src[in];

	for (in = src_len; in < n; in++)
		dest[in] = '\0';

	return (dest);
}
