#include "variadic_functions.h"

/**
 * sum_them_all - calculate sum of parameters
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args_list;

	va_start(args_list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args_list, int);
	}
	va_end(args_list);
	return (sum);
}
