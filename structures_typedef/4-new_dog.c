#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * new_dog - This function creates new_dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
 * Return: pup (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	if (name == NULL || owner == NULL)
		return (NULL);

	pup = malloc(sizeof(dog_t));

	if (pup == NULL)
		return (NULL);

	pup->name = strdup(name);
	pup->owner = strdup(owner);
	pup->age = age;

	if (pup->name == NULL || pup->owner == NULL)
	{
		free(pup->name);
		free(pup->owner);
		free(pup);

		return (NULL);
	}

	return (pup);
}

