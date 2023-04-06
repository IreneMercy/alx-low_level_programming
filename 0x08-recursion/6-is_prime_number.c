#include "main.h"

int prime_number(int n, int m);
/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: value
 * Result: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}

/**
 * prime_number - function that finds prime number
 * @n: value
 * @m: value
 * Return: 0
 */

int prime_number(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0 && m > 0)
	{
		return (0);
	}
	return (prime_number(n, m - 1));
}
