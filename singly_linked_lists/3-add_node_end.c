#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Adds a new node at the end of a linked list
* @head: A pointer to the head of the linked list
* @str: The string to be stored in the new node
*
* Return: Address of the new node, or NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *last;

	if ((str == NULL) && (str == NULL))
		return (NULL);

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->str = strdup(str);

	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}

	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = end_node;

	return (end_node);
}

