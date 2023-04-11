#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int x;
	int z;
	int **ptr;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);

		if (ptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
			ptr[x][z] = 0;
	}

	return (ptr);
}
