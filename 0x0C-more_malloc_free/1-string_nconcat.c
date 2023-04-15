#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenate strings
 * @s1: string value
 * @s2: string value
 * @n: integer value
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int s1_leng = 0;
	unsigned int s2_leng = 0;
	char *str;

	while (s1 && s1[s1_leng])
		s1_leng++;
	while (s2 && s2[s2_leng])
		s2_leng++;
	if (n >= s2_leng)
		str = malloc(sizeof(char) * (s1_leng + n + 1));
	else
		str = malloc(sizeof(char) * (s1_leng + s2_leng + 1));
	if (str == NULL)
		return (NULL);
	while (i < s1_leng)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < s2_leng && i < (s1_leng + n))
		str[i++] = s2[j++];
	while (n >= s2_leng && i < (s1_leng + s2_leng))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
	free(str);
}
