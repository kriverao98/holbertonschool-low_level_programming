#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* struct list_s - A structure representing a linked list node
* @str: The string data of the node
* @len: The length of the string
* @next: A pointer to the next node in the list
*
* Description: This structure defines a node for a linked list.
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
