#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte(\0) at the end of dest,
 * then adds a terminating null byte
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
	{
		dest[length + i] = src[i];
	}
	return (dest);
}
