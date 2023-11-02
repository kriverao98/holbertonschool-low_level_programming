#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: Variable to be checked
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;

		return(x);
}
