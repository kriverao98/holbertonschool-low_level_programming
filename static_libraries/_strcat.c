#include "main.h"
#include <stdio.h>

/**
 * _strcat - write a function that concatenates two strings
 * @dest: appended string
 * @src: string to be appended
 * Return: dest (Success)
 */

char *_strcat(char *dest, char *src)

{
	int in = 0;
	int len = 0;

	while (dest[in] != 0)
	{
		in++;
	}

	while (src[len] != 0)
	{
		dest[in] = src[len];
		in++;
		len++;
	}
	dest[in] = 0;
	return (dest);
}
