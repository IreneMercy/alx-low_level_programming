#include "main.h"
#include <stdio.h>

int _atoi(char *s);
/**
 * main - prints the programs name
 * @argc: number of arguments entered
 * @argv: string values
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int val_1, val_2, total;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	
	val_1 = _atoi(argv[1]);
	val_2 = _atoi(argv[2]);
	total = val_1 * val_2;

	printf("%d", total);
	printf("\n");
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _atoi - string to integer
 * @s: string value
 * Return: 0 success
 */

int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int i = 0;
	int j = 0;
	int rt = 0;
	
	while (s[i] != '\0')
		i++;
	while (x < i && j == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			rt = s[x] - '0';
			if (y % 2)
				rt = -rt;
			z = z * 10 + rt;
			j = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			j = 0;
		}
		x++;
	}
	if (j == 0)
		return (0);

	return(z);
}
