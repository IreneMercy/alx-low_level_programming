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
	list_t *end_node = head;

	while (end_node)
	{
		end_node = head->next;
		free(end_node->str);
		free(end_node);
	}
}
