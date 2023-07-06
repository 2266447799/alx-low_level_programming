#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: integer to be modified
 *
 * Return: 1 if prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - checks if number is prime
 * @n: first integer
 * @i: second integer
 *
 * Return: 1 if prime, else 0
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
