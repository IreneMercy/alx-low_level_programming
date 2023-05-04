#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: value
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, iterate = 0;
	unsigned long int temp;
	const int num_bits = 64;

	for (i = num_bits - 1; i >= 0; i--)
	{
		temp = n >> i;
		if (temp & 1)
		{
			_putchar('1');
			iterate++;
		}
		else if (iterate)
		{
			_putchar('0');

		}
	}
	if (!iterate)
	{
		_putchar('0');
	}

}
