#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: character to be printed
 */

void puts_half(char *str)
{
	int length, a, b;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	a = (length - 1) / 2;
	for (b = a + 1; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
