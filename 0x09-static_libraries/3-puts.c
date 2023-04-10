#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer to string
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		++s;
	}
	_putchar('\n');
}
