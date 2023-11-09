#include "main.h"

/**
 * string_toupper - This function changes lower case chars to upper case
 * @str: string to be changed
 * Return: str
 */

char *string_toupper(char *str)

{
	int in = 0;

	while (str[in])

	{

		if (str[in] >= 'a' && str[in] <= 'z')
			str[in] -= 32;

		in++;

	}

	return (str);
}
