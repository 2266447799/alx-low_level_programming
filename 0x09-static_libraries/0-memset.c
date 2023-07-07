#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory are to be filled
 * @b: character used to fill memory
 * @n: numbers of bytes to be filled in the address of s
 *
 * Return: pointer to the memory are s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
