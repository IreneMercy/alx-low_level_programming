#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elemnts in array
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
		if (cmp(array[x]))
			return (x);
	return (-1);
}
