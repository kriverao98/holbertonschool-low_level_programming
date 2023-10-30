#include "main.h"

/**
 * leet - This function that encodes a string into 1337
 * @str: string to be encoded
 * Return: str
 */

char *leet(char *str)
{
	int index = 0, in;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index])
	{
		for (in = 0; in <= 7; in++)
		{
			if (str[index] == leet[in] ||
			    str[index] - 32 == leet[in])
				str[index] = in + '0';
		}

		index++;
	}

	return (str);
}
