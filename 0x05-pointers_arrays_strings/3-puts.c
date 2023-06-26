#include "main.h"

/**
 * _puts - prints a string
 * @str: to be modified
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] < 65);
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
