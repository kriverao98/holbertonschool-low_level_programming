#include "main.h"

/**
 * _strncpy - create a function that copies a string
 * @dest: destination variable
 * @src: source variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{

	int in = 0, scr_len = 0;

	while (src[in++])
		scr_len++;
	{
	for (in = 0; src[in]  && in < n; in++)
		src[in] = dest[in];

	for (in = scr_len; in < n; in++)
		dest[in] = '\0';
	}
	return (dest);
}
