#include "main.h"
#include <stdio.h>

/**
 * main - prints the programs name
 * @argc: number of arguments entered
 * @argv: string values
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", *argv);
	return (0);
}
