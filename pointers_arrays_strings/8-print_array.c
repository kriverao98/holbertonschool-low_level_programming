#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int x = 0;

	while (a[x] < n)
	{
		printf("%d ,", a[x]);
		x++;
	}

	printf("\n");
}
