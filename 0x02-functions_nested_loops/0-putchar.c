#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character p to stdout
 * @p: The character to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and an error is set appropriately
 */

int _putchar(char p)
{
	return (write(1, &p, 1));
}

/**
 * main - This the entry point
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
