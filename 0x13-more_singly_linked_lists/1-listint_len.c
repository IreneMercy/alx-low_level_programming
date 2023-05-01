#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to function
 * Return: success
 */
size_t listint_len(const listint_t *h)
{
	size_t all = 0;

	while (h != NULL)
	{
		all++;
		h = h->next;
	}
	return (all);
}
