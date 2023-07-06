#include "main.h"

/**
 * _strlen - length of string
 * @s: pointer to a string
 *
 * Return: results
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}

/**
 * palindrome - palindrome
 * @s: pointer
 * @i: position
 * @length: length
 *
 * Return: 1 0r 0
 */
int palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	if (i >= length)
	{
		return (1);
	}
	return (palindrome(s, i + 1, length - 1));
}

/**
 * is_palindrome - palindrome
 * @s: pointer
 *
 * Return: recursion
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strlen(s)));
}
