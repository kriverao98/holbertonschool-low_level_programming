#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d, ", a[x] - 1);
		x++;
	}

	printf("\n");
}
