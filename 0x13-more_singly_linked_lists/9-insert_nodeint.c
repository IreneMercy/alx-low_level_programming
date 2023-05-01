#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: the index
 * @head: head of listt
 * @n: value of a node
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *newest_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	newest_node = *head;
	while (newest_node != NULL && i < idx - 1)
	{
		newest_node = newest_node->next;
		i++;
	}
	if (i != idx - 1 || newest_node == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = newest_node->next;
	newest_node->next = new_node;

	return (new_node);
}
