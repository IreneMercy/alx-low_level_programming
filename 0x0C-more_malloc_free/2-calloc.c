#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array of nmemb elements
 * @size: size of bytes
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0;
	int y = 0;
	char *ptr;

	y = nmemb * size;
	ptr = malloc(sizeof(char) * y);
	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL )
		return (NULL);
	while (x < y)
	{
		ptr[x] = 0;
		x++;
	}
	return (ptr);
}
