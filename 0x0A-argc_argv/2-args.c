#include "main.h"
#include <stdio.h>

/**
 * main - prints the programs name
 * @argc: number of arguments entered
 * @argv: string values
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s", argv[x]);
		printf("\n");
	}
	return (0);
}
