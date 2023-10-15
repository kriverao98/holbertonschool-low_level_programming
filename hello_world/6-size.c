#include <stdio.h>

/**
 * main - C program that prints the size of various types
 * Description 
 * retur: Always 0 
 */

int main (void)
{
	int intType;
	float floatType;
	char charType;
	long long longlongType;
	long longType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
