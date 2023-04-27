#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *new_node = head;
	list_t *end_node = new_node;

	while (end_node != NULL)
	{
		new_node = new_node->next;
		free(end_node->str);
		free(end_node);
	}
}
