#include "main.h"

/**
 * *_strncat - appends two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[length] >= n)
		length++;

	for (i = 0; src[length] && i < n; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
