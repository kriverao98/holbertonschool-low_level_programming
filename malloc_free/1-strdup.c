#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - This function returns a pointer to a space in memory
 * which contains a copy of the string str
 * @str: String to be duplicated
 * Return: NULL if function fails to allocate memory, return d otherwise
 */

char *_strdup(char *str)
{
	char *d;

	if (str == 0)
		return (0);

	d = malloc(strlen(str) + 1);

	if (d == 0)
		return (0);

	strcpy(d, str);

	return (d);
}
