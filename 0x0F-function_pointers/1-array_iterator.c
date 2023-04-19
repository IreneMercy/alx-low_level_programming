#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as parameter
 * of each element in array
 * @array: array
 * @size: size of array
 * @action : pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action == NULL || array == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
