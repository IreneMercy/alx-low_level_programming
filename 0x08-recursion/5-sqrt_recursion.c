#include "main.h"

int square_root(int n, int m);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: value
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	return (square_root(n, 0));

}
int square_root(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (square_root(n, m + 1));
}
