#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: to be printed
 */

void print_rev(char *s)
{
	int j = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
