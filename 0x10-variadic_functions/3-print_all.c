#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list args_list;

	va_start(args_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator,  va_arg(args_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args_list, double));
					break;
				case 's':
					s = va_arg(args_list, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = (", ");
			i++;
		}
	}
	printf("\n");
	va_end(args_list);
}
