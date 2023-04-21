#include <stdio.h>
#include <stdlib.h>

/**
 * print_opsc - prints opcode
 * @a: adress of main
 * @nb: number of bytes
 * Return: 0
 */
int print_opsc(char *a, int nb)
{
	int i;

	for (i = 0; i < nb; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < nb - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints opcodes
 * @argc: arguments
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opsc((char *)&main, b);
	printf("\n");
	return (0);
}
