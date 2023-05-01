#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *end_node;

	while (head)
	{
		end_node = head->next;
		free(head);
		head = end_node;
	}
}
