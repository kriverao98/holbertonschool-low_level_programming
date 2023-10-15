#include <stdio.h>

/**
 * main - C program that prints the size of various types
 * Description
 * retur: Always 0
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long long longlongType;
	long longType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
