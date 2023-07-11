#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of arrays
 * @c: characters to be modified
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	m = malloc(size * sizeof(char));

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}

	return (m);
}
