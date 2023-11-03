#include "main.h"

/**
 * _memset - Entry point
 * @s: destination
 * @b: constant byte
 * @n: bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}
