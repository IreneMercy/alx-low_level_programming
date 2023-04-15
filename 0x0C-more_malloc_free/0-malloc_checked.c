#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: integer value
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
