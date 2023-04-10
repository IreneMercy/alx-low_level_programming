#include "main.h"
#include <stdio.h>
/**
 * *_memset - function that fills memory with a constant byte
 * @s: address of memory
 * @b:the valuue to be filled
 * @n: number of bytes to be filled
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}
	return (ptr);
}
