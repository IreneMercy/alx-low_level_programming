#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x = 0;
	int y = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	x = 0;
	y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	ptr = malloc(sizeof(char) * (x + y + 1));

	if (ptr == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		ptr[x] = s2[y];
		x++, y++;
	}

	ptr[x] = '\0';
	return (ptr);
}
