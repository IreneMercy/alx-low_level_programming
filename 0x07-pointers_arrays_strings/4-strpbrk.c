#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Result: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (char *)s;
			}

		}
		s++;
	}
	return (0);
}
