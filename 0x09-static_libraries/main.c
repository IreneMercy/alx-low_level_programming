#include "main.h"
void _putch(char *s);
/**
 * main - function that prints a string
 * @s: - string pointer
 * Return: 0
 */

int  main(char *s)
{
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
	return (0);
}

#include <stdio.h>
/**
 * _puts - function to uotput
 * @s: pointer to string
 * Return: 0
 */
void _puts(char *s)
{
	puts(s);
}
