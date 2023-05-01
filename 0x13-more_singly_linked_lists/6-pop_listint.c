#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and returns node data
 * @head: double pointer to function
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *fill = *head;
	int data = (*head)->n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(fill);

	return (data);
}
