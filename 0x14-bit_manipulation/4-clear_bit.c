#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: index for bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int spot;

	if (index > 63)
		return (-1);

	spot = 1;
	*n = *n & (~(spot << index));
	return (1);
}
