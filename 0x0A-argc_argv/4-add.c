#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments entered
 * @argv: string values
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int z;
	unsigned int total = 0;
	char *ptr;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			ptr = argv[x];
			for (z = 0; z < strlen(ptr); z++)
			{
				if (ptr[z] < 48 || ptr[z] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			total += atoi(ptr);
		}
		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

