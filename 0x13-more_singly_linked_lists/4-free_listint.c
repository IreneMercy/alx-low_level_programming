#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to function
 */

void free_listint(listint_t *head)
{
	listint_t *final_node;

	while (head != NULL)
	{
		final_node = head;
		head = head->next;
		free(final_node);
	}
}
