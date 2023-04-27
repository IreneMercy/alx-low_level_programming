#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to string
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t add = 0;

	while (h != NULL)
	{
		add++;
		h = h->next;
	}
	return (add);
}
