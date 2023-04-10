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
(void)argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
