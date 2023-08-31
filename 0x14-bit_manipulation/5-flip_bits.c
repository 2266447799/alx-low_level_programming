#include "main.h"

/**
 * flip_bits - returns the number of bits youwould need to flip
 * to get from onr number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	count = 0;
	result = (n ^ m);
	while (result != 0)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
