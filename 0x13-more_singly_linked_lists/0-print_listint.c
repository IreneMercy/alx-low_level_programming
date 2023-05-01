#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a list
 * @h: pointer to function
 * Return: success
 */
size_t print_listint(const listint_t *h)
{
	size_t all = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		all++;
	}
	return (all);
}
