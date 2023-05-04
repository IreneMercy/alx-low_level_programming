#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index
 * Return: void
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	const unsigned int num_bits = 64;

	if (index >= num_bits - 1)
	{
		return (-1);
	}

	*n |= 1UL << index;

	return (1);
}
