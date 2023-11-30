#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - this function returns the number of elements in list_t list
 * @h: pointer to the head of the list
 * Return: node_count
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
