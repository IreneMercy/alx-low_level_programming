#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args_list;
	char *s;

	va_start(args_list, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		s = va_arg(args_list, char *);

		if (s == NULL)
			s = ("(nil)");
		printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_list);
}
