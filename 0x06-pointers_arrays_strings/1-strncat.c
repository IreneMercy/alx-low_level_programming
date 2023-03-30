#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int x, y;

x = 0;
while (dest[x] != '\0')
{
x++;
}
for (y = 0; y < n && src[y] != '\0'; y++, x++)
{
dest[x] = src[y];
}
dest[x] = '\0';
return (dest);
}
