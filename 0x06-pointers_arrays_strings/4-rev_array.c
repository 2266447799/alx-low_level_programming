#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: character to be reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, c;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
