#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function prints a name in lower and upper case.
 * @name: name variable
 * @f: pointer variable
 * Return: if name and f equals NULL, return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;

	f(name);
}
