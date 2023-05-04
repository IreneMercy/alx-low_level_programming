#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to
 * @n: number
 * @m: number
 * Return: 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int iter = 0;
	unsigned long int flip = n ^ m;

	while (flip != 0)
	{
		iter += flip & 1;
		flip >>= 1;
	}

	return (iter);
}
