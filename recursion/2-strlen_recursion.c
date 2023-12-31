#include "main.h"

/**
 * _strlen_recursion - This functions returns the lenght of a string
 * @s: string to be checked
 * Return: string lenght
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;

		len += _strlen_recursion(s + 1);
	}

	return (len);
}
