#include "main.h"

/**
 *
 *
 *
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
