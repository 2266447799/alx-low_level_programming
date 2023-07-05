#include "main.h"

/**
 * factorial - returns factorial of a given nummber
 * @n: number to be modified
 *
 * Return: -1 to indicate an error,
 * else factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
