#include<stdio.h>
/**
* _puts - Entry point
* @s: string value
* Return: Always 0 (success)
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar("\n");
}
