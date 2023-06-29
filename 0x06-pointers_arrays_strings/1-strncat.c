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

	while (dest[length] != '\0')
		length++;

	while (src[i] != '\0' && i < n)
	{
		dest[length] = src[i];
		i++;
		length++;
	}

	return (dest);
}
