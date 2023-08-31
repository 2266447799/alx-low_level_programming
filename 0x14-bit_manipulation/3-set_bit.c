#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index for bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int spot;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	spot = 1;
	*n = *n | (spot << index);
	return (1);
}
