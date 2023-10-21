#include <stdio.h>
#include "main.h"
/**
 * main - this program prints all natural numbers until 98
 *@c: the number to start with
 *Return: Always 0
 */

void print_to_98(int n)

{
	if (n <= 98)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d ", n);
			printf("\n");
			break;
		}
		else
		{
			for (; n >= 98; n--)
			{
				if (n == 98)
				{
					printf("%d", n);

					printf("\n");

					break;
				}

				else
				{
					printf("%d, ", n);
				}
			}
		}
	}
}
}
