#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: variable name to print
 * @f: pointer to fnction
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
