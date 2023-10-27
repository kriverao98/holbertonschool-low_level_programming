#include "main.h"
#include "2-strlen.c"
/**
 * _strcat - write a function that concatenates two strings
 * @in: index variable
 * @len: iteration variable
 * Return: dest (Success)
 */

char *_strcat(char *dest, char *src)

{
	int in = 0;
	int len = 0;

	while(dest[in++])
		len++;

		for (; src[in]; in++)
			dest[len++] = src[in];

	return (dest);
}
