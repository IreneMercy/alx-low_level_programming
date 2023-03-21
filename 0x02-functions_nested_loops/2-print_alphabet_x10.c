#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char x;
	int count = 0;

	while (count++ <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
