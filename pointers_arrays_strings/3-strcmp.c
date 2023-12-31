#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: variable to be compared
 * @s2: variable to be compared
 * Return: s1 and s2
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
