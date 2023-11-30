#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Print all elements of list_t list
 * @h: A pointere to the head of the list
 * Return: node_count
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}

