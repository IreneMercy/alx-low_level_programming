#include "lists.h"
/**
 * dlistint_len - return number of elements in a linked list
 * @h: pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		node_count++;
		current = current->next;

	}
	return (node_count);
}
