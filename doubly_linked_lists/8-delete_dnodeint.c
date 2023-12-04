#include "lists.h"
#include <stdio.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given index in a doubly linked list.
* @head: A pointer to a pointer to the head of the doubly linked list.
* @index: The index of the node to be deleted. Indexing starts at 0.
*
* Return: 1 if the deletion is successful, -1 if it fails.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head != NULL)
		{
			dlistint_t *temp = *head;
			*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(temp);
		return (1);
		}
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
