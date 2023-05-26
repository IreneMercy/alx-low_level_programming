#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr)
	{
		return (1);
	}

	return (0);
}
