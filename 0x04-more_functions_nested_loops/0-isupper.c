#include "main.h"
/**
 * main - Enty point.
 * @c: char to check.
 * Return: Always 0.
 */
int main(void)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
