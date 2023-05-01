#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a linked list
 * @head: pointer
 * @index: index of the node, starting at 0
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr_node;

	curr_node = head;
	while (curr_node != NULL && i < index)
	{
		curr_node = curr_node->next;
		i++;
	}

	if (i != index || curr_node == NULL)
	{
		return (NULL);
	}

	return (curr_node);

}
