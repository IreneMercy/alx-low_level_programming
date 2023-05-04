#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: index
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	const unsigned int num_bits = 64;

	if (index >= num_bits - 1)
	{
		return (-1);
	}

	*n &= ~(unsigned long int)(1 << index);

	return (1);
}
