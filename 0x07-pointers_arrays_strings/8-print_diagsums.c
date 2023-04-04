#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: integer
 * @size: integer
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int y, x = 0, z = 0;

	for (y = 0; y < size; y++)
	{
		x += a[y];
		a += size;
	}

	a -= size;

	for (y = 0; y < size; y++)
	{
		z += a[y];
		a -= size;
	}
	printf("%d, %d\n", x, z);
}
