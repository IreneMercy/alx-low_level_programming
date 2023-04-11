#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to a newly allocated space
 * Return: 0
 */
char *_strdup(char *str)
{
	int x = 0;
	int z = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
		x++;
	ptr = malloc(sizeof(char) * (x + 1));

	if (ptr == NULL)
		return (NULL);
	for (z = 0; str[z]; z++)
		ptr[z] = str[z];
	return (ptr);
}
