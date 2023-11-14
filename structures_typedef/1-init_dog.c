#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *init_dog - This function initializes a struct variable
 *
 * @d: pointer variable
 * @name: member parameter
 * @age: member parameter
 * @owner: member parameter
 *
 * Return: 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
