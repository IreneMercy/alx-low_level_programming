#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that locates a character in a string
 * @s: string
 * @accept: substring
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (0);
}
