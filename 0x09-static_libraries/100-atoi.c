#include "main.h"

/**
 * _atoi - string to integer
 * @s: string value
 * Return: 0 success
 */

int _atoi(char *s)
{
	int x = 1;
	int y = 0;
	unsigned int rt = 0;

	while(s[y] <= 9 && s[y] >= 0 && s[y] != '\0')
	{
		rt = (rt * 10) + (s[y] - '0');
		y++;

	}
	rt = x;
	return (rt);
}
