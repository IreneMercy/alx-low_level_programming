#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"
/**
 * digit - checks if a string contains only digits
 * @ptr: string value
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int digit(char *ptr)
{
	int x = 0;

	while (ptr[x])
	{
		if (ptr[x] < '0' || ptr[x] > '9')
			return (0);
		x++;
	}
	return (1);
}


/**
 * strlength - finds the length of a string
 * @ptr: string value
 * Return: 0
 */
int strlength(char *ptr)
{
	int x = 0;

	while (ptr[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * errors - displays errors found in main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments entered
 * @argv: string values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s_1, *s_2;
	int len_1, len_2, len, k, conta, item_1, item_2, *final, z = 0;

	s_1 = argv[1], s_2 = argv[2];
	if (argc != 3 || !digit(s_1) || !digit(s_2))
		errors();
	len_1 = strlength(s_1);
	len_2 = strlength(s_2);
	len = len_1 + len_2 + 1;
	final = malloc(sizeof(int) * len);
	if (!final)
		return (1);
	for (k = 0; k <= len_1 + len_2; k++)
		final[k] = 0;
	for (len_1 = len_1 - 1; len_1 >= 0; len_1--)
	{
		item_1 = s_1[len_1] - '0';
		conta = 0;
		for (len_2 = strlength(s_2) - 1; len_2 >= 0; len_2--)
		{
			item_2 = s_2[len_2] - '0';
			conta += final[len_1 + len_2 + 1] + (item_1 * item_2);
			final[len_1 + len_2 + 1] = conta % 10;
			conta /= 10;
		}
		if (conta > 0)
			final[len_1 + len_2 + 1] += conta;
	}
	for (k = 0; k < len - 1; k++)
	{
		if (final[k])
			z = 1;
		if (z)
			_putchar(final[k] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(final);
	return (0);
}
