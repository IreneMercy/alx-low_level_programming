#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalizes all words of a string
 * @i: pointer to string
 * Return: 0
 */
char *cap_string(char *i)
{
	int x = 0;

	while (i[x])
	{
		while (!(i[x] >= 'a' && i[x] <= 'z'))
		{
			x++;
		}

		if (i[x - 1] == ' ' ||
		    i[x - 1] == '\t' ||
		    i[x - 1] == '\n' ||
		    i[x - 1] == ',' ||
		    i[x - 1] == ';' ||
		    i[x - 1] == '.' ||
		    i[x - 1] == '!' ||
		    i[x - 1] == '?' ||
		    i[x - 1] == '"' ||
		    i[x - 1] == '(' ||
		    i[x - 1] == ')' ||
		    i[x - 1] == '{' ||
		    i[x - 1] == '}' ||
		    x == 0)
		{
			i[x] -= 32;
		}

		x++;
	}

	return (i);
}
