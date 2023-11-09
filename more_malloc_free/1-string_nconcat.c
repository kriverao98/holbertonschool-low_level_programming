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
	unsigned int s2_len;

	if ((s1 == 0) || (s2 == 0))
	{
		s1 = "";
		s2 = "";
	}

	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	concat = malloc(strlen(s1) + n + 1);

	if (concat == 0)
	{
		return (0);
	}

	strcpy(concat, s1);

	strncat(concat, s2, n);

	return (concat);
}
