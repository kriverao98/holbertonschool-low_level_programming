#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - Returns the number of elements in a linked dlistint_t list.
* @h: A pointer to the head of the doubly linked list.
*
* Return: The number of nodes (elements) in the doubly linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}
	return (node_count);
}
