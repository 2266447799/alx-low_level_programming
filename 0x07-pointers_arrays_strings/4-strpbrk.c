#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to search for
 *
 * Return: number of bytes in the initial segment of s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
