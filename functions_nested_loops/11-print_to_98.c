#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - program that prints all natural numbers
 * @n: number that start
 */

 void print_to_98(int n)
 {
	if(n >= 98)
	{
		printf("%d, ", n++);

		printf("\n");
	}
	else
	{
		if(n <= 0)
			
			printf("%d, ", n--);

			printf("\n");
	}
}
