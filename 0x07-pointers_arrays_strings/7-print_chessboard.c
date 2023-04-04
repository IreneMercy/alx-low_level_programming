#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer
 * Result: 0
 */
void print_chessboard(char (*a)[8])
{
	int x, z;

	for (x = 0; x < 8; x++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[x][z]);
		}
		_putchar('\n');
	}
}
