#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees a linked list and its nodes
 * @head: A pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
