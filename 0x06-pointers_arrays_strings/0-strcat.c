#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	x = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
