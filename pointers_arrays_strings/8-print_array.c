#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints n elements of an array of ints.
 * @a: Array
 * @n: Number of elements of the array
 * Return: Void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
