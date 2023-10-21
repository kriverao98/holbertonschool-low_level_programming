#include <stdio.h>
#include "main.h"
/**
 * main - this program prints all natural numbers until 98
 *@c: the number to start with
 *Return: Always 0
 */

void print_to_98(int c)

{
	if (c <= 98)
{
	for (; c <= 98; c++)
	{
		if (c == 98)
		{
			printf("%d ", c);
			printf("\n");
			break;
		}
		else
		{
			for (; c >= 98; c--)
			{
				if (c == 98)
				{
					printf("%d", c);

					printf("\n");

					break;
				}

				else
				{
					printf("%d, ", c);
				}
			}
		}
	}
}
}
