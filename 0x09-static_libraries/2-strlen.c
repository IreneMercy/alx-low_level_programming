#include "main.h"
#include <string.h>

/**
 * _strlen - check the code
 *@s: variable containing string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int leng = 0;

	while (s[leng])
		leng++;
	return (leng);
}
