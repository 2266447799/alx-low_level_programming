#include "main.h"

/**
 * _strcat - appends two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, length = 0;

	while (dest[length] != '\0')
		length++;
	for (i = 0; i <= dest[length]; i++)
		dest[length + i] = src[i];
	return (dest);
}
