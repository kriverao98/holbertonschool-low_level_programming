#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - This function concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: Null on failure, concat otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == 0)
	{
		s1 = "";
	}

	if (s2 == 0)
	{
		s2 = "";
	}

	concat = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (concat == 0)
	{
		return (0);
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
