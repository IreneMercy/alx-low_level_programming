#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to function
 */

void free_listint2(listint_t **head)
{
	listint_t *final_node;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		final_node = *head;
		*head = (*head)->next;
		free(final_node);
	}

	*head = NULL;
}
