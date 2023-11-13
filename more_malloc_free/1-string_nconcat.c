#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this function concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of bytes of s2 to concatenate to s1
 * Return: NULL if function fails, concat otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2;
	unsigned int a, b;

	if (s1 == NULL) 
	{
		s1 = "";
	}

	if (s2 == NULL) 
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2] && len2 < n; len2++)
		;

	concat = malloc(len1 + len2 + 1);

	if (concat == NULL) 
	{
		return NULL;
    }

	for (a = 0, b = len1 + len2; a < len1; a++, b++) 
	{
		concat[a] = s1[a];
	}

	for (b = 0; b < len2; b++) 
	{
		concat[len1 + b] = s2[b];
	}

	concat[len1 + len2] = '\0';

	return concat;
}
