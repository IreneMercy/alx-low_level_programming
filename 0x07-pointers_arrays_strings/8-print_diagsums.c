#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: integer
 * @size: integer
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int y;
	int x = 0;
	int z = 0;

	for (y = 0; y < size; y++)
	{
		x = x + a[y * size +y];
	}
	for (y = size - 1; y > 0; y--)
	{
		z += a[y * size + (size - y - 1)];
	}
	_putchar("%d\n", x, y);
				
}
