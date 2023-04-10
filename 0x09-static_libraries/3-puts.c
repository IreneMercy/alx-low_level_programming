#include "main.h"

/**
 * _puts - prints string followed by new line
 * @s: string
 */

void _puts(char *s)
{
	while(*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
