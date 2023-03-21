#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 *
 * Description: 'prints lowercase alphabet'
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
	_putchar('\n');
}
return (0);
}
