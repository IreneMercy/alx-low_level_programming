#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 * @size: size of array
 * @c: character value
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
		return (NULL);
	for (x = 0; x < size; x++)
		ptr[x] = c;
	return (ptr);

}
