#include "main.h"

/**
 * _sqrt - square root function
 * @n: first nteger
 * @i: second integer
 *
 * Return: square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to be modified
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
