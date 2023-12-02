#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - Frees a linked list and its nodes
 * @head: A pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
