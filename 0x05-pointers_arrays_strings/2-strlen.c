#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: to be modified
 *
 * Return: returns length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
