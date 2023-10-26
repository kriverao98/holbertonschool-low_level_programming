#include "main.h"

/**
 * _strcpy - This function copies the sring pointed by src
 * @src: Pointer to be copied
 * @dest: Pointed to var
 *  Return: dest (Success)
 */

char *_strcpy(char *dest, char *src)

{
	int x = 0;

	while (src[x] != '\0')

	{
		dest[x] = src[x];

		x++;
	}

	dest[x] = '\0';

	return (dest);
}


