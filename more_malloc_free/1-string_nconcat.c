#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned int in;
	unsigned int len1;
	unsigned int len2;


	if ((s1 == 0) || (s2 == 0))
	{
		s1 = "";
		s2 = "";
	}

	for (in = 0; s1[in] != '\0'; in++)

	concat = malloc(sizeof(char) * (in + n + 1));

	if (concat == NULL)
		return (NULL);

	for (len1 = 0; s1[len1] != '\0'; len1++)
		concat[len1] = s1[len1];

	for (len2 = 0; len2 < n; len2++, len1++)
		concat[len1] = s2[len2];

	concat[len1] = '\0';

	return (concat);
}

