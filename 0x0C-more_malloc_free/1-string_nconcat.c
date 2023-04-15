#include "main.h"
#include <string.h>
#include <stdlib.h>

int strlength(char *str);
/**
 * *string_nconcat - concatenate strings
 * @s1: string value
 * @s2: string value
 * @n: integer value
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = 0;
	unsigned int item_1;
	unsigned int item_2;
	unsigned int len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (item_1 = 0; s1[item_1]; item_1++)
		length++;

	len2 = length + n;

	ptr = malloc(sizeof(char) * (len2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (item_1 = 0; item_1 < length; item_1++)
	{
		ptr[item_1] = s1[item_1];
	}

	for (item_2 = 0; item_2 < n; item_2++, item_1++)
	{
		ptr[item_1] = s2[item_2];
	}

	ptr[item_1] = '\0';

	return (ptr);
}
