#include "main.h"

/**
 * _strncat - concatenate two strings until n bytes
 * @dest: starting string
 * @src: concatenated string
 * Return: dest (Success)
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
