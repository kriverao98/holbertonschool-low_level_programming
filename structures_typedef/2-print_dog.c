#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - This function prints out struct dog
 * @d: Pointer to struct
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
