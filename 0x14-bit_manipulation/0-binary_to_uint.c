#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: point to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int base2, sum;

	if (!b)
		return (0);

	sum = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			sum += base2;
		}
	}

	return (sum);
}
