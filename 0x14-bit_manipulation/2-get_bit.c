#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index
 * @n: integer value
 * Return: valuo of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	const unsigned int num_bits = 64;
	int format;

	if (index > num_bits - 1)
	{
		return (-1);
	}
	format = (n >> index) & 1;

	return (format);
}
