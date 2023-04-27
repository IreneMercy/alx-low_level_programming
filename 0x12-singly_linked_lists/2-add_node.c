#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to list
 * @str: new string
 * Return: success
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	while (str[len])
	{
		len++;
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
