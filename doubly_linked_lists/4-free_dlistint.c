#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - Frees dlistint_t
 * @head: Pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	if (current == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
