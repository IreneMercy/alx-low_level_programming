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
	list_t *end_node;

	while (head)
	{
		end_node = head->next;
		free(head->str);
		free(head);
		head = end_node;
	}
}
