#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: number to be used
 * @b: number to be used
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: number to be used
 * @b: number to be used
 * Return: calc
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: number to be used
 * @b: number to be used
 * Return: calc
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: number to be used
 * @b: number to be used
 * Return: calc
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds modulus of two numbers
 * @a: number to be used
 * @b: number to be used
 * Return: calc
 */

int op_mod(int a, int b)
{
	return (a % b);
}
