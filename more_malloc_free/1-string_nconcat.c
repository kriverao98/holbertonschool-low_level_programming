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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int result_len = (n >= len2) ? len1 + len2 : len1 + n;

	if ((s1 == 0) || (s2 == 0))
	{
		s1 = "";
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);


	concat = malloc(result_len + 1);

	if (concat == 0)
	{
		return (0);
	}

	strcpy(concat, s1);

	strncat(concat, s2, (n >= len2) ? len2 : n);

	return (concat);
}
